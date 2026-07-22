# OFM-SolarmanPV — lokale Anbindung über Modbus TCP

## Context

Solarman-Logger-Sticks stecken in sehr vielen Wechselrichtern (Deye, Sofar, SolaX, diverse OEMs) und
deren Batteriespeichern. Ziel ist, Momentanleistung, Erträge, Netzbezug/-einspeisung und Batteriezustand
als KNX-Gruppenobjekte verfügbar zu machen.

Entschieden ist die **lokale Route**: TCP zum Logger-Stick auf Port 8899, Modbus RTU eingepackt im
proprietären Solarman-V5-Protokoll. Keine Cloud, keine Rate-Limits, keine Developer-Account-Hürde,
Sekunden-Aktualität — damit auch für Überschussregelung und Laststeuerung tauglich, nicht nur für Anzeige.

Der Preis dafür ist das Registerkarten-Problem: lokal liest man rohe Registernummern, und deren Bedeutung
hängt vom Wechselrichtermodell ab.

## Entscheidungen

| Frage | Entscheidung |
|---|---|
| Zielplattform | **Nur ESP32** — kein RP2040-Zweig |
| Datenrichtung | **Nur lesen** in v1, kein Schreiben von Holding-Registern |
| Anzahl Logger-Sticks | **4 Geräte** |
| Anzahl Messwerte | **40 Kanäle** |
| Ort des Geräteprofils | **Je Gerät**, nicht je Kanal |
| Zielprojekt | **OAM-NetworkService** |

Zur Plattformwahl: Der RP2040-Zweig hätte rohes lwIP mit Callback-Trampolin und Single-Instance-Routing
gebraucht (Muster `OFM-Network/src/OpenKNX/Network/MQTT/Client.h:111-124`). Mit ESP32-only wird der
TCP-Client ein schlanker `WiFiClient`-Wrapper.

Zum Profil-Ort: Ein Logger-Stick hängt an genau einem Wechselrichtermodell. Läge das Profil im Kanal,
müsste dieselbe Wahl in bis zu 40 Kanälen wiederholt werden — mit dem Risiko, sie inkonsistent zu setzen.
Am Gerät hinterlegt erlaubt es denselben Mischbetrieb verschiedener Modelle, aber ohne Wiederholung.

## Testhardware — bestimmt das erste Profil

| | |
|---|---|
| Wechselrichter | **Deye SUN-M80G3** (Mikrowechselrichter) |
| Logger | **im Wechselrichter integriert**, kein separater Stick |
| Anbindung | WLAN, IP 192.168.30.201, **Port 8899 → Solarman V5** |
| Referenz | läuft mit `ha-solarman`, Profil „Auto", Daten kommen an |

**Wichtig: Das erste Profil ist ein Mikrowechselrichter, nicht `deye_hybrid`.** Der Wertesatz ist deutlich
kleiner: PV1/PV2 (Spannung, Strom, Leistung), Netz (Spannung, Strom, Frequenz), Gesamtleistung,
Energiezähler, Gerätestatus. **Kein Akku, kein Netzbezug/-einspeisung, kein Work Mode.** Das ist ein
günstiger Einstieg — wenige Register, alle am Gerät direkt plausibilisierbar, und die problematischen
Fälle (Akku-Vorzeichen, Bezug/Einspeisung-Verwechslung) treten gar nicht erst auf.

Die Hybrid-Profile mit Batterie kommen erst danach — und dann ohne eigenes Testgerät, also mit
entsprechendem Vorbehalt in der Doku.

### Logger-Seriennummer: Autoerkennung — am Gerät verifiziert

Der HA-Konfigurationsdialog fragt **kein Feld für die Seriennummer** ab, obwohl V5 sie im Header zwingend
braucht. Am echten Gerät (2026-07-22) geklärt:

- **UDP-Broadcast auf Port 48899 funktioniert NICHT** — der Port ist geschlossen (ICMP „port unreachable").
  Die verbreitete Discovery-Methode scheidet hier aus.
- **Der Logger validiert die Seriennummer sehr wohl.** Mit korrekter SN kommt eine gültige Modbus-Antwort
  (`01 03 08 …`); mit `0` oder einer falschen SN antwortet er mit einem Fehlerrahmen (`06 00 …`) ohne Daten.
- **Aber der Antwort-Header trägt immer die echte SN** — auch im Fehlerrahmen.

**Daraus folgt der Discovery-Weg:** einen beliebigen V5-Frame mit Seriennummer `0` senden, aus der Antwort
die Bytes **7…10 (LE, 4 Byte)** lesen — das ist die echte Logger-Seriennummer — und mit ihr die eigentlichen
Requests stellen. Genau so kommt HA ohne Eingabefeld aus.

Für die ETS heißt das: Das Feld „Logger-Seriennummer" wird **optional** (0 = automatisch ermitteln) und
dient nur noch als Rückfallebene.

Testgerät: SN **3912915352** (`0xE93A5998`).

## Messergebnisse am realen Gerät (2026-07-22)

### Gerät 1 — Deye SUN-M80G3, Transport **Solarman V5**, 192.168.30.201:8899

Logger-Seriennummer **3912915352**, automatisch ermittelbar (Dummy-Frame mit SN 0 → echte SN
steht im Antwort-Header). Registertabelle vollständig gegen die HA-Anzeigewerte im selben
Moment abgeglichen — siehe `src/Profiles/DeyeMicro.h` im Modul-Repo.

| Register | Bits | Faktor | Wert |
|---|---|---|---|
| 0x003C | 16 | ×0,1 kWh | Tagesertrag gesamt |
| 0x003F | **32** | ×0,1 kWh | Gesamtertrag |
| 0x0041 / 0x0042 | 16 | ×0,1 kWh | Tagesertrag String 1 / 2 |
| 0x0045 / 0x0047 | **32** | ×0,1 kWh | Gesamtertrag String 1 / 2 |
| 0x0049 | 16 | ×0,1 V | Netzspannung |
| 0x004C | 16 | ×0,1 A | Netzstrom |
| 0x004F | 16 | ×0,01 Hz | Netzfrequenz |
| 0x0056 | 16 | ×0,1 W | Wirkleistung |
| 0x005A | 16 | ×0,01 **−10** °C | Temperatur |
| 0x006D / 0x006F | 16 | ×0,1 V | PV1 / PV2 Spannung |
| 0x006E / 0x0070 | 16 | ×0,1 A | PV1 / PV2 Strom |

PV-Leistungen liefert das Gerät nicht, sie werden aus U×I berechnet. **Blockgröße max. 16
Register** — Anfragen über 32 Register liefen in einen Timeout.

### Gerät 2 — Pylontech Force H3, Transport **reines Modbus TCP**, 192.168.20.31:8899

**Kein Solarman V5.** Auf einen korrekten V5-Rahmen antwortet das Gerät mit einem MBAP-Header;
ungültige Adressen quittiert es mit regulären Modbus-Exceptions. Seriennummer **640** — die
Autoerkennung greift hier **nicht** (das Gerät verwirft Frames mit falscher SN stillschweigend),
also wird das manuelle Feld gebraucht.

Registerbereich ab **5120 (0x1400)**; Karte aus `pylontech_force.yaml` am Gerät bestätigt:

| Register | Faktor | Wert | gemessen |
|---|---|---|---|
| 5123 | ×0,1 V | Batteriespannung | 213,4 V |
| 5125 | ×0,01 A, signed | Batteriestrom | 0,00 A |
| 5126 | ×0,1 °C, signed | Batterietemperatur | 35,0 °C |
| 5127 | ×1 % | **SoC** | 80 % |
| 5128 | ×1 | Ladezyklen | 6 |
| 5152 | ×1 % | SOH | 100 % |
| 5154 | ×0,001 kWh | Restkapazität | 8,925 kWh |
| 5160 / 5162 | ×0,001 kWh | heute geladen / entladen | 6,56 / 6,16 kWh |
| 5164 / 5166 | ×1 kWh | gesamt geladen / entladen | 70 / 70 kWh |

### Zwei übergreifende Erkenntnisse

**32 Bit, Low-Word zuerst** — bei beiden Geräten steht hinter jedem Energiezähler ein Null-Register.
Bestätigt die Konvention aus der YAML-Analyse.

**Nur ein Client gleichzeitig.** Solange Home Assistant den Pylontech pollte, kamen inkonsistente
Antworten: Anfragen wurden mit fremden Frames beantwortet, dieselbe Adresse lieferte mal Daten,
mal eine Exception. Nach dem Neuladen der Integration war das Verhalten stabil. **Für Messungen
und im Betrieb muss der konkurrierende Client abgeschaltet sein** — gehört in den Hilfetext.

## Kennzahlen für die Einbindung (aus OAM-NetworkService verifiziert)

| Kennzahl | Wert | Quelle |
|---|---|---|
| Modul-ID für `addModule` | **11** | belegt sind 1,2,5,6,7,8,9,10 in `src/main.cpp` |
| `ModuleType` | **28** | belegt 10,11,12,13,22,26,27 in `src/NetworkService.xml` |
| Nächste freie KO-Nummer | **809** | `MAIN_MaxKoNumber` = 808, EnergyEdge endet dort (ab EEX 0.5.0, KO-Block 5) |
| `MAIN_ParameterSize` | **13707** | `include/knxprod.h` |
| Ziel-XML | `src/NetworkService.xml`, `-Dev.xml`, `-Release.xml` | |
| Conf-Eintrag | `%SPV_VerifyVersion%` in `src/NetworkService.conf.xml` | |

> **Hinweis zur Vorfassung dieses Dokuments:** Sie nannte als Ziel korrekt OAM-NetworkService, verwies
> dann aber auf `src/InternetServices*.xml`, `OAM-InternetServices.code-workspace` und `addModule(14, …)`
> und nannte `MAIN_MaxKoNumber` 1739 / `MAIN_ParameterSize` 11700. Das waren Werte aus OAM-InternetServices
> und gelten hier nicht. Die Tabelle oben ersetzt sie.

## Die Registerkarten-Frage

### Quelle für die Registertabellen

**Nicht** die offizielle Org `github.com/solarmanpv` — die enthält *keine* Wechselrichter-Registertabellen
(siehe Abschnitt „OpenData" unten). Die belastbare Quelle ist die Community-Integration:

- **[davidrapan/ha-solarman](https://github.com/davidrapan/ha-solarman)** — aktiv gepflegt, baut auf
  `pysolarmanv5` auf. Abgedeckte Marken laut Repo: **Deye, Sofar, SolaX, Afore, Solis, ZCS, Microtek,
  Sol-Ark, Sunsynk, Kstar**. Lizenz **MIT**. Bietet zusätzlich Autoerkennung für Deye-kompatible Geräte
  (ab 24.12.02) sowie autoerkannte MPPT- und Phasenzahl.
- **[StephanJoubert/home_assistant_solarman](https://github.com/StephanJoubert/home_assistant_solarman)**
  — der ursprüngliche Ansatz, Profile unter `custom_components/solarman/inverter_definitions/`.
  Lizenz **Apache-2.0**.

Beide Lizenzen (MIT und Apache-2.0) sind **mit GPL-3.0 verträglich** — die Tabellen dürfen als Grundlage
für `src/Profiles/*.h` dienen. **Quellenangabe und Lizenzhinweis im Kopf der jeweiligen Datei sind
Pflicht.**

Vorhandene Profildateien bei StephanJoubert (gute Vorlage für den Umfang unseres `PT-SPVProfile`-Enums):

```
deye_hybrid.yaml     deye_sg04lp3.yaml   deye_string.yaml    deye_2mppt.yaml   deye_4mppt.yaml
sofar_lsw3.yaml      sofar_g3hyd.yaml    sofar_hyd3k-6k.yaml
solis_hybrid.yaml    solid_1p8k-5g.yaml  zcs_azzurro-ktl-v3.yaml
```

### Konsequenz für unsere ETS-Struktur: keine MPPT-/Phasen-Schieberegler

Home Assistant bietet in der Gerätekonfiguration Regler für MPPT-Anzahl, Phasenzahl und Akkupacks, weil es
**alle** Entitäten automatisch erzeugt und die Liste sonst unbrauchbar lang würde.

**Wir brauchen das nicht.** In unserem Modell wählt der Nutzer jeden Messwert ohnehin einzeln je Kanal aus —
das ist bereits die Filterung, die HA über die Regler nachbildet. Und die Ausbauvarianten stecken bereits in
eigenen Profildateien (`deye_2mppt` vs. `deye_4mppt`, `deye_sg04lp3` für dreiphasig). Unser Profil-Enum
bildet diese Dateien 1:1 ab; zusätzliche Zähl-Parameter entfallen ersatzlos.

### Abbildung der YAML-Profile auf C++

Das YAML hat zwei Top-Level-Schlüssel: `requests` (Leseblöcke) und `parameters` (die Messwerte). Ein
Parametereintrag sieht so aus:

```yaml
- name: "PV1 Power"
  class: "power"          # HA-Geräteklasse  -> bestimmt bei uns den Vorschlags-DPT
  state_class: "measurement"   # HA-intern    -> für uns irrelevant
  uom: "W"                # Einheit          -> bestimmt mit den DPT
  scale: 1                # Multiplikator
  rule: 1                 # Dekodierregel
  registers: [0x00BA]     # Registerliste
  icon: 'mdi:solar-power' # HA-intern        -> irrelevant
```

**Die `rule`-Werte** (aus `custom_components/solarman/parser.py`):

| rule | Bedeutung | für KNX |
|---|---|---|
| 1, 3 | vorzeichenlos (16 bzw. Mehrregister) | ✅ direkt |
| 2, 4 | vorzeichenbehaftet | ✅ direkt |
| 5 | ASCII-Text | ❌ Identifikation, kein Messwert |
| 6 | Bit-Array als Hex-Strings | ❌ |
| 7 | Version (Nibbles) | ❌ |
| 8 | Datum/Zeit über 3+ Register | ❌ |
| 9 | Uhrzeit (`temp/100`:`temp%100`) | ❌ |
| 10 | Rohdaten | ❌ |

**Die Reihenfolge der Modifikatoren ist bindend** und muss im C++ exakt so nachgebildet werden:
`mask` (bitweises UND) → `offset` (wird **subtrahiert**) → `scale` (multipliziert) → `scale_division`.

**Achtung Wortreihenfolge:** Mehrregisterwerte werden als `value += reg[i] << (16*i)` zusammengesetzt —
das **erste Register in der Liste ist das niederwertige Wort**. Das ist genau umgekehrt zur High-Word-first-
Konvention des EX.1 und ein klassischer Kandidat für stille Fehler.

**Der C++-Zieltyp** ist ein schlichter POD-Table-Eintrag:

```cpp
enum SpvType : uint8_t { SPV_U16, SPV_S16, SPV_U32, SPV_S32 };

struct SpvValueDef {
    const char* name;    // Anzeige in ETS-Enum und Diagnose
    uint16_t    reg;     // Startregister (niederwertiges Wort zuerst)
    uint8_t     count;   // 1 oder 2 Register
    SpvType     type;
    uint16_t    mask;    // 0 = kein Mask
    int32_t     offset;  // wird subtrahiert
    float       scale;
    uint8_t     dpt;     // Vorschlag aus class/uom, in ETS überschreibbar
};
```

`class` + `uom` liefern den Vorschlags-DPT: power/W → 14.056, energy/kWh → 13.013, temperature/°C → 9.001,
voltage/V → 14.027, current/A → 14.019, frequency/Hz → 14.033, SoC/% → 5.001.

**Zwei Fallstricke im Schema:**

- `registers` muss **nicht zusammenhängend** sein — `Work Mode` nutzt z. B. `[0x00F4, 0x00F7]`. Ein
  simples „Startregister + Anzahl" bricht daran. Für v1: 1 Register oder 2 **aufeinanderfolgende**
  unterstützen, alles andere beim Generieren verwerfen und protokollieren.
- `lookup` (Zahl → Text, etwa Batteriestatus „Charge/Stand-by/Discharge") hat auf KNX keine sinnvolle
  Entsprechung. Statt Text geben wir den **numerischen Code** aus (DPT 5.010); die Bedeutung gehört in den
  Hilfetext, nicht auf den Bus.

### Der eigentliche Hebel: ein Generator statt Handarbeit

Die Abbildung ist rein mechanisch. Statt 60+ Einträge je Profil von Hand abzutippen — fehleranfällig und
bei jedem Upstream-Update erneut — gehört ein kleines Konvertierungsskript ins Repo:

```
tools/yaml2profile.py    deye_hybrid.yaml  ->  src/Profiles/DeyeHybrid.h
```

Es filtert auf die Regeln 1–4, übersetzt `class`/`uom` in den Vorschlags-DPT, verwirft nicht darstellbare
Einträge mit Protokollzeile und schreibt Quelle, Upstream-Commit und Lizenzhinweis in den Dateikopf.

**Das entschärft das größte Risiko des Plans.** „Modellabdeckung ist Dauerarbeit" galt unter der Annahme,
jedes Profil koste Recherche und Handarbeit. Mit Generator kostet ein zusätzliches Profil Minuten statt
Tage — der Aufwand verschiebt sich einmalig in das Skript, und die Profile bleiben nachvollziehbar an
Upstream gekoppelt.

### Warum keine Datei-Lookups zur Laufzeit

Home Assistant lädt pro Modell eine `lookup_file`. **Diesen Weg brauchen wir nicht** — das Ökosystem hat
dafür bereits ein etabliertes Muster.

`OFM-EnergyEdgeModule` macht genau das, nur in Server-Richtung: **eine C++-Klasse pro Geräteprofil**,
ausgewählt über einen ETS-Parameter. `SolarEdgeChannel.h` ist eine 123-Word-SunSpec-Registerkarte als
Klasse, daneben `KElectricChannel` und `SDM630Channel`, alle abgeleitet von `BaseMeterChannel`.

Für SolarmanPV braucht es zwei Ebenen, weil reine Profilklassen bei der Gerätevielfalt nie hinterherkommen:

- **Profil-Presets** je Gerät (Deye Hybrid zuerst, das ist auch HAs Default `deye_hybrid.yaml`). Der Kanal
  wählt dann nur noch einen benannten Messwert; Adresse, Typ und Skalierung kommen aus der Profiltabelle.
- **Manuell**: ein Kanal beschreibt genau ein Register — Adresse, Funktionscode, Datentyp, Wortreihenfolge,
  Skalierung, Ziel-DPT. Deckt jedes Gerät ab, sofern der Nutzer seine Registerkarte kennt.

**Die manuelle Konfiguration muss in v1 mit.** Ohne sie ist das Modul für jeden nutzlos, dessen Gerät noch
kein Profil hat — und Profile sind Dauerarbeit, kein einmaliger Posten.

Falls später doch datei-basierte Karten gewünscht sind: `OFM-FileTransferModule` kann Dateien aufs Gerät
bringen, und LittleFS steht zur Verfügung. Der Weg bleibt offen, gehört aber nicht in die erste Version.

## Abgrenzung: SOLARMAN „OpenData" — löst das Problem *nicht*

SOLARMAN/IGEN Tech betreibt eine offizielle lokale HTTP/JSON-Schnittstelle namens **OpenData**
(Spezifikation: [igen-docs/docs/API/OpenData.md](https://github.com/solarmanpv/igen-docs/blob/main/docs/API/OpenData.md),
Python-Client: [solarman-opendata](https://github.com/solarmanpv/solarman-opendata)):

- Endpunkt `http://{IP}:8080/rpc/{API}`, JSON mit **benannten Feldern** statt roher Register
- optional HTTP-Digest-Auth (User `opend`), **standardmäßig deaktiviert** und am Gerät freizuschalten
- Endpunkte: `Sys.GetConfig`, `P1.JsonData`, `Plug.GetData`/`GetStatus`/`SetStatus`, `Meter.JsonData`

Das wäre technisch deutlich angenehmer als V5 — dasselbe Muster wie der bereits umgesetzte
EX.1-`/v2/point`-Poll, ganz ohne Registerkarten-Problem.

**Es hilft hier trotzdem nicht:** Die unterstützte Geräteliste umfasst ausschließlich SOLARMAN-eigenes
Messzubehör — P1-Reader (P1-2W), Smart Plug (SP-2W-EU), Smart Meter (MR1/MR3-Serie) und IR-Reader
(NIR-1/NIR-3). **Es gibt keinen Wechselrichter-Endpunkt.** Für Wechselrichter und Batteriespeicher — das
eigentliche Ziel — bleibt nur der V5-Weg über Port 8899.

> **Mögliche v2-Erweiterung:** Wer SOLARMAN-Smart-Meter oder -Smart-Plugs besitzt, könnte diese über
> OpenData sehr günstig anbinden (inkl. **Schalten** des Smart Plug via `Plug.SetStatus` — das wäre dann
> auch schreibend). Das ist ein eigenes, klar abgegrenztes Feature und gehört nicht in v1.

## Architektur

### Transport — bewusst ohne eModbus

`OFM-EnergyEdgeModule` nutzt `miq19/eModbus`. **Für SolarmanPV ist das der falsche Baustein.** eModbus
spricht Modbus TCP mit MBAP-Header; Solarman V5 ersetzt genau diese Transportschicht durch ein eigenes
Framing. Wir bräuchten nur den RTU-Frame-Bau aus der Bibliothek und müssten den Rest umgehen.

Dazu kommt eine real erlebte Falle, die `lib/OFM-EnergyEdgeModule/src/ModbusSource.h` dokumentiert:
**eModbus' `Modbus::Error` und der KNX-Stack `ComFlag::Error` kollidieren** — beide bringen einen globalen
Bezeichner `Error` mit, und sobald beide Header in einer Übersetzungseinheit sichtbar sind, wird der Name
mehrdeutig. EnergyEdge musste deshalb eine KNX-freie Schnittstelle einziehen. Diesen Aufwand sparen wir,
indem wir eModbus gar nicht erst einbinden.

Selbst bauen ist hier billiger: Modbus RTU Read-Holding/Input-Registers ist Adresse, Funktionscode,
Startregister, Anzahl und CRC-16 — rund 30 Zeilen.

`SolarmanV5Client` bleibt trotzdem **KNX-frei** (keine OpenKNX-Header). Das ist das bewährte Muster aus
`lib/OFM-EnergyEdgeModule/src/EnergyEdgeServer.cpp` und hält die Übersetzungseinheit sauber und testbar.

### Solarman-V5-Framing

Das Protokoll ist erfreulich schlicht und **ohne Authentifizierung, Handshake oder Keepalive**:

```
Header (11 B)   Start 0xA5 | Länge (2, LE) | Control (2: 0x4510 Req / 0x1510 Resp)
                | Serial (2, Sequenznummer) | Logger-Seriennummer (4)
Payload Req     Frametyp 0x02 | Sensortyp (2) | Working/PowerOn/Offset Time (je 4, alle 0)
                | Modbus-RTU-Frame
Payload Resp    Frametyp | Status | Working/PowerOn/Offset Time | Modbus-RTU-Frame
Trailer (2 B)   Prüfsumme (Summe über den Frame ohne Start/Prüfsumme/Ende) | Ende 0x15
```

Alle V5-Felder Little Endian, der eingebettete Modbus-Frame Big Endian.

**Am realen Gerät verifiziert (2026-07-22, Deye SUN-M80G3, 192.168.30.201:8899).** Die exakten Offsets,
mit einem Python-Prototyp gegengeprüft:

| Feld | Offset | Inhalt |
|---|---|---|
| Start | 0 | `0xA5` |
| Länge | 1–2 | Payload-Länge, LE |
| Control | 3–4 | `0x4510` Request / `0x1510` Response, LE |
| Sequenz | 5–6 | frei wählbar, wird gespiegelt |
| Logger-SN | 7–10 | 4 Byte LE |
| Payload | 11… | s. u. |
| Prüfsumme | −2 | `sum(frame[1:−2]) & 0xFF` |
| Ende | −1 | `0x15` |

**Achtung, asymmetrisch:** Der **Request**-Payload beginnt mit `Frametyp(1) + Sensortyp(2) + 3×4 Byte Zeit`
= **15 Byte** vor dem RTU-Frame, die **Response** dagegen mit `Frametyp(1) + Status(1) + 3×4 Byte Zeit`
= **14 Byte**. Wer beide gleich behandelt, liest die Antwort um ein Byte verschoben und bekommt Unsinn —
mir ist genau das im Prototyp passiert.

### Zweiter Transportmodus: reines Modbus TCP

Nicht jede Anlage hängt an einem Solarman-Stick. `ha-solarman` unterstützt ausdrücklich auch **Modbus TCP**
für ESP-basierte Adapter, Waveshare-Gateways und Ethernet-Logger. Diese sprechen denselben Modbus-RTU-Inhalt,
nur mit MBAP-Header statt V5-Rahmen.

**Das ist für uns fast geschenkt:** Wir bauen den RTU-Frame ohnehin selbst; der Unterschied ist allein die
Verpackung — V5-Rahmen oder 7-Byte-MBAP-Header. Ein Aufzählungsparameter `Transport` je Gerät schaltet
zwischen beiden um und verdoppelt die unterstützte Hardware für etwa einen halben Tag Mehraufwand. Bei
Transport = Modbus TCP entfällt die Logger-Seriennummer, und der Standardport ist 502 statt 8899.

Die Verbindung sollte kurz gehalten werden (verbinden, Register lesen, trennen); viele Sticks vertragen
keine Dauerverbindung und werfen nach Inaktivität raus.

### Modul- und Kanalstruktur

`OpenKNX::Module` → `SPVChannelOwnerModule` → `SolarmanPVModule`. Die Boilerplate wird aus
`lib/OFM-EnergyEdgeModule/src/ChannelOwnerModule.{h,cpp}` kopiert — dort bereits erprobt.

Wichtig: Die 4 **Geräte** sind *keine* Kanäle, sondern globale Parameterblöcke. Die 40 **Messwerte** sind
die Kanäle.

`createChannel()` liefert `nullptr` für Kanäle jenseits von „Aktive Kanäle". Genau dieser Guard musste bei
EnergyEdge nachgezogen werden (Commit `0641244`), weil sonst unkonfigurierte Kanäle mit Unit-ID 0 zur
Laufzeit mitliefen — hier von Anfang an.

Die Modulebene hält Verbindung und Pollzyklus, die Kanäle lesen aus dem letzten Lesezyklus. **Register
benachbarter Kanäle desselben Geräts müssen zu einem Modbus-Request zusammengefasst werden** — ein Request
pro Kanal überlastet den Stick.

## ETS-Struktur

### Allgemein-Seite

Aktive Geräte (0–4), aktive Kanäle (0–40), globales Poll-Intervall, Status-Sektion.

### Geräteseiten (4×, eingeblendet über „Aktive Geräte")

- IP-Adresse (Text, 32 Byte)
- Port (Default 8899)
- **Transport** (`PT-SPVTransport`: **Solarman V5** / **Modbus TCP**) — siehe unten
- **Logger-Seriennummer** — 32-Bit `TypeNumber`, die SN ist zehnstellig und passt nicht in 16 Bit
  (nur bei Transport = Solarman V5 relevant, per `choose` ausblenden)
- Modbus-Slave-ID (Default 1)
- **Profil** (`PT-SPVProfile`: Deye Hybrid / Deye 2-MPPT / Deye 4-MPPT / Deye SG04LP3 / Sofar … / Manuell)
- Status-KO „Gerät erreichbar" (DPT 1.011), per CheckBox ausblendbar — Muster aus EnergyEdge

### Kanalseiten (40×)

- **Gerät** (1–4) und **Messwert** (`PT-SPVValue`-Enum: PV1-Leistung, PV2-Leistung, Batterie-SoC,
  Batterie-Leistung, Netzbezug, Netzeinspeisung, Tagesertrag, Gesamtertrag …). Die Firmware löst
  `(Profil des Geräts, Messwert)` → Registeradresse, Funktionscode, Datentyp, Wortreihenfolge, Skalierung.
- **Manuelle Registerparameter** (wenn Geräteprofil = Manuell): Adresse (0–65535), Funktionscode (3/4),
  Datentyp (U16/S16/U32/S32/Float), Wortreihenfolge (Hi-Lo / Lo-Hi), Skalierungsfaktor, Offset.
  Typspezifische Parameter über `<Union>` auf denselben Speicheroffsets — ungenutzte Varianten kosten nichts.
- **Ziel-DPT** je Kanal wählbar (siehe unten).
- **Plausibilitätsgrenzen** min/max.
- Sendeverhalten: zyklisch und/oder bei Änderung (Hysterese) — Parameter-Muster und OGM-Common-Typen aus
  dem EnergyEdge-Messwerteteil übernehmen.

### Wählbarer Ziel-DPT ohne KO-Verschwendung

Das ist der Schlüsselbaustein: Ein `ComObjectRef` darf **`ObjectSize` und `DatapointType` des
referenzierten ComObjects überschreiben**.

Beleg in `lib/OFM-FunctionBlocks/src/FunctionBlocks.templ.xml:1150-1152` — drei Refs auf **dasselbe**
ComObject `_O-…009`:

```xml
<ComObjectRef ... RefId="..._O-...009" ObjectSize="1 Byte" DatapointType="DPST-5-1"  />
<ComObjectRef ... RefId="..._O-...009" ObjectSize="1 Byte" DatapointType="DPST-5-10" />
<ComObjectRef ... RefId="..._O-...009" ObjectSize="1 Byte" DatapointType="DPST-17-1" />
```

Also: **ein** ComObject je Kanal, mehrere ComObjectRefs für DPT 5.001 / 7.x / 8.x / 9.x / 12.x / 13.x /
14.x, per `choose` auf den DPT-Parameter umgeschaltet. Ein Register kann U16, S32 oder Float sein und soll
je nach Messwert als Prozent, Leistung oder Energie herauskommen — das löst genau diesen Fall, ohne für
jede DPT-Variante eine eigene KO-Nummer zu verbrauchen.

Vorlage für die Auswahlliste: `PT-FCBNumericOutputDpt` in
`lib/OFM-FunctionBlocks/src/FunctionBlocks.share.xml:94`.

### KO-Layout

- `KoSingleOffset = 809` — 4× „Gerät N erreichbar" plus Reserve
- `KoOffset = 815`, **2 KOs je Kanal** (Wert + optionaler Rohwert zur Diagnose) × 40 → 815…894

> Der Startwert hängt an EnergyEdge: Mit EEX 0.5.0 (Bezug/Einspeisung, KO-Block 3 → 5) endet dessen
> Bereich bei 808 statt 768. Wird EEX doch bei 0.4.0 belassen, gilt wieder 769/775.

## Dateien (neues Repo `OFM-SolarmanPV`, per Symlink nach `lib/`)

```
library.json                          v0.1.0, KEINE eModbus-Abhängigkeit
src/SolarmanPVModule.{h,cpp}          Fassade, openknxSolarmanPVModule, Poll-Scheduler
src/ChannelOwnerModule.{h,cpp}        Kopie aus OFM-EnergyEdgeModule (als SPVChannelOwnerModule)
src/SolarmanV5Client.{h,cpp}          TCP + V5-Framing + Modbus RTU + CRC16 — KNX-frei
src/SolarmanRegisterChannel.{h,cpp}   ein Register -> ein KO, Skalierung, DPT, Plausibilität
src/Profiles/DeyeHybrid.h             Preset-Tabelle (Muster: SolarEdgeChannel.h)
src/SolarmanPV.share.xml              Allgemein + 4 Geräteseiten + Status
src/SolarmanPV.templ.xml              Kanal: Gerät/Messwert/Manuell via <Union>, DPT-Refs
src/Baggages/Help_de/*.md             generiert
createDoc.ps1                         OpenKNXproducer baggages -d doc/... -b src/Baggages/Help_de -p SPV
doc/Applikationsbeschreibung-SolarmanPV.md
README.md / CHANGELOG.md / LICENSE (GPL-3.0)
```

## Wiederverwendung

- **ETS-Typen aus OGM-Common** via `%AID%`-Präfix: `PT-CheckBox`, `PT-DelayBase`/`PT-DelayTime`,
  `PT-ValueDpt14` (`lib/OGM-Common/src/Common.share.xml`). Das Namensschema `<Name>DelayBase` +
  `<Name>DelayTime` in derselben 16-Bit-Union erzeugt automatisch das Makro `ParamSPV_<Name>DelayTimeMS`.
- **`delayCheck(last, duration)`** — Makro in `lib/OGM-Common/src/OpenKNX/Helper.h:12`. Achtung: Es
  aktualisiert `last` **nicht** selbst, das muss der Aufrufer tun.
- **Doku-Pipeline** genau wie zuletzt für EnergyEdge aufgebaut: `createDoc.ps1` erzeugt die Help-Baggages
  aus den `<!-- DOC -->`-Blöcken der Applikationsbeschreibung. Zwei Stolpersteine, die dort Zeit gekostet
  haben: Die share.xml braucht einen eigenen **`<Baggages>`-Block** unter `<Manufacturer>` (sonst findet
  der Producer die HelpContext-IDs nicht), und die Baggage-ID ist `SPV-<Überschrift>` — Punkte werden
  entfernt, deshalb in Überschriften keine Umlaute und keine Sonderzeichen verwenden.

## Einbindung in OAM-NetworkService

1. Repo klonen, **danach** `lib/OFM-SolarmanPV` als *Verzeichnis*-Symlink anlegen (`mklink /D`).
   Reihenfolge ist zwingend — legt man den Link an, solange das Ziel fehlt, entsteht ein Datei-Symlink,
   den PlatformIO und VS Code ignorieren.
2. `op:define prefix="SPV" ModuleType="28" NumChannels="40" KoSingleOffset="809" KoOffset="815"` in
   `src/NetworkService.xml`, `-Dev.xml` und `-Release.xml`.
3. `%SPV_VerifyVersion%` in `src/NetworkService.conf.xml`; Applikationsversion anheben.
4. `#include "SolarmanPVModule.h"` und `openknx.addModule(11, openknxSolarmanPVModule)` in `src/main.cpp`.
5. `OAM-NetworkService.code-workspace` ergänzen; knxprod und Header neu erzeugen.

## Aufwand

| Schritt | Aufwand |
|---|---|
| V5-Framing, Modbus RTU, CRC16 | 1,5 Tage |
| Zweiter Transportmodus Modbus TCP (MBAP statt V5-Rahmen) | 0,5 Tage |
| TCP-Client ESP32 (WiFiClient-Wrapper) | 0,5 Tage |
| Modulrumpf aus EnergyEdge kopieren | 0,5 Tage |
| share.xml + templ.xml, Geräteseiten, Profil/Manuell via Union, DPT-Refs | 2,5–3 Tage |
| Generator `tools/yaml2profile.py` (YAML → `Profiles/*.h`) | 1 Tag |
| Erstes Profil Deye Mikrowechselrichter (generiert + am Gerät verifiziert) | 0,5 Tage |
| Seriennummer-Discovery per UDP-Broadcast 48899 (inkl. Verifikation) | 0,5 Tage |
| jedes weitere Profil | Minuten + Test |
| Skalierung, Wortreihenfolge, DPT-Mapping, KO-Publishing | 1 Tag |
| OAM-Einbindung, knxprod, Build | 0,5 Tage |
| Hilfetexte, Doku, Release Notes | 0,5 Tage |
| Test gegen echten Wechselrichter | 1–2 Tage |
| **Summe** | **10,5–12 Arbeitstage** |

### Bewusst nicht in v1

- **Profil-Autoerkennung** („Profil: Auto" in HA). `ha-solarman` erkennt Deye-kompatible Geräte automatisch.
  Für uns hieße das, beim ersten Poll ein Identifikationsregister zu lesen und das Profil daraus abzuleiten.
  Reizvoll, aber es setzt voraus, dass die Profiltabellen bereits stehen — also frühestens v2.
- **OpenData-Anbindung** für SOLARMAN-Smart-Meter/-Plugs (siehe oben).

## Risiken

**Stille Fehler sind das eigentliche Risiko.** Eine falsche Registeradresse oder Wortreihenfolge liefert
plausible, aber falsche Zahlen auf den KNX-Bus — anders als bei der Cloud-Route, wo ein unbekannter Key
schlicht fehlt. Plausibilitätsgrenzen pro Kanal und ein Diagnose-KO mit dem Rohwert sind deshalb keine
Kür, sondern gehören in die erste Version.

**Die Modellabdeckung — durch den Generator deutlich entschärft.** Ursprünglich der größte Risikoposten:
Jedes Profil hätte Recherche und Handarbeit gekostet. Mit `tools/yaml2profile.py` kostet ein zusätzliches
Profil Minuten. Was bleibt, ist der **Test am echten Gerät** — den kann kein Generator ersetzen, und ohne
ihn sollte kein Profil als „unterstützt" gelten.

**Wortreihenfolge ist die wahrscheinlichste Fehlerquelle.** Die Solarman-YAMLs setzen Mehrregisterwerte
low-word-first zusammen, der EX.1 dagegen high-word-first. Wer aus dem EnergyEdge-Code kopiert, dreht es
unbemerkt falsch herum — und bekommt plausibel aussehenden Unsinn.

**Parameterspeicher:** `MAIN_ParameterSize` liegt bei 13707 Byte. 40 Kanäle plus 4 Geräteblöcke gegen das
Limit der Maskenversion prüfen — der Producer meldet das im Check `Memory size`.

Nebenbei: Manche Sticks brechen die Cloud-Anbindung ab, solange eine lokale Verbindung besteht. Das ist
kein Fehler der Implementierung, sollte aber im Hilfetext stehen.

## Verifikation

1. `openknxproducer create src/NetworkService-Dev.xml -h include/knxprod.h -o NetworkService-Dev.knxprod`
   läuft ohne `-->`-Meldungen durch; `SPV_*`-Defines sind in `include/knxprod.h` vorhanden; die Checks
   `HelpContext-Ids`, `Memory size` und `Channel-Number-Prefix consistency` melden OK.
2. `pio run -e release_REG1_LAN_TP_BASE` baut fehlerfrei.
3. `prepare.py` listet `MODULE_SolarmanPV` in der Versionsübersicht — fehlt es, ist der Symlink falsch
   angelegt.
4. **V5-Framing gegen `pysolarmanv5` gegenprüfen:** denselben Registerbereich einmal mit dem Python-Tool
   und einmal mit dem Modul lesen, die Rohwerte müssen übereinstimmen. Das trennt Framing-Fehler sauber
   von Registerkarten-Fehlern.
5. Gegen echte Hardware: Vorzeichen bei Netzbezug/-einspeisung und Batterieleistung prüfen, Werte gegen
   die Solarman-App abgleichen.
6. Fehlerpfade testen — Stick offline, Verbindung mitten im Lesen weg, falsche Logger-Seriennummer.
   **Es dürfen keine veralteten Werte weitergesendet werden**, „Gerät erreichbar" muss abfallen.
7. Diagnose-Konsolenbefehl `spv` (Muster: `eex` in EnergyEdge): je Gerät der Verbindungsstatus, je Kanal
   Rohwert und skalierter Wert.
