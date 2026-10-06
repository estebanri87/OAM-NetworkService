#pragma once


#define paramDelay(time) (uint32_t)( \
            (time & 0xC000) == 0xC000 ? (time & 0x3FFF) * 100 : \
            (time & 0xC000) == 0x0000 ? (time & 0x3FFF) * 1000 : \
            (time & 0xC000) == 0x4000 ? (time & 0x3FFF) * 60000 : \
            (time & 0xC000) == 0x8000 ? ((time & 0x3FFF) > 1000 ? 3600000 : \
                                         (time & 0x3FFF) * 3600000 ) : 0 )
                                             
#define ETS_ModuleId_NONE 0
#define ETS_ModuleId_BASE 1
#define ETS_ModuleId_NET 2
#define ETS_ModuleId_UCT 3
#define ETS_ModuleId_SIP 4
#define ETS_ModuleId_EEX 5
#define ETS_ModuleId_SPV 6
#define ETS_ModuleId_WIP 7
#define ETS_ModuleId_ROB 8
#define ETS_ModuleId_GDW 9
#define ETS_ModuleId_LOG 10
#define ETS_ModuleId_FCB 11
#define MAIN_FirmwareName "Netzwerk Dienste (Beta)"
#define MAIN_OpenKnxId 0xAF
#define MAIN_ApplicationNumber 47
#define MAIN_ApplicationVersion 16
#define MAIN_FirmwareRevision 1
#define MAIN_ApplicationEncoding iso-8859-15
#define MAIN_ParameterSize 15627
#define MAIN_MaxKoNumber 1991
#define MAIN_OrderNumber "OpenKNX-SR-NET"
#define BASE_ModuleVersion 25
#define NET_ModuleVersion 8
#define UCT_ModuleVersion 5
#define SIP_ModuleVersion 3
#define EEX_ModuleVersion 9
#define SPV_ModuleVersion 5
#define WIP_ModuleVersion 2
#define ROB_ModuleVersion 1
#define GDW_ModuleVersion 1
#define LOG_ModuleVersion 68
#define FCB_ModuleVersion 11
// Parameter with single occurrence


#define BASE_StartupDelayBase                     0      // 2 Bits, Bit 7-6
#define     BASE_StartupDelayBaseMask 0xC0
#define     BASE_StartupDelayBaseShift 6
#define BASE_StartupDelayTime                     0      // 14 Bits, Bit 13-0
#define     BASE_StartupDelayTimeMask 0x3FFF
#define     BASE_StartupDelayTimeShift 0
#define BASE_HeartbeatDelayBase                   2      // 2 Bits, Bit 7-6
#define     BASE_HeartbeatDelayBaseMask 0xC0
#define     BASE_HeartbeatDelayBaseShift 6
#define BASE_HeartbeatDelayTime                   2      // 14 Bits, Bit 13-0
#define     BASE_HeartbeatDelayTimeMask 0x3FFF
#define     BASE_HeartbeatDelayTimeShift 0
#define BASE_Timezone                             4      // 5 Bits, Bit 7-3
#define     BASE_TimezoneMask 0xF8
#define     BASE_TimezoneShift 3
#define BASE_CombinedTimeDate                     4      // 1 Bit, Bit 2
#define     BASE_CombinedTimeDateMask 0x04
#define     BASE_CombinedTimeDateShift 2
#define BASE_SummertimeAll                        4      // 2 Bits, Bit 1-0
#define     BASE_SummertimeAllMask 0x03
#define     BASE_SummertimeAllShift 0
#define BASE_SummertimeDE                         4      // 2 Bits, Bit 1-0
#define     BASE_SummertimeDEMask 0x03
#define     BASE_SummertimeDEShift 0
#define BASE_SummertimeWorld                      4      // 2 Bits, Bit 1-0
#define     BASE_SummertimeWorldMask 0x03
#define     BASE_SummertimeWorldShift 0
#define BASE_SummertimeKO                         4      // 2 Bits, Bit 1-0
#define     BASE_SummertimeKOMask 0x03
#define     BASE_SummertimeKOShift 0
#define BASE_TimezoneCustom                       5      // char*, 63 Byte
#define     BASE_TimezoneCustomLength 63
#define BASE_Latitude                            69      // float (4 Byte)
#define BASE_Longitude                           73      // float (4 Byte)
#define BASE_Diagnose                            78      // 1 Bit, Bit 7
#define     BASE_DiagnoseMask 0x80
#define     BASE_DiagnoseShift 7
#define BASE_Watchdog                            78      // 1 Bit, Bit 6
#define     BASE_WatchdogMask 0x40
#define     BASE_WatchdogShift 6
#define BASE_ReadTimeDate                        78      // 1 Bit, Bit 5
#define     BASE_ReadTimeDateMask 0x20
#define     BASE_ReadTimeDateShift 5
#define BASE_HeartbeatExtended                   78      // 1 Bit, Bit 4
#define     BASE_HeartbeatExtendedMask 0x10
#define     BASE_HeartbeatExtendedShift 4
#define BASE_InternalTime                        78      // 1 Bit, Bit 3
#define     BASE_InternalTimeMask 0x08
#define     BASE_InternalTimeShift 3
#define BASE_ManualSave                          78      // 3 Bits, Bit 2-0
#define     BASE_ManualSaveMask 0x07
#define     BASE_ManualSaveShift 0
#define BASE_PeriodicSave                        79      // 8 Bits, Bit 7-0
#define BASE_Info1LedFunc                        80      // 16 Bits, Bit 15-0
#define BASE_Info2LedFunc                        82      // 16 Bits, Bit 15-0
#define BASE_Info3LedFunc                        84      // 16 Bits, Bit 15-0
#define BASE_DefaultLedFunc                      86      // 1 Bit, Bit 7
#define     BASE_DefaultLedFuncMask 0x80
#define     BASE_DefaultLedFuncShift 7
#define BASE_Dummy                               109      // uint8_t
#define BASE_ModuleEnabled_NET                   110      // 1 Bit, Bit 6
#define     BASE_ModuleEnabled_NETMask 0x40
#define     BASE_ModuleEnabled_NETShift 6
#define BASE_ModuleEnabled_UCT                   110      // 1 Bit, Bit 5
#define     BASE_ModuleEnabled_UCTMask 0x20
#define     BASE_ModuleEnabled_UCTShift 5
#define BASE_ModuleEnabled_SIP                   110      // 1 Bit, Bit 4
#define     BASE_ModuleEnabled_SIPMask 0x10
#define     BASE_ModuleEnabled_SIPShift 4
#define BASE_ModuleEnabled_EEX                   110      // 1 Bit, Bit 3
#define     BASE_ModuleEnabled_EEXMask 0x08
#define     BASE_ModuleEnabled_EEXShift 3
#define BASE_ModuleEnabled_SPV                   110      // 1 Bit, Bit 2
#define     BASE_ModuleEnabled_SPVMask 0x04
#define     BASE_ModuleEnabled_SPVShift 2
#define BASE_ModuleEnabled_WIP                   110      // 1 Bit, Bit 1
#define     BASE_ModuleEnabled_WIPMask 0x02
#define     BASE_ModuleEnabled_WIPShift 1
#define BASE_ModuleEnabled_ROB                   110      // 1 Bit, Bit 0
#define     BASE_ModuleEnabled_ROBMask 0x01
#define     BASE_ModuleEnabled_ROBShift 0
#define BASE_ModuleEnabled_GDW                   111      // 1 Bit, Bit 7
#define     BASE_ModuleEnabled_GDWMask 0x80
#define     BASE_ModuleEnabled_GDWShift 7
#define BASE_ModuleEnabled_LOG                   111      // 1 Bit, Bit 6
#define     BASE_ModuleEnabled_LOGMask 0x40
#define     BASE_ModuleEnabled_LOGShift 6
#define BASE_ModuleEnabled_FCB                   111      // 1 Bit, Bit 5
#define     BASE_ModuleEnabled_FCBMask 0x20
#define     BASE_ModuleEnabled_FCBShift 5

// Zeitbasis
#define ParamBASE_StartupDelayBase                    ((knx.paramByte(BASE_StartupDelayBase) & BASE_StartupDelayBaseMask) >> BASE_StartupDelayBaseShift)
// Zeit
#define ParamBASE_StartupDelayTime                    (knx.paramWord(BASE_StartupDelayTime) & BASE_StartupDelayTimeMask)
// Zeit (in Millisekunden)
#define ParamBASE_StartupDelayTimeMS                  (paramDelay(knx.paramWord(BASE_StartupDelayTime)))
// Zeitbasis
#define ParamBASE_HeartbeatDelayBase                  ((knx.paramByte(BASE_HeartbeatDelayBase) & BASE_HeartbeatDelayBaseMask) >> BASE_HeartbeatDelayBaseShift)
// Zeit
#define ParamBASE_HeartbeatDelayTime                  (knx.paramWord(BASE_HeartbeatDelayTime) & BASE_HeartbeatDelayTimeMask)
// Zeit (in Millisekunden)
#define ParamBASE_HeartbeatDelayTimeMS                (paramDelay(knx.paramWord(BASE_HeartbeatDelayTime)))
// Zeitzone
#define ParamBASE_Timezone                            ((knx.paramByte(BASE_Timezone) & BASE_TimezoneMask) >> BASE_TimezoneShift)
// Empfangen über
#define ParamBASE_CombinedTimeDate                    ((bool)(knx.paramByte(BASE_CombinedTimeDate) & BASE_CombinedTimeDateMask))
// Sommerzeit ermitteln durch
#define ParamBASE_SummertimeAll                       (knx.paramByte(BASE_SummertimeAll) & BASE_SummertimeAllMask)
// Sommerzeit ermitteln durch
#define ParamBASE_SummertimeDE                        (knx.paramByte(BASE_SummertimeDE) & BASE_SummertimeDEMask)
// Sommerzeit ermitteln durch
#define ParamBASE_SummertimeWorld                     (knx.paramByte(BASE_SummertimeWorld) & BASE_SummertimeWorldMask)
// Sommerzeit ermitteln durch
#define ParamBASE_SummertimeKO                        (knx.paramByte(BASE_SummertimeKO) & BASE_SummertimeKOMask)
// POSIX TZ-String
#define ParamBASE_TimezoneCustom                      (knx.paramData(BASE_TimezoneCustom))
#define ParamBASE_TimezoneCustomStr                   (knx.paramString(BASE_TimezoneCustom, BASE_TimezoneCustomLength))
// Breitengrad
#define ParamBASE_Latitude                            (knx.paramFloat(BASE_Latitude, Float_Enc_IEEE754Single))
// Längengrad
#define ParamBASE_Longitude                           (knx.paramFloat(BASE_Longitude, Float_Enc_IEEE754Single))
// Diagnoseobjekt anzeigen
#define ParamBASE_Diagnose                            ((bool)(knx.paramByte(BASE_Diagnose) & BASE_DiagnoseMask))
// Watchdog aktivieren
#define ParamBASE_Watchdog                            ((bool)(knx.paramByte(BASE_Watchdog) & BASE_WatchdogMask))
// Bei Neustart vom Bus lesen
#define ParamBASE_ReadTimeDate                        ((bool)(knx.paramByte(BASE_ReadTimeDate) & BASE_ReadTimeDateMask))
// Erweitertes "In Betrieb"
#define ParamBASE_HeartbeatExtended                   ((bool)(knx.paramByte(BASE_HeartbeatExtended) & BASE_HeartbeatExtendedMask))
// InternalTime
#define ParamBASE_InternalTime                        ((bool)(knx.paramByte(BASE_InternalTime) & BASE_InternalTimeMask))
// Manuelles speichern
#define ParamBASE_ManualSave                          (knx.paramByte(BASE_ManualSave) & BASE_ManualSaveMask)
// Zyklisches speichern
#define ParamBASE_PeriodicSave                        (knx.paramByte(BASE_PeriodicSave))
// Info1
#define ParamBASE_Info1LedFunc                        (knx.paramWord(BASE_Info1LedFunc))
// Info2
#define ParamBASE_Info2LedFunc                        (knx.paramWord(BASE_Info2LedFunc))
// Info3
#define ParamBASE_Info3LedFunc                        (knx.paramWord(BASE_Info3LedFunc))
// 
#define ParamBASE_DefaultLedFunc                      ((bool)(knx.paramByte(BASE_DefaultLedFunc) & BASE_DefaultLedFuncMask))
// 
#define ParamBASE_Dummy                               (knx.paramByte(BASE_Dummy))
// NET
#define ParamBASE_ModuleEnabled_NET                   ((bool)(knx.paramByte(BASE_ModuleEnabled_NET) & BASE_ModuleEnabled_NETMask))
// UCT
#define ParamBASE_ModuleEnabled_UCT                   ((bool)(knx.paramByte(BASE_ModuleEnabled_UCT) & BASE_ModuleEnabled_UCTMask))
// SIP
#define ParamBASE_ModuleEnabled_SIP                   ((bool)(knx.paramByte(BASE_ModuleEnabled_SIP) & BASE_ModuleEnabled_SIPMask))
// EEX
#define ParamBASE_ModuleEnabled_EEX                   ((bool)(knx.paramByte(BASE_ModuleEnabled_EEX) & BASE_ModuleEnabled_EEXMask))
// SPV
#define ParamBASE_ModuleEnabled_SPV                   ((bool)(knx.paramByte(BASE_ModuleEnabled_SPV) & BASE_ModuleEnabled_SPVMask))
// WIP
#define ParamBASE_ModuleEnabled_WIP                   ((bool)(knx.paramByte(BASE_ModuleEnabled_WIP) & BASE_ModuleEnabled_WIPMask))
// ROB
#define ParamBASE_ModuleEnabled_ROB                   ((bool)(knx.paramByte(BASE_ModuleEnabled_ROB) & BASE_ModuleEnabled_ROBMask))
// GDW
#define ParamBASE_ModuleEnabled_GDW                   ((bool)(knx.paramByte(BASE_ModuleEnabled_GDW) & BASE_ModuleEnabled_GDWMask))
// LOG
#define ParamBASE_ModuleEnabled_LOG                   ((bool)(knx.paramByte(BASE_ModuleEnabled_LOG) & BASE_ModuleEnabled_LOGMask))
// FCB
#define ParamBASE_ModuleEnabled_FCB                   ((bool)(knx.paramByte(BASE_ModuleEnabled_FCB) & BASE_ModuleEnabled_FCBMask))

#define BASE_KoHeartbeat 1
#define BASE_KoTime 2
#define BASE_KoDate 3
#define BASE_KoDateTime 4
#define BASE_KoIsSummertime 5
#define BASE_KoManualSave 6
#define BASE_KoDiagnose 7

// In Betrieb
#define KoBASE_Heartbeat                           (knx.getGroupObject(BASE_KoHeartbeat))
// Uhrzeit
#define KoBASE_Time                                (knx.getGroupObject(BASE_KoTime))
// Datum
#define KoBASE_Date                                (knx.getGroupObject(BASE_KoDate))
// Uhrzeit/Datum
#define KoBASE_DateTime                            (knx.getGroupObject(BASE_KoDateTime))
// Sommerzeit aktiv
#define KoBASE_IsSummertime                        (knx.getGroupObject(BASE_KoIsSummertime))
// Speichern
#define KoBASE_ManualSave                          (knx.getGroupObject(BASE_KoManualSave))
// Diagnose
#define KoBASE_Diagnose                            (knx.getGroupObject(BASE_KoDiagnose))

#define NET_HostAddress                         114      // IP address, 4 Byte
#define NET_SubnetMask                          118      // IP address, 4 Byte
#define NET_GatewayAddress                      122      // IP address, 4 Byte
#define NET_NameserverAddress                   126      // IP address, 4 Byte
#define NET_CustomHostname                      130      // 1 Bit, Bit 7
#define     NET_CustomHostnameMask 0x80
#define     NET_CustomHostnameShift 7
#define NET_StaticIP                            130      // 1 Bit, Bit 6
#define     NET_StaticIPMask 0x40
#define     NET_StaticIPShift 6
#define NET_mDNS                                131      // 1 Bit, Bit 7
#define     NET_mDNSMask 0x80
#define     NET_mDNSShift 7
#define NET_HTTP                                131      // 1 Bit, Bit 6
#define     NET_HTTPMask 0x40
#define     NET_HTTPShift 6
#define NET_NTP                                 131      // 1 Bit, Bit 5
#define     NET_NTPMask 0x20
#define     NET_NTPShift 5
#define NET_OTAUpdate                           131      // 2 Bits, Bit 4-3
#define     NET_OTAUpdateMask 0x18
#define     NET_OTAUpdateShift 3
#define NET_MQTT                                131      // 1 Bit, Bit 2
#define     NET_MQTTMask 0x04
#define     NET_MQTTShift 2
#define NET_HostName                            132      // char*, 24 Byte
#define     NET_HostNameLength 24
#define NET_LanMode                             173      // 4 Bits, Bit 7-4
#define     NET_LanModeMask 0xF0
#define     NET_LanModeShift 4
#define NET_NTPServer                           174      // char*, 50 Byte
#define     NET_NTPServerLength 50
#define NET_MQTTServer                          225      // char*, 20 Byte
#define     NET_MQTTServerLength 20
#define NET_MQTTUsername                        246      // char*, 20 Byte
#define     NET_MQTTUsernameLength 20
#define NET_MQTTPassword                        267      // char*, 20 Byte
#define     NET_MQTTPasswordLength 20
#define NET_MQTTPrefix                          288      // char*, 20 Byte
#define     NET_MQTTPrefixLength 20
#define NET_MQTTPort                            309      // uint16_t
#define NET_MQTTTPRawData                       311      // 1 Bit, Bit 7
#define     NET_MQTTTPRawDataMask 0x80
#define     NET_MQTTTPRawDataShift 7
#define NET_MQTTMode                            311      // 1 Bit, Bit 6
#define     NET_MQTTModeMask 0x40
#define     NET_MQTTModeShift 6

// IP-Adresse
#define ParamNET_HostAddress                         (knx.paramInt(NET_HostAddress))
// Subnetzsmaske
#define ParamNET_SubnetMask                          (knx.paramInt(NET_SubnetMask))
// Standardgateway
#define ParamNET_GatewayAddress                      (knx.paramInt(NET_GatewayAddress))
// Nameserver
#define ParamNET_NameserverAddress                   (knx.paramInt(NET_NameserverAddress))
// Hostname anpassen
#define ParamNET_CustomHostname                      ((bool)(knx.paramByte(NET_CustomHostname) & NET_CustomHostnameMask))
// DHCP
#define ParamNET_StaticIP                            ((bool)(knx.paramByte(NET_StaticIP) & NET_StaticIPMask))
// mDNS
#define ParamNET_mDNS                                ((bool)(knx.paramByte(NET_mDNS) & NET_mDNSMask))
// Weberver
#define ParamNET_HTTP                                ((bool)(knx.paramByte(NET_HTTP) & NET_HTTPMask))
// NTP-Client
#define ParamNET_NTP                                 ((bool)(knx.paramByte(NET_NTP) & NET_NTPMask))
// OTA-Update
#define ParamNET_OTAUpdate                           ((knx.paramByte(NET_OTAUpdate) & NET_OTAUpdateMask) >> NET_OTAUpdateShift)
// MQTT
#define ParamNET_MQTT                                ((bool)(knx.paramByte(NET_MQTT) & NET_MQTTMask))
// Hostname
#define ParamNET_HostName                            (knx.paramData(NET_HostName))
#define ParamNET_HostNameStr                         (knx.paramString(NET_HostName, NET_HostNameLength))
// LAN-Modus
#define ParamNET_LanMode                             ((knx.paramByte(NET_LanMode) & NET_LanModeMask) >> NET_LanModeShift)
// Zeitserver
#define ParamNET_NTPServer                           (knx.paramData(NET_NTPServer))
#define ParamNET_NTPServerStr                        (knx.paramString(NET_NTPServer, NET_NTPServerLength))
// Server
#define ParamNET_MQTTServer                          (knx.paramData(NET_MQTTServer))
#define ParamNET_MQTTServerStr                       (knx.paramString(NET_MQTTServer, NET_MQTTServerLength))
// Benutzer
#define ParamNET_MQTTUsername                        (knx.paramData(NET_MQTTUsername))
#define ParamNET_MQTTUsernameStr                     (knx.paramString(NET_MQTTUsername, NET_MQTTUsernameLength))
// Passwort
#define ParamNET_MQTTPassword                        (knx.paramData(NET_MQTTPassword))
#define ParamNET_MQTTPasswordStr                     (knx.paramString(NET_MQTTPassword, NET_MQTTPasswordLength))
// Prefix
#define ParamNET_MQTTPrefix                          (knx.paramData(NET_MQTTPrefix))
#define ParamNET_MQTTPrefixStr                       (knx.paramString(NET_MQTTPrefix, NET_MQTTPrefixLength))
// Port
#define ParamNET_MQTTPort                            (knx.paramWord(NET_MQTTPort))
// Sende KNX TP Rohdaten
#define ParamNET_MQTTTPRawData                       ((bool)(knx.paramByte(NET_MQTTTPRawData) & NET_MQTTTPRawDataMask))
// Modus
#define ParamNET_MQTTMode                            ((bool)(knx.paramByte(NET_MQTTMode) & NET_MQTTModeMask))



#define SIP_SIPNumChannels                      312      // uint8_t
#define SIP_UseIPGateway                        313      // 1 Bit, Bit 7
#define     SIP_UseIPGatewayMask 0x80
#define     SIP_UseIPGatewayShift 7
#define SIP_SIPGatewayIP                        314      // IP address, 4 Byte
#define SIP_SIPGatewayPort                      318      // uint16_t
#define SIP_SIPUser                             320      // char*, 30 Byte
#define     SIP_SIPUserLength 30
#define SIP_SIPPassword                         351      // char*, 30 Byte
#define     SIP_SIPPasswordLength 30

// Verfügbare Kanäle
#define ParamSIP_SIPNumChannels                      (knx.paramByte(SIP_SIPNumChannels))
// IP Gateway ist SIP Gateway (z.B. FRITZ!Box)
#define ParamSIP_UseIPGateway                        ((bool)(knx.paramByte(SIP_UseIPGateway) & SIP_UseIPGatewayMask))
// SIP Gateway IP
#define ParamSIP_SIPGatewayIP                        (knx.paramInt(SIP_SIPGatewayIP))
// SIP Gateway Port
#define ParamSIP_SIPGatewayPort                      (knx.paramWord(SIP_SIPGatewayPort))
// Benutzername
#define ParamSIP_SIPUser                             (knx.paramData(SIP_SIPUser))
#define ParamSIP_SIPUserStr                          (knx.paramString(SIP_SIPUser, SIP_SIPUserLength))
// Passwort
#define ParamSIP_SIPPassword                         (knx.paramData(SIP_SIPPassword))
#define ParamSIP_SIPPasswordStr                      (knx.paramString(SIP_SIPPassword, SIP_SIPPasswordLength))

#define SIP_KoGatewayConnectionState 400

// SIP Gateway Verbindungsstatus
#define KoSIP_GatewayConnectionState              (knx.getGroupObject(SIP_KoGatewayConnectionState))

#define SIP_ChannelCount 5

// Parameter per channel
#define SIP_ParamBlockOffset 382
#define SIP_ParamBlockSize 17
#define SIP_ParamCalcIndex(index) (index + SIP_ParamBlockOffset + _channelIndex * SIP_ParamBlockSize)

#define SIP_CHPhoneNumber                        0      // char*, 15 Byte
#define     SIP_CHPhoneNumberLength 15
#define SIP_CHCancelCall                        16      // uint8_t

// Telefonnummer
#define ParamSIP_CHPhoneNumber                       (knx.paramData(SIP_ParamCalcIndex(SIP_CHPhoneNumber)))
#define ParamSIP_CHPhoneNumberStr                    (knx.paramString(SIP_ParamCalcIndex(SIP_CHPhoneNumber), SIP_CHPhoneNumberLength))
// Anruf beenden nach
#define ParamSIP_CHCancelCall                        (knx.paramByte(SIP_ParamCalcIndex(SIP_CHCancelCall)))

// deprecated
#define SIP_KoOffset 401

// Communication objects per channel (multiple occurrence)
#define SIP_KoBlockOffset 401
#define SIP_KoBlockSize 1

#define SIP_KoCalcNumber(index) (index + SIP_KoBlockOffset + _channelIndex * SIP_KoBlockSize)
#define SIP_KoCalcIndex(number) ((number >= SIP_KoCalcNumber(0) && number < SIP_KoCalcNumber(SIP_KoBlockSize)) ? (number - SIP_KoBlockOffset) % SIP_KoBlockSize : -1)
#define SIP_KoCalcChannel(number) ((number >= SIP_KoBlockOffset && number < SIP_KoBlockOffset + SIP_ChannelCount * SIP_KoBlockSize) ? (number - SIP_KoBlockOffset) / SIP_KoBlockSize : -1)

#define SIP_KoCHPhoneNumber 0

// 
#define KoSIP_CHPhoneNumber                       (knx.getGroupObject(SIP_KoCalcNumber(SIP_KoCHPhoneNumber)))

#define EEX_ConsumerPort                        469      // uint16_t
#define EEX_ProducerPort                        471      // uint16_t
#define EEX_EX1ApiIp                            473      // char*, 32 Byte
#define     EEX_EX1ApiIpLength 32
#define EEX_SwitchPollInterval                  505      // uint16_t
#define EEX_EX1ApiProtocol                      533      // 8 Bits, Bit 7-0
#define EEX_EX1ApiKey                           534      // char*, 40 Byte
#define     EEX_EX1ApiKeyLength 40
#define EEX_MvPvEnable                          507      // 1 Bit, Bit 7
#define     EEX_MvPvEnableMask 0x80
#define     EEX_MvPvEnableShift 7
#define EEX_MvConsEnable                        507      // 1 Bit, Bit 6
#define     EEX_MvConsEnableMask 0x40
#define     EEX_MvConsEnableShift 6
#define EEX_MvBatEnable                         507      // 1 Bit, Bit 5
#define     EEX_MvBatEnableMask 0x20
#define     EEX_MvBatEnableShift 5
#define EEX_MvSocEnable                         507      // 1 Bit, Bit 4
#define     EEX_MvSocEnableMask 0x10
#define     EEX_MvSocEnableShift 4
#define EEX_ShowModbusActive                    507      // 1 Bit, Bit 3
#define     EEX_ShowModbusActiveMask 0x08
#define     EEX_ShowModbusActiveShift 3
#define EEX_ShowApiReachable                    507      // 1 Bit, Bit 2
#define     EEX_ShowApiReachableMask 0x04
#define     EEX_ShowApiReachableShift 2
#define EEX_MvPvChangeMode                      508      // 8 Bits, Bit 7-0
#define EEX_MvPvThreshold                       509      // float (4 Byte)
#define EEX_MvPvDelayBase                       513      // 2 Bits, Bit 7-6
#define     EEX_MvPvDelayBaseMask 0xC0
#define     EEX_MvPvDelayBaseShift 6
#define EEX_MvPvDelayTime                       513      // 14 Bits, Bit 13-0
#define     EEX_MvPvDelayTimeMask 0x3FFF
#define     EEX_MvPvDelayTimeShift 0
#define EEX_MvConsChangeMode                    515      // 8 Bits, Bit 7-0
#define EEX_MvConsThreshold                     516      // float (4 Byte)
#define EEX_MvConsDelayBase                     520      // 2 Bits, Bit 7-6
#define     EEX_MvConsDelayBaseMask 0xC0
#define     EEX_MvConsDelayBaseShift 6
#define EEX_MvConsDelayTime                     520      // 14 Bits, Bit 13-0
#define     EEX_MvConsDelayTimeMask 0x3FFF
#define     EEX_MvConsDelayTimeShift 0
#define EEX_MvBatChangeMode                     522      // 8 Bits, Bit 7-0
#define EEX_MvBatThreshold                      523      // float (4 Byte)
#define EEX_MvBatDelayBase                      527      // 2 Bits, Bit 7-6
#define     EEX_MvBatDelayBaseMask 0xC0
#define     EEX_MvBatDelayBaseShift 6
#define EEX_MvBatDelayTime                      527      // 14 Bits, Bit 13-0
#define     EEX_MvBatDelayTimeMask 0x3FFF
#define     EEX_MvBatDelayTimeShift 0
#define EEX_MvSocChangeMode                     529      // 8 Bits, Bit 7-0
#define EEX_MvSocThreshold                      530      // uint8_t
#define EEX_MvSocDelayBase                      531      // 2 Bits, Bit 7-6
#define     EEX_MvSocDelayBaseMask 0xC0
#define     EEX_MvSocDelayBaseShift 6
#define EEX_MvSocDelayTime                      531      // 14 Bits, Bit 13-0
#define     EEX_MvSocDelayTimeMask 0x3FFF
#define     EEX_MvSocDelayTimeShift 0
#define EEX_MvGridEnable                        574      // 1 Bit, Bit 7
#define     EEX_MvGridEnableMask 0x80
#define     EEX_MvGridEnableShift 7
#define EEX_MvDevPowerEnable                    574      // 1 Bit, Bit 0
#define     EEX_MvDevPowerEnableMask 0x01
#define     EEX_MvDevPowerEnableShift 0
#define EEX_MvDevTempEnable                     591      // 1 Bit, Bit 7
#define     EEX_MvDevTempEnableMask 0x80
#define     EEX_MvDevTempEnableShift 7
#define EEX_MvDevFaultEnable                    591      // 1 Bit, Bit 6
#define     EEX_MvDevFaultEnableMask 0x40
#define     EEX_MvDevFaultEnableShift 6
#define EEX_MvDevPowerId                        592      // char*, 32 Byte
#define     EEX_MvDevPowerIdLength 32
#define EEX_MvDevTempId                         624      // char*, 32 Byte
#define     EEX_MvDevTempIdLength 32
#define EEX_MvDevFaultId                        656      // char*, 32 Byte
#define     EEX_MvDevFaultIdLength 32
#define EEX_MvDevPowerChangeMode                688      // 8 Bits, Bit 7-0
#define EEX_MvDevPowerThreshold                 689      // float (4 Byte)
#define EEX_MvDevPowerDelayBase                 693      // 2 Bits, Bit 7-6
#define     EEX_MvDevPowerDelayBaseMask 0xC0
#define     EEX_MvDevPowerDelayBaseShift 6
#define EEX_MvDevPowerDelayTime                 693      // 14 Bits, Bit 13-0
#define     EEX_MvDevPowerDelayTimeMask 0x3FFF
#define     EEX_MvDevPowerDelayTimeShift 0
#define EEX_MvDevTempThreshold                  695      // float (4 Byte)
#define EEX_MvDevTempDelayBase                  699      // 2 Bits, Bit 7-6
#define     EEX_MvDevTempDelayBaseMask 0xC0
#define     EEX_MvDevTempDelayBaseShift 6
#define EEX_MvDevTempDelayTime                  699      // 14 Bits, Bit 13-0
#define     EEX_MvDevTempDelayTimeMask 0x3FFF
#define     EEX_MvDevTempDelayTimeShift 0
#define EEX_MvDevPowerLabel                     701      // char*, 40 Byte
#define     EEX_MvDevPowerLabelLength 40
#define EEX_MvDevTempLabel                      741      // char*, 40 Byte
#define     EEX_MvDevTempLabelLength 40
#define EEX_MvDevFaultLabel                     781      // char*, 40 Byte
#define     EEX_MvDevFaultLabelLength 40
#define EEX_MvGridChangeMode                    575      // 8 Bits, Bit 7-0
#define EEX_MvGridThreshold                     576      // float (4 Byte)
#define EEX_MvGridDelayBase                     580      // 2 Bits, Bit 7-6
#define     EEX_MvGridDelayBaseMask 0xC0
#define     EEX_MvGridDelayBaseShift 6
#define EEX_MvGridDelayTime                     580      // 14 Bits, Bit 13-0
#define     EEX_MvGridDelayTimeMask 0x3FFF
#define     EEX_MvGridDelayTimeShift 0

// Modbus-Port Verbraucher
#define ParamEEX_ConsumerPort                        (knx.paramWord(EEX_ConsumerPort))
// Modbus-Port Erzeuger (Wechselrichter)
#define ParamEEX_ProducerPort                        (knx.paramWord(EEX_ProducerPort))
// IP-Adresse
#define ParamEEX_EX1ApiIp                            (knx.paramData(EEX_EX1ApiIp))
#define ParamEEX_EX1ApiIpStr                         (knx.paramString(EEX_EX1ApiIp, EEX_EX1ApiIpLength))
// Abfrageintervall (0 = aus)
#define ParamEEX_SwitchPollInterval                  (knx.paramWord(EEX_SwitchPollInterval))
// Protokoll
#define ParamEEX_EX1ApiProtocol                      (knx.paramByte(EEX_EX1ApiProtocol))
// API-Key (leer = ohne Authentifizierung)
#define ParamEEX_EX1ApiKey                           (knx.paramData(EEX_EX1ApiKey))
#define ParamEEX_EX1ApiKeyStr                        (knx.paramString(EEX_EX1ApiKey, EEX_EX1ApiKeyLength))
// PV-Leistung
#define ParamEEX_MvPvEnable                          ((bool)(knx.paramByte(EEX_MvPvEnable) & EEX_MvPvEnableMask))
// Verbrauch
#define ParamEEX_MvConsEnable                        ((bool)(knx.paramByte(EEX_MvConsEnable) & EEX_MvConsEnableMask))
// Batterie-Leistung
#define ParamEEX_MvBatEnable                         ((bool)(knx.paramByte(EEX_MvBatEnable) & EEX_MvBatEnableMask))
// Batterie-SoC
#define ParamEEX_MvSocEnable                         ((bool)(knx.paramByte(EEX_MvSocEnable) & EEX_MvSocEnableMask))
// Status 'Modbus-Server aktiv' verwenden
#define ParamEEX_ShowModbusActive                    ((bool)(knx.paramByte(EEX_ShowModbusActive) & EEX_ShowModbusActiveMask))
// Status 'EX 1-API erreichbar' verwenden
#define ParamEEX_ShowApiReachable                    ((bool)(knx.paramByte(EEX_ShowApiReachable) & EEX_ShowApiReachableMask))
// Änderung angegeben
#define ParamEEX_MvPvChangeMode                      (knx.paramByte(EEX_MvPvChangeMode))
// Senden bei Änderung um
#define ParamEEX_MvPvThreshold                       (knx.paramFloat(EEX_MvPvThreshold, Float_Enc_IEEE754Single))
// Zeitbasis
#define ParamEEX_MvPvDelayBase                       ((knx.paramByte(EEX_MvPvDelayBase) & EEX_MvPvDelayBaseMask) >> EEX_MvPvDelayBaseShift)
// zyklisch senden alle (0 = aus)
#define ParamEEX_MvPvDelayTime                       (knx.paramWord(EEX_MvPvDelayTime) & EEX_MvPvDelayTimeMask)
// zyklisch senden alle (0 = aus) (in Millisekunden)
#define ParamEEX_MvPvDelayTimeMS                     (paramDelay(knx.paramWord(EEX_MvPvDelayTime)))
// Änderung angegeben
#define ParamEEX_MvConsChangeMode                    (knx.paramByte(EEX_MvConsChangeMode))
// Senden bei Änderung um
#define ParamEEX_MvConsThreshold                     (knx.paramFloat(EEX_MvConsThreshold, Float_Enc_IEEE754Single))
// Zeitbasis
#define ParamEEX_MvConsDelayBase                     ((knx.paramByte(EEX_MvConsDelayBase) & EEX_MvConsDelayBaseMask) >> EEX_MvConsDelayBaseShift)
// zyklisch senden alle (0 = aus)
#define ParamEEX_MvConsDelayTime                     (knx.paramWord(EEX_MvConsDelayTime) & EEX_MvConsDelayTimeMask)
// zyklisch senden alle (0 = aus) (in Millisekunden)
#define ParamEEX_MvConsDelayTimeMS                   (paramDelay(knx.paramWord(EEX_MvConsDelayTime)))
// Änderung angegeben
#define ParamEEX_MvBatChangeMode                     (knx.paramByte(EEX_MvBatChangeMode))
// Senden bei Änderung um
#define ParamEEX_MvBatThreshold                      (knx.paramFloat(EEX_MvBatThreshold, Float_Enc_IEEE754Single))
// Zeitbasis
#define ParamEEX_MvBatDelayBase                      ((knx.paramByte(EEX_MvBatDelayBase) & EEX_MvBatDelayBaseMask) >> EEX_MvBatDelayBaseShift)
// zyklisch senden alle (0 = aus)
#define ParamEEX_MvBatDelayTime                      (knx.paramWord(EEX_MvBatDelayTime) & EEX_MvBatDelayTimeMask)
// zyklisch senden alle (0 = aus) (in Millisekunden)
#define ParamEEX_MvBatDelayTimeMS                    (paramDelay(knx.paramWord(EEX_MvBatDelayTime)))
// Änderung angegeben
#define ParamEEX_MvSocChangeMode                     (knx.paramByte(EEX_MvSocChangeMode))
// Senden bei Änderung um
#define ParamEEX_MvSocThreshold                      (knx.paramByte(EEX_MvSocThreshold))
// Zeitbasis
#define ParamEEX_MvSocDelayBase                      ((knx.paramByte(EEX_MvSocDelayBase) & EEX_MvSocDelayBaseMask) >> EEX_MvSocDelayBaseShift)
// zyklisch senden alle (0 = aus)
#define ParamEEX_MvSocDelayTime                      (knx.paramWord(EEX_MvSocDelayTime) & EEX_MvSocDelayTimeMask)
// zyklisch senden alle (0 = aus) (in Millisekunden)
#define ParamEEX_MvSocDelayTimeMS                    (paramDelay(knx.paramWord(EEX_MvSocDelayTime)))
// Netzleistung (Bezug +, Einspeisung -)
#define ParamEEX_MvGridEnable                        ((bool)(knx.paramByte(EEX_MvGridEnable) & EEX_MvGridEnableMask))
// Geräteleistung
#define ParamEEX_MvDevPowerEnable                    ((bool)(knx.paramByte(EEX_MvDevPowerEnable) & EEX_MvDevPowerEnableMask))
// Gerätetemperatur
#define ParamEEX_MvDevTempEnable                     ((bool)(knx.paramByte(EEX_MvDevTempEnable) & EEX_MvDevTempEnableMask))
// Gerätestörung
#define ParamEEX_MvDevFaultEnable                    ((bool)(knx.paramByte(EEX_MvDevFaultEnable) & EEX_MvDevFaultEnableMask))
// Geräte-ID (_id)
#define ParamEEX_MvDevPowerId                        (knx.paramData(EEX_MvDevPowerId))
#define ParamEEX_MvDevPowerIdStr                     (knx.paramString(EEX_MvDevPowerId, EEX_MvDevPowerIdLength))
// Geräte-ID (_id)
#define ParamEEX_MvDevTempId                         (knx.paramData(EEX_MvDevTempId))
#define ParamEEX_MvDevTempIdStr                      (knx.paramString(EEX_MvDevTempId, EEX_MvDevTempIdLength))
// Geräte-ID (_id)
#define ParamEEX_MvDevFaultId                        (knx.paramData(EEX_MvDevFaultId))
#define ParamEEX_MvDevFaultIdStr                     (knx.paramString(EEX_MvDevFaultId, EEX_MvDevFaultIdLength))
// Änderung angegeben
#define ParamEEX_MvDevPowerChangeMode                (knx.paramByte(EEX_MvDevPowerChangeMode))
// Senden bei Änderung um
#define ParamEEX_MvDevPowerThreshold                 (knx.paramFloat(EEX_MvDevPowerThreshold, Float_Enc_IEEE754Single))
// Zeitbasis
#define ParamEEX_MvDevPowerDelayBase                 ((knx.paramByte(EEX_MvDevPowerDelayBase) & EEX_MvDevPowerDelayBaseMask) >> EEX_MvDevPowerDelayBaseShift)
// zyklisch senden alle (0 = aus)
#define ParamEEX_MvDevPowerDelayTime                 (knx.paramWord(EEX_MvDevPowerDelayTime) & EEX_MvDevPowerDelayTimeMask)
// zyklisch senden alle (0 = aus) (in Millisekunden)
#define ParamEEX_MvDevPowerDelayTimeMS               (paramDelay(knx.paramWord(EEX_MvDevPowerDelayTime)))
// Senden bei Änderung um
#define ParamEEX_MvDevTempThreshold                  (knx.paramFloat(EEX_MvDevTempThreshold, Float_Enc_IEEE754Single))
// Zeitbasis
#define ParamEEX_MvDevTempDelayBase                  ((knx.paramByte(EEX_MvDevTempDelayBase) & EEX_MvDevTempDelayBaseMask) >> EEX_MvDevTempDelayBaseShift)
// zyklisch senden alle (0 = aus)
#define ParamEEX_MvDevTempDelayTime                  (knx.paramWord(EEX_MvDevTempDelayTime) & EEX_MvDevTempDelayTimeMask)
// zyklisch senden alle (0 = aus) (in Millisekunden)
#define ParamEEX_MvDevTempDelayTimeMS                (paramDelay(knx.paramWord(EEX_MvDevTempDelayTime)))
// Bezeichnung
#define ParamEEX_MvDevPowerLabel                     (knx.paramData(EEX_MvDevPowerLabel))
#define ParamEEX_MvDevPowerLabelStr                  (knx.paramString(EEX_MvDevPowerLabel, EEX_MvDevPowerLabelLength))
// Bezeichnung
#define ParamEEX_MvDevTempLabel                      (knx.paramData(EEX_MvDevTempLabel))
#define ParamEEX_MvDevTempLabelStr                   (knx.paramString(EEX_MvDevTempLabel, EEX_MvDevTempLabelLength))
// Bezeichnung
#define ParamEEX_MvDevFaultLabel                     (knx.paramData(EEX_MvDevFaultLabel))
#define ParamEEX_MvDevFaultLabelStr                  (knx.paramString(EEX_MvDevFaultLabel, EEX_MvDevFaultLabelLength))
// Änderung angegeben
#define ParamEEX_MvGridChangeMode                    (knx.paramByte(EEX_MvGridChangeMode))
// Senden bei Änderung um
#define ParamEEX_MvGridThreshold                     (knx.paramFloat(EEX_MvGridThreshold, Float_Enc_IEEE754Single))
// Zeitbasis
#define ParamEEX_MvGridDelayBase                     ((knx.paramByte(EEX_MvGridDelayBase) & EEX_MvGridDelayBaseMask) >> EEX_MvGridDelayBaseShift)
// zyklisch senden alle (0 = aus)
#define ParamEEX_MvGridDelayTime                     (knx.paramWord(EEX_MvGridDelayTime) & EEX_MvGridDelayTimeMask)
// zyklisch senden alle (0 = aus) (in Millisekunden)
#define ParamEEX_MvGridDelayTimeMS                   (paramDelay(knx.paramWord(EEX_MvGridDelayTime)))

#define EEX_KoModbusActive 450
#define EEX_KoApiReachable 451
#define EEX_KoPvPower 452
#define EEX_KoConsumption 453
#define EEX_KoBatteryPower 454
#define EEX_KoBatterySoc 455
#define EEX_KoGridPower 456
#define EEX_KoDevicePower 463
#define EEX_KoDeviceTemp 464
#define EEX_KoDeviceFault 465

// 
#define KoEEX_ModbusActive                        (knx.getGroupObject(EEX_KoModbusActive))
// 
#define KoEEX_ApiReachable                        (knx.getGroupObject(EEX_KoApiReachable))
// 
#define KoEEX_PvPower                             (knx.getGroupObject(EEX_KoPvPower))
// 
#define KoEEX_Consumption                         (knx.getGroupObject(EEX_KoConsumption))
// 
#define KoEEX_BatteryPower                        (knx.getGroupObject(EEX_KoBatteryPower))
// 
#define KoEEX_BatterySoc                          (knx.getGroupObject(EEX_KoBatterySoc))
// 
#define KoEEX_GridPower                           (knx.getGroupObject(EEX_KoGridPower))
// 
#define KoEEX_DevicePower                         (knx.getGroupObject(EEX_KoDevicePower))
// 
#define KoEEX_DeviceTemp                          (knx.getGroupObject(EEX_KoDeviceTemp))
// 
#define KoEEX_DeviceFault                         (knx.getGroupObject(EEX_KoDeviceFault))

#define EEX_ChannelCount 20

// Parameter per channel
#define EEX_ParamBlockOffset 821
#define EEX_ParamBlockSize 106
#define EEX_ParamCalcIndex(index) (index + EEX_ParamBlockOffset + _channelIndex * EEX_ParamBlockSize)

#define EEX_CHCategory                           0      // 8 Bits, Bit 7-0
#define EEX_CHConsumerProfile                    1      // 8 Bits, Bit 7-0
#define EEX_CHUnitId                             2      // uint8_t
#define EEX_CHInvert                             3      // 8 Bits, Bit 7-0
#define EEX_CHTimeout                            4      // uint16_t
#define EEX_CHScale                              6      // uint16_t
#define EEX_CHModel                              8      // char*, 32 Byte
#define     EEX_CHModelLength 32
#define EEX_CHSerial                            40      // char*, 32 Byte
#define     EEX_CHSerialLength 32
#define EEX_CHDeviceId                          72      // char*, 32 Byte
#define     EEX_CHDeviceIdLength 32
#define EEX_CHShowLastQuery                     104      // 8 Bits, Bit 7-0
#define EEX_CHSuspended                         105      // 1 Bit, Bit 7
#define     EEX_CHSuspendedMask 0x80
#define     EEX_CHSuspendedShift 7

// Kategorie
#define ParamEEX_CHCategory                          (knx.paramByte(EEX_ParamCalcIndex(EEX_CHCategory)))
// Modbus-Profil
#define ParamEEX_CHConsumerProfile                   (knx.paramByte(EEX_ParamCalcIndex(EEX_CHConsumerProfile)))
// Modbus Unit-ID
#define ParamEEX_CHUnitId                            (knx.paramByte(EEX_ParamCalcIndex(EEX_CHUnitId)))
// Vorzeichen invertieren
#define ParamEEX_CHInvert                            (knx.paramByte(EEX_ParamCalcIndex(EEX_CHInvert)))
// Timeout (0 = aus)
#define ParamEEX_CHTimeout                           (knx.paramWord(EEX_ParamCalcIndex(EEX_CHTimeout)))
// Skalierung (Promille, 1000 = 1,0)
#define ParamEEX_CHScale                             (knx.paramWord(EEX_ParamCalcIndex(EEX_CHScale)))
// SunSpec Modell
#define ParamEEX_CHModel                             (knx.paramData(EEX_ParamCalcIndex(EEX_CHModel)))
#define ParamEEX_CHModelStr                          (knx.paramString(EEX_ParamCalcIndex(EEX_CHModel), EEX_CHModelLength))
// SunSpec Seriennummer
#define ParamEEX_CHSerial                            (knx.paramData(EEX_ParamCalcIndex(EEX_CHSerial)))
#define ParamEEX_CHSerialStr                         (knx.paramString(EEX_ParamCalcIndex(EEX_CHSerial), EEX_CHSerialLength))
// Virtual Switch ID (_id)
#define ParamEEX_CHDeviceId                          (knx.paramData(EEX_ParamCalcIndex(EEX_CHDeviceId)))
#define ParamEEX_CHDeviceIdStr                       (knx.paramString(EEX_ParamCalcIndex(EEX_CHDeviceId), EEX_CHDeviceIdLength))
// Status KO 'Letzte Abfrage' verwenden
#define ParamEEX_CHShowLastQuery                     (knx.paramByte(EEX_ParamCalcIndex(EEX_CHShowLastQuery)))
// Suspendiert
#define ParamEEX_CHSuspended                         ((bool)(knx.paramByte(EEX_ParamCalcIndex(EEX_CHSuspended)) & EEX_CHSuspendedMask))

// deprecated
#define EEX_KoOffset 470

// Communication objects per channel (multiple occurrence)
#define EEX_KoBlockOffset 470
#define EEX_KoBlockSize 5

#define EEX_KoCalcNumber(index) (index + EEX_KoBlockOffset + _channelIndex * EEX_KoBlockSize)
#define EEX_KoCalcIndex(number) ((number >= EEX_KoCalcNumber(0) && number < EEX_KoCalcNumber(EEX_KoBlockSize)) ? (number - EEX_KoBlockOffset) % EEX_KoBlockSize : -1)
#define EEX_KoCalcChannel(number) ((number >= EEX_KoBlockOffset && number < EEX_KoBlockOffset + EEX_ChannelCount * EEX_KoBlockSize) ? (number - EEX_KoBlockOffset) / EEX_KoBlockSize : -1)

#define EEX_KoCHWirkleistung 0
#define EEX_KoCHSchaltausgang 1
#define EEX_KoCHLetzteAbfrage 2
#define EEX_KoCHBezug 3
#define EEX_KoCHEinspeisung 4

// 
#define KoEEX_CHWirkleistung                      (knx.getGroupObject(EEX_KoCalcNumber(EEX_KoCHWirkleistung)))
// 
#define KoEEX_CHSchaltausgang                     (knx.getGroupObject(EEX_KoCalcNumber(EEX_KoCHSchaltausgang)))
// 
#define KoEEX_CHLetzteAbfrage                     (knx.getGroupObject(EEX_KoCalcNumber(EEX_KoCHLetzteAbfrage)))
// 
#define KoEEX_CHBezug                             (knx.getGroupObject(EEX_KoCalcNumber(EEX_KoCHBezug)))
// 
#define KoEEX_CHEinspeisung                       (knx.getGroupObject(EEX_KoCalcNumber(EEX_KoCHEinspeisung)))

#define SPV_SPV_AsstIp                          2945      // char*, 32 Byte
#define     SPV_SPV_AsstIpLength 32
#define SPV_SPV_AsstPort                        2977      // uint16_t
#define SPV_SPV_AsstSlaveId                     2979      // uint8_t
#define SPV_SPV_AsstStartReg                    2981      // uint16_t
#define SPV_SPV_AsstReadCount                   2983      // uint8_t
#define SPV_SPV_AsstTransport                   2984      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstTargetChannel               2986      // uint8_t
#define SPV_SPV_AsstRowCount                    2987      // uint8_t
#define SPV_SPV_AsstSerial                      2989      // char*, 16 Byte
#define     SPV_SPV_AsstSerialLength 16
#define SPV_SPV_AsstResultText                  3005      // char*, 48 Byte
#define     SPV_SPV_AsstResultTextLength 48
#define SPV_SPV_AsstReg00                       3053      // uint16_t
#define SPV_SPV_AsstRaw00                       3055      // uint16_t
#define SPV_SPV_AsstMeaning00                   3057      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType00                      3058      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType00Mask 0xE0
#define     SPV_SPV_AsstType00Shift 5
#define SPV_SPV_AsstScale00                     3058      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale00Mask 0x1C
#define     SPV_SPV_AsstScale00Shift 2
#define SPV_SPV_AsstOffset00                    3059      // int8_t
#define SPV_SPV_AsstRef00                       3061      // float (4 Byte)
#define SPV_SPV_AsstReg01                       3065      // uint16_t
#define SPV_SPV_AsstRaw01                       3067      // uint16_t
#define SPV_SPV_AsstMeaning01                   3069      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType01                      3070      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType01Mask 0xE0
#define     SPV_SPV_AsstType01Shift 5
#define SPV_SPV_AsstScale01                     3070      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale01Mask 0x1C
#define     SPV_SPV_AsstScale01Shift 2
#define SPV_SPV_AsstOffset01                    3071      // int8_t
#define SPV_SPV_AsstRef01                       3073      // float (4 Byte)
#define SPV_SPV_AsstReg02                       3077      // uint16_t
#define SPV_SPV_AsstRaw02                       3079      // uint16_t
#define SPV_SPV_AsstMeaning02                   3081      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType02                      3082      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType02Mask 0xE0
#define     SPV_SPV_AsstType02Shift 5
#define SPV_SPV_AsstScale02                     3082      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale02Mask 0x1C
#define     SPV_SPV_AsstScale02Shift 2
#define SPV_SPV_AsstOffset02                    3083      // int8_t
#define SPV_SPV_AsstRef02                       3085      // float (4 Byte)
#define SPV_SPV_AsstReg03                       3089      // uint16_t
#define SPV_SPV_AsstRaw03                       3091      // uint16_t
#define SPV_SPV_AsstMeaning03                   3093      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType03                      3094      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType03Mask 0xE0
#define     SPV_SPV_AsstType03Shift 5
#define SPV_SPV_AsstScale03                     3094      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale03Mask 0x1C
#define     SPV_SPV_AsstScale03Shift 2
#define SPV_SPV_AsstOffset03                    3095      // int8_t
#define SPV_SPV_AsstRef03                       3097      // float (4 Byte)
#define SPV_SPV_AsstReg04                       3101      // uint16_t
#define SPV_SPV_AsstRaw04                       3103      // uint16_t
#define SPV_SPV_AsstMeaning04                   3105      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType04                      3106      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType04Mask 0xE0
#define     SPV_SPV_AsstType04Shift 5
#define SPV_SPV_AsstScale04                     3106      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale04Mask 0x1C
#define     SPV_SPV_AsstScale04Shift 2
#define SPV_SPV_AsstOffset04                    3107      // int8_t
#define SPV_SPV_AsstRef04                       3109      // float (4 Byte)
#define SPV_SPV_AsstReg05                       3113      // uint16_t
#define SPV_SPV_AsstRaw05                       3115      // uint16_t
#define SPV_SPV_AsstMeaning05                   3117      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType05                      3118      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType05Mask 0xE0
#define     SPV_SPV_AsstType05Shift 5
#define SPV_SPV_AsstScale05                     3118      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale05Mask 0x1C
#define     SPV_SPV_AsstScale05Shift 2
#define SPV_SPV_AsstOffset05                    3119      // int8_t
#define SPV_SPV_AsstRef05                       3121      // float (4 Byte)
#define SPV_SPV_AsstReg06                       3125      // uint16_t
#define SPV_SPV_AsstRaw06                       3127      // uint16_t
#define SPV_SPV_AsstMeaning06                   3129      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType06                      3130      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType06Mask 0xE0
#define     SPV_SPV_AsstType06Shift 5
#define SPV_SPV_AsstScale06                     3130      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale06Mask 0x1C
#define     SPV_SPV_AsstScale06Shift 2
#define SPV_SPV_AsstOffset06                    3131      // int8_t
#define SPV_SPV_AsstRef06                       3133      // float (4 Byte)
#define SPV_SPV_AsstReg07                       3137      // uint16_t
#define SPV_SPV_AsstRaw07                       3139      // uint16_t
#define SPV_SPV_AsstMeaning07                   3141      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType07                      3142      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType07Mask 0xE0
#define     SPV_SPV_AsstType07Shift 5
#define SPV_SPV_AsstScale07                     3142      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale07Mask 0x1C
#define     SPV_SPV_AsstScale07Shift 2
#define SPV_SPV_AsstOffset07                    3143      // int8_t
#define SPV_SPV_AsstRef07                       3145      // float (4 Byte)
#define SPV_SPV_AsstReg08                       3149      // uint16_t
#define SPV_SPV_AsstRaw08                       3151      // uint16_t
#define SPV_SPV_AsstMeaning08                   3153      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType08                      3154      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType08Mask 0xE0
#define     SPV_SPV_AsstType08Shift 5
#define SPV_SPV_AsstScale08                     3154      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale08Mask 0x1C
#define     SPV_SPV_AsstScale08Shift 2
#define SPV_SPV_AsstOffset08                    3155      // int8_t
#define SPV_SPV_AsstRef08                       3157      // float (4 Byte)
#define SPV_SPV_AsstReg09                       3161      // uint16_t
#define SPV_SPV_AsstRaw09                       3163      // uint16_t
#define SPV_SPV_AsstMeaning09                   3165      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType09                      3166      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType09Mask 0xE0
#define     SPV_SPV_AsstType09Shift 5
#define SPV_SPV_AsstScale09                     3166      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale09Mask 0x1C
#define     SPV_SPV_AsstScale09Shift 2
#define SPV_SPV_AsstOffset09                    3167      // int8_t
#define SPV_SPV_AsstRef09                       3169      // float (4 Byte)
#define SPV_SPV_AsstReg10                       3173      // uint16_t
#define SPV_SPV_AsstRaw10                       3175      // uint16_t
#define SPV_SPV_AsstMeaning10                   3177      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType10                      3178      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType10Mask 0xE0
#define     SPV_SPV_AsstType10Shift 5
#define SPV_SPV_AsstScale10                     3178      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale10Mask 0x1C
#define     SPV_SPV_AsstScale10Shift 2
#define SPV_SPV_AsstOffset10                    3179      // int8_t
#define SPV_SPV_AsstRef10                       3181      // float (4 Byte)
#define SPV_SPV_AsstReg11                       3185      // uint16_t
#define SPV_SPV_AsstRaw11                       3187      // uint16_t
#define SPV_SPV_AsstMeaning11                   3189      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType11                      3190      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType11Mask 0xE0
#define     SPV_SPV_AsstType11Shift 5
#define SPV_SPV_AsstScale11                     3190      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale11Mask 0x1C
#define     SPV_SPV_AsstScale11Shift 2
#define SPV_SPV_AsstOffset11                    3191      // int8_t
#define SPV_SPV_AsstRef11                       3193      // float (4 Byte)
#define SPV_SPV_AsstReg12                       3197      // uint16_t
#define SPV_SPV_AsstRaw12                       3199      // uint16_t
#define SPV_SPV_AsstMeaning12                   3201      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType12                      3202      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType12Mask 0xE0
#define     SPV_SPV_AsstType12Shift 5
#define SPV_SPV_AsstScale12                     3202      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale12Mask 0x1C
#define     SPV_SPV_AsstScale12Shift 2
#define SPV_SPV_AsstOffset12                    3203      // int8_t
#define SPV_SPV_AsstRef12                       3205      // float (4 Byte)
#define SPV_SPV_AsstReg13                       3209      // uint16_t
#define SPV_SPV_AsstRaw13                       3211      // uint16_t
#define SPV_SPV_AsstMeaning13                   3213      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType13                      3214      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType13Mask 0xE0
#define     SPV_SPV_AsstType13Shift 5
#define SPV_SPV_AsstScale13                     3214      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale13Mask 0x1C
#define     SPV_SPV_AsstScale13Shift 2
#define SPV_SPV_AsstOffset13                    3215      // int8_t
#define SPV_SPV_AsstRef13                       3217      // float (4 Byte)
#define SPV_SPV_AsstReg14                       3221      // uint16_t
#define SPV_SPV_AsstRaw14                       3223      // uint16_t
#define SPV_SPV_AsstMeaning14                   3225      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType14                      3226      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType14Mask 0xE0
#define     SPV_SPV_AsstType14Shift 5
#define SPV_SPV_AsstScale14                     3226      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale14Mask 0x1C
#define     SPV_SPV_AsstScale14Shift 2
#define SPV_SPV_AsstOffset14                    3227      // int8_t
#define SPV_SPV_AsstRef14                       3229      // float (4 Byte)
#define SPV_SPV_AsstReg15                       3233      // uint16_t
#define SPV_SPV_AsstRaw15                       3235      // uint16_t
#define SPV_SPV_AsstMeaning15                   3237      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType15                      3238      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType15Mask 0xE0
#define     SPV_SPV_AsstType15Shift 5
#define SPV_SPV_AsstScale15                     3238      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale15Mask 0x1C
#define     SPV_SPV_AsstScale15Shift 2
#define SPV_SPV_AsstOffset15                    3239      // int8_t
#define SPV_SPV_AsstRef15                       3241      // float (4 Byte)
#define SPV_SPV_AsstReg16                       3245      // uint16_t
#define SPV_SPV_AsstRaw16                       3247      // uint16_t
#define SPV_SPV_AsstMeaning16                   3249      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType16                      3250      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType16Mask 0xE0
#define     SPV_SPV_AsstType16Shift 5
#define SPV_SPV_AsstScale16                     3250      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale16Mask 0x1C
#define     SPV_SPV_AsstScale16Shift 2
#define SPV_SPV_AsstOffset16                    3251      // int8_t
#define SPV_SPV_AsstRef16                       3253      // float (4 Byte)
#define SPV_SPV_AsstReg17                       3257      // uint16_t
#define SPV_SPV_AsstRaw17                       3259      // uint16_t
#define SPV_SPV_AsstMeaning17                   3261      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType17                      3262      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType17Mask 0xE0
#define     SPV_SPV_AsstType17Shift 5
#define SPV_SPV_AsstScale17                     3262      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale17Mask 0x1C
#define     SPV_SPV_AsstScale17Shift 2
#define SPV_SPV_AsstOffset17                    3263      // int8_t
#define SPV_SPV_AsstRef17                       3265      // float (4 Byte)
#define SPV_SPV_AsstReg18                       3269      // uint16_t
#define SPV_SPV_AsstRaw18                       3271      // uint16_t
#define SPV_SPV_AsstMeaning18                   3273      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType18                      3274      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType18Mask 0xE0
#define     SPV_SPV_AsstType18Shift 5
#define SPV_SPV_AsstScale18                     3274      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale18Mask 0x1C
#define     SPV_SPV_AsstScale18Shift 2
#define SPV_SPV_AsstOffset18                    3275      // int8_t
#define SPV_SPV_AsstRef18                       3277      // float (4 Byte)
#define SPV_SPV_AsstReg19                       3281      // uint16_t
#define SPV_SPV_AsstRaw19                       3283      // uint16_t
#define SPV_SPV_AsstMeaning19                   3285      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType19                      3286      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType19Mask 0xE0
#define     SPV_SPV_AsstType19Shift 5
#define SPV_SPV_AsstScale19                     3286      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale19Mask 0x1C
#define     SPV_SPV_AsstScale19Shift 2
#define SPV_SPV_AsstOffset19                    3287      // int8_t
#define SPV_SPV_AsstRef19                       3289      // float (4 Byte)
#define SPV_SPV_AsstReg20                       3293      // uint16_t
#define SPV_SPV_AsstRaw20                       3295      // uint16_t
#define SPV_SPV_AsstMeaning20                   3297      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType20                      3298      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType20Mask 0xE0
#define     SPV_SPV_AsstType20Shift 5
#define SPV_SPV_AsstScale20                     3298      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale20Mask 0x1C
#define     SPV_SPV_AsstScale20Shift 2
#define SPV_SPV_AsstOffset20                    3299      // int8_t
#define SPV_SPV_AsstRef20                       3301      // float (4 Byte)
#define SPV_SPV_AsstReg21                       3305      // uint16_t
#define SPV_SPV_AsstRaw21                       3307      // uint16_t
#define SPV_SPV_AsstMeaning21                   3309      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType21                      3310      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType21Mask 0xE0
#define     SPV_SPV_AsstType21Shift 5
#define SPV_SPV_AsstScale21                     3310      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale21Mask 0x1C
#define     SPV_SPV_AsstScale21Shift 2
#define SPV_SPV_AsstOffset21                    3311      // int8_t
#define SPV_SPV_AsstRef21                       3313      // float (4 Byte)
#define SPV_SPV_AsstReg22                       3317      // uint16_t
#define SPV_SPV_AsstRaw22                       3319      // uint16_t
#define SPV_SPV_AsstMeaning22                   3321      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType22                      3322      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType22Mask 0xE0
#define     SPV_SPV_AsstType22Shift 5
#define SPV_SPV_AsstScale22                     3322      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale22Mask 0x1C
#define     SPV_SPV_AsstScale22Shift 2
#define SPV_SPV_AsstOffset22                    3323      // int8_t
#define SPV_SPV_AsstRef22                       3325      // float (4 Byte)
#define SPV_SPV_AsstReg23                       3329      // uint16_t
#define SPV_SPV_AsstRaw23                       3331      // uint16_t
#define SPV_SPV_AsstMeaning23                   3333      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType23                      3334      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType23Mask 0xE0
#define     SPV_SPV_AsstType23Shift 5
#define SPV_SPV_AsstScale23                     3334      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale23Mask 0x1C
#define     SPV_SPV_AsstScale23Shift 2
#define SPV_SPV_AsstOffset23                    3335      // int8_t
#define SPV_SPV_AsstRef23                       3337      // float (4 Byte)
#define SPV_SPV_AsstReg24                       3341      // uint16_t
#define SPV_SPV_AsstRaw24                       3343      // uint16_t
#define SPV_SPV_AsstMeaning24                   3345      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType24                      3346      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType24Mask 0xE0
#define     SPV_SPV_AsstType24Shift 5
#define SPV_SPV_AsstScale24                     3346      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale24Mask 0x1C
#define     SPV_SPV_AsstScale24Shift 2
#define SPV_SPV_AsstOffset24                    3347      // int8_t
#define SPV_SPV_AsstRef24                       3349      // float (4 Byte)
#define SPV_SPV_AsstReg25                       3353      // uint16_t
#define SPV_SPV_AsstRaw25                       3355      // uint16_t
#define SPV_SPV_AsstMeaning25                   3357      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType25                      3358      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType25Mask 0xE0
#define     SPV_SPV_AsstType25Shift 5
#define SPV_SPV_AsstScale25                     3358      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale25Mask 0x1C
#define     SPV_SPV_AsstScale25Shift 2
#define SPV_SPV_AsstOffset25                    3359      // int8_t
#define SPV_SPV_AsstRef25                       3361      // float (4 Byte)
#define SPV_SPV_AsstReg26                       3365      // uint16_t
#define SPV_SPV_AsstRaw26                       3367      // uint16_t
#define SPV_SPV_AsstMeaning26                   3369      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType26                      3370      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType26Mask 0xE0
#define     SPV_SPV_AsstType26Shift 5
#define SPV_SPV_AsstScale26                     3370      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale26Mask 0x1C
#define     SPV_SPV_AsstScale26Shift 2
#define SPV_SPV_AsstOffset26                    3371      // int8_t
#define SPV_SPV_AsstRef26                       3373      // float (4 Byte)
#define SPV_SPV_AsstReg27                       3377      // uint16_t
#define SPV_SPV_AsstRaw27                       3379      // uint16_t
#define SPV_SPV_AsstMeaning27                   3381      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType27                      3382      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType27Mask 0xE0
#define     SPV_SPV_AsstType27Shift 5
#define SPV_SPV_AsstScale27                     3382      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale27Mask 0x1C
#define     SPV_SPV_AsstScale27Shift 2
#define SPV_SPV_AsstOffset27                    3383      // int8_t
#define SPV_SPV_AsstRef27                       3385      // float (4 Byte)
#define SPV_SPV_AsstReg28                       3389      // uint16_t
#define SPV_SPV_AsstRaw28                       3391      // uint16_t
#define SPV_SPV_AsstMeaning28                   3393      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType28                      3394      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType28Mask 0xE0
#define     SPV_SPV_AsstType28Shift 5
#define SPV_SPV_AsstScale28                     3394      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale28Mask 0x1C
#define     SPV_SPV_AsstScale28Shift 2
#define SPV_SPV_AsstOffset28                    3395      // int8_t
#define SPV_SPV_AsstRef28                       3397      // float (4 Byte)
#define SPV_SPV_AsstReg29                       3401      // uint16_t
#define SPV_SPV_AsstRaw29                       3403      // uint16_t
#define SPV_SPV_AsstMeaning29                   3405      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType29                      3406      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType29Mask 0xE0
#define     SPV_SPV_AsstType29Shift 5
#define SPV_SPV_AsstScale29                     3406      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale29Mask 0x1C
#define     SPV_SPV_AsstScale29Shift 2
#define SPV_SPV_AsstOffset29                    3407      // int8_t
#define SPV_SPV_AsstRef29                       3409      // float (4 Byte)
#define SPV_SPV_AsstReg30                       3413      // uint16_t
#define SPV_SPV_AsstRaw30                       3415      // uint16_t
#define SPV_SPV_AsstMeaning30                   3417      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType30                      3418      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType30Mask 0xE0
#define     SPV_SPV_AsstType30Shift 5
#define SPV_SPV_AsstScale30                     3418      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale30Mask 0x1C
#define     SPV_SPV_AsstScale30Shift 2
#define SPV_SPV_AsstOffset30                    3419      // int8_t
#define SPV_SPV_AsstRef30                       3421      // float (4 Byte)
#define SPV_SPV_AsstReg31                       3425      // uint16_t
#define SPV_SPV_AsstRaw31                       3427      // uint16_t
#define SPV_SPV_AsstMeaning31                   3429      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType31                      3430      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType31Mask 0xE0
#define     SPV_SPV_AsstType31Shift 5
#define SPV_SPV_AsstScale31                     3430      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale31Mask 0x1C
#define     SPV_SPV_AsstScale31Shift 2
#define SPV_SPV_AsstOffset31                    3431      // int8_t
#define SPV_SPV_AsstRef31                       3433      // float (4 Byte)
#define SPV_SPV_AsstReg32                       3437      // uint16_t
#define SPV_SPV_AsstRaw32                       3439      // uint16_t
#define SPV_SPV_AsstMeaning32                   3441      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType32                      3442      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType32Mask 0xE0
#define     SPV_SPV_AsstType32Shift 5
#define SPV_SPV_AsstScale32                     3442      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale32Mask 0x1C
#define     SPV_SPV_AsstScale32Shift 2
#define SPV_SPV_AsstOffset32                    3443      // int8_t
#define SPV_SPV_AsstRef32                       3445      // float (4 Byte)
#define SPV_SPV_AsstReg33                       3449      // uint16_t
#define SPV_SPV_AsstRaw33                       3451      // uint16_t
#define SPV_SPV_AsstMeaning33                   3453      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType33                      3454      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType33Mask 0xE0
#define     SPV_SPV_AsstType33Shift 5
#define SPV_SPV_AsstScale33                     3454      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale33Mask 0x1C
#define     SPV_SPV_AsstScale33Shift 2
#define SPV_SPV_AsstOffset33                    3455      // int8_t
#define SPV_SPV_AsstRef33                       3457      // float (4 Byte)
#define SPV_SPV_AsstReg34                       3461      // uint16_t
#define SPV_SPV_AsstRaw34                       3463      // uint16_t
#define SPV_SPV_AsstMeaning34                   3465      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType34                      3466      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType34Mask 0xE0
#define     SPV_SPV_AsstType34Shift 5
#define SPV_SPV_AsstScale34                     3466      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale34Mask 0x1C
#define     SPV_SPV_AsstScale34Shift 2
#define SPV_SPV_AsstOffset34                    3467      // int8_t
#define SPV_SPV_AsstRef34                       3469      // float (4 Byte)
#define SPV_SPV_AsstReg35                       3473      // uint16_t
#define SPV_SPV_AsstRaw35                       3475      // uint16_t
#define SPV_SPV_AsstMeaning35                   3477      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType35                      3478      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType35Mask 0xE0
#define     SPV_SPV_AsstType35Shift 5
#define SPV_SPV_AsstScale35                     3478      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale35Mask 0x1C
#define     SPV_SPV_AsstScale35Shift 2
#define SPV_SPV_AsstOffset35                    3479      // int8_t
#define SPV_SPV_AsstRef35                       3481      // float (4 Byte)
#define SPV_SPV_AsstReg36                       3485      // uint16_t
#define SPV_SPV_AsstRaw36                       3487      // uint16_t
#define SPV_SPV_AsstMeaning36                   3489      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType36                      3490      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType36Mask 0xE0
#define     SPV_SPV_AsstType36Shift 5
#define SPV_SPV_AsstScale36                     3490      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale36Mask 0x1C
#define     SPV_SPV_AsstScale36Shift 2
#define SPV_SPV_AsstOffset36                    3491      // int8_t
#define SPV_SPV_AsstRef36                       3493      // float (4 Byte)
#define SPV_SPV_AsstReg37                       3497      // uint16_t
#define SPV_SPV_AsstRaw37                       3499      // uint16_t
#define SPV_SPV_AsstMeaning37                   3501      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType37                      3502      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType37Mask 0xE0
#define     SPV_SPV_AsstType37Shift 5
#define SPV_SPV_AsstScale37                     3502      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale37Mask 0x1C
#define     SPV_SPV_AsstScale37Shift 2
#define SPV_SPV_AsstOffset37                    3503      // int8_t
#define SPV_SPV_AsstRef37                       3505      // float (4 Byte)
#define SPV_SPV_AsstReg38                       3509      // uint16_t
#define SPV_SPV_AsstRaw38                       3511      // uint16_t
#define SPV_SPV_AsstMeaning38                   3513      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType38                      3514      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType38Mask 0xE0
#define     SPV_SPV_AsstType38Shift 5
#define SPV_SPV_AsstScale38                     3514      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale38Mask 0x1C
#define     SPV_SPV_AsstScale38Shift 2
#define SPV_SPV_AsstOffset38                    3515      // int8_t
#define SPV_SPV_AsstRef38                       3517      // float (4 Byte)
#define SPV_SPV_AsstReg39                       3521      // uint16_t
#define SPV_SPV_AsstRaw39                       3523      // uint16_t
#define SPV_SPV_AsstMeaning39                   3525      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType39                      3526      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType39Mask 0xE0
#define     SPV_SPV_AsstType39Shift 5
#define SPV_SPV_AsstScale39                     3526      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale39Mask 0x1C
#define     SPV_SPV_AsstScale39Shift 2
#define SPV_SPV_AsstOffset39                    3527      // int8_t
#define SPV_SPV_AsstRef39                       3529      // float (4 Byte)
#define SPV_SPV_AsstReg40                       3533      // uint16_t
#define SPV_SPV_AsstRaw40                       3535      // uint16_t
#define SPV_SPV_AsstMeaning40                   3537      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType40                      3538      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType40Mask 0xE0
#define     SPV_SPV_AsstType40Shift 5
#define SPV_SPV_AsstScale40                     3538      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale40Mask 0x1C
#define     SPV_SPV_AsstScale40Shift 2
#define SPV_SPV_AsstOffset40                    3539      // int8_t
#define SPV_SPV_AsstRef40                       3541      // float (4 Byte)
#define SPV_SPV_AsstReg41                       3545      // uint16_t
#define SPV_SPV_AsstRaw41                       3547      // uint16_t
#define SPV_SPV_AsstMeaning41                   3549      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType41                      3550      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType41Mask 0xE0
#define     SPV_SPV_AsstType41Shift 5
#define SPV_SPV_AsstScale41                     3550      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale41Mask 0x1C
#define     SPV_SPV_AsstScale41Shift 2
#define SPV_SPV_AsstOffset41                    3551      // int8_t
#define SPV_SPV_AsstRef41                       3553      // float (4 Byte)
#define SPV_SPV_AsstReg42                       3557      // uint16_t
#define SPV_SPV_AsstRaw42                       3559      // uint16_t
#define SPV_SPV_AsstMeaning42                   3561      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType42                      3562      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType42Mask 0xE0
#define     SPV_SPV_AsstType42Shift 5
#define SPV_SPV_AsstScale42                     3562      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale42Mask 0x1C
#define     SPV_SPV_AsstScale42Shift 2
#define SPV_SPV_AsstOffset42                    3563      // int8_t
#define SPV_SPV_AsstRef42                       3565      // float (4 Byte)
#define SPV_SPV_AsstReg43                       3569      // uint16_t
#define SPV_SPV_AsstRaw43                       3571      // uint16_t
#define SPV_SPV_AsstMeaning43                   3573      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType43                      3574      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType43Mask 0xE0
#define     SPV_SPV_AsstType43Shift 5
#define SPV_SPV_AsstScale43                     3574      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale43Mask 0x1C
#define     SPV_SPV_AsstScale43Shift 2
#define SPV_SPV_AsstOffset43                    3575      // int8_t
#define SPV_SPV_AsstRef43                       3577      // float (4 Byte)
#define SPV_SPV_AsstReg44                       3581      // uint16_t
#define SPV_SPV_AsstRaw44                       3583      // uint16_t
#define SPV_SPV_AsstMeaning44                   3585      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType44                      3586      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType44Mask 0xE0
#define     SPV_SPV_AsstType44Shift 5
#define SPV_SPV_AsstScale44                     3586      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale44Mask 0x1C
#define     SPV_SPV_AsstScale44Shift 2
#define SPV_SPV_AsstOffset44                    3587      // int8_t
#define SPV_SPV_AsstRef44                       3589      // float (4 Byte)
#define SPV_SPV_AsstReg45                       3593      // uint16_t
#define SPV_SPV_AsstRaw45                       3595      // uint16_t
#define SPV_SPV_AsstMeaning45                   3597      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType45                      3598      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType45Mask 0xE0
#define     SPV_SPV_AsstType45Shift 5
#define SPV_SPV_AsstScale45                     3598      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale45Mask 0x1C
#define     SPV_SPV_AsstScale45Shift 2
#define SPV_SPV_AsstOffset45                    3599      // int8_t
#define SPV_SPV_AsstRef45                       3601      // float (4 Byte)
#define SPV_SPV_AsstReg46                       3605      // uint16_t
#define SPV_SPV_AsstRaw46                       3607      // uint16_t
#define SPV_SPV_AsstMeaning46                   3609      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType46                      3610      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType46Mask 0xE0
#define     SPV_SPV_AsstType46Shift 5
#define SPV_SPV_AsstScale46                     3610      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale46Mask 0x1C
#define     SPV_SPV_AsstScale46Shift 2
#define SPV_SPV_AsstOffset46                    3611      // int8_t
#define SPV_SPV_AsstRef46                       3613      // float (4 Byte)
#define SPV_SPV_AsstReg47                       3617      // uint16_t
#define SPV_SPV_AsstRaw47                       3619      // uint16_t
#define SPV_SPV_AsstMeaning47                   3621      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType47                      3622      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType47Mask 0xE0
#define     SPV_SPV_AsstType47Shift 5
#define SPV_SPV_AsstScale47                     3622      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale47Mask 0x1C
#define     SPV_SPV_AsstScale47Shift 2
#define SPV_SPV_AsstOffset47                    3623      // int8_t
#define SPV_SPV_AsstRef47                       3625      // float (4 Byte)
#define SPV_SPV_AsstReg48                       3629      // uint16_t
#define SPV_SPV_AsstRaw48                       3631      // uint16_t
#define SPV_SPV_AsstMeaning48                   3633      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType48                      3634      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType48Mask 0xE0
#define     SPV_SPV_AsstType48Shift 5
#define SPV_SPV_AsstScale48                     3634      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale48Mask 0x1C
#define     SPV_SPV_AsstScale48Shift 2
#define SPV_SPV_AsstOffset48                    3635      // int8_t
#define SPV_SPV_AsstRef48                       3637      // float (4 Byte)
#define SPV_SPV_AsstReg49                       3641      // uint16_t
#define SPV_SPV_AsstRaw49                       3643      // uint16_t
#define SPV_SPV_AsstMeaning49                   3645      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType49                      3646      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType49Mask 0xE0
#define     SPV_SPV_AsstType49Shift 5
#define SPV_SPV_AsstScale49                     3646      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale49Mask 0x1C
#define     SPV_SPV_AsstScale49Shift 2
#define SPV_SPV_AsstOffset49                    3647      // int8_t
#define SPV_SPV_AsstRef49                       3649      // float (4 Byte)
#define SPV_SPV_AsstReg50                       3653      // uint16_t
#define SPV_SPV_AsstRaw50                       3655      // uint16_t
#define SPV_SPV_AsstMeaning50                   3657      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType50                      3658      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType50Mask 0xE0
#define     SPV_SPV_AsstType50Shift 5
#define SPV_SPV_AsstScale50                     3658      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale50Mask 0x1C
#define     SPV_SPV_AsstScale50Shift 2
#define SPV_SPV_AsstOffset50                    3659      // int8_t
#define SPV_SPV_AsstRef50                       3661      // float (4 Byte)
#define SPV_SPV_AsstReg51                       3665      // uint16_t
#define SPV_SPV_AsstRaw51                       3667      // uint16_t
#define SPV_SPV_AsstMeaning51                   3669      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType51                      3670      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType51Mask 0xE0
#define     SPV_SPV_AsstType51Shift 5
#define SPV_SPV_AsstScale51                     3670      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale51Mask 0x1C
#define     SPV_SPV_AsstScale51Shift 2
#define SPV_SPV_AsstOffset51                    3671      // int8_t
#define SPV_SPV_AsstRef51                       3673      // float (4 Byte)
#define SPV_SPV_AsstReg52                       3677      // uint16_t
#define SPV_SPV_AsstRaw52                       3679      // uint16_t
#define SPV_SPV_AsstMeaning52                   3681      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType52                      3682      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType52Mask 0xE0
#define     SPV_SPV_AsstType52Shift 5
#define SPV_SPV_AsstScale52                     3682      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale52Mask 0x1C
#define     SPV_SPV_AsstScale52Shift 2
#define SPV_SPV_AsstOffset52                    3683      // int8_t
#define SPV_SPV_AsstRef52                       3685      // float (4 Byte)
#define SPV_SPV_AsstReg53                       3689      // uint16_t
#define SPV_SPV_AsstRaw53                       3691      // uint16_t
#define SPV_SPV_AsstMeaning53                   3693      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType53                      3694      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType53Mask 0xE0
#define     SPV_SPV_AsstType53Shift 5
#define SPV_SPV_AsstScale53                     3694      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale53Mask 0x1C
#define     SPV_SPV_AsstScale53Shift 2
#define SPV_SPV_AsstOffset53                    3695      // int8_t
#define SPV_SPV_AsstRef53                       3697      // float (4 Byte)
#define SPV_SPV_AsstReg54                       3701      // uint16_t
#define SPV_SPV_AsstRaw54                       3703      // uint16_t
#define SPV_SPV_AsstMeaning54                   3705      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType54                      3706      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType54Mask 0xE0
#define     SPV_SPV_AsstType54Shift 5
#define SPV_SPV_AsstScale54                     3706      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale54Mask 0x1C
#define     SPV_SPV_AsstScale54Shift 2
#define SPV_SPV_AsstOffset54                    3707      // int8_t
#define SPV_SPV_AsstRef54                       3709      // float (4 Byte)
#define SPV_SPV_AsstReg55                       3713      // uint16_t
#define SPV_SPV_AsstRaw55                       3715      // uint16_t
#define SPV_SPV_AsstMeaning55                   3717      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType55                      3718      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType55Mask 0xE0
#define     SPV_SPV_AsstType55Shift 5
#define SPV_SPV_AsstScale55                     3718      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale55Mask 0x1C
#define     SPV_SPV_AsstScale55Shift 2
#define SPV_SPV_AsstOffset55                    3719      // int8_t
#define SPV_SPV_AsstRef55                       3721      // float (4 Byte)
#define SPV_SPV_AsstReg56                       3725      // uint16_t
#define SPV_SPV_AsstRaw56                       3727      // uint16_t
#define SPV_SPV_AsstMeaning56                   3729      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType56                      3730      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType56Mask 0xE0
#define     SPV_SPV_AsstType56Shift 5
#define SPV_SPV_AsstScale56                     3730      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale56Mask 0x1C
#define     SPV_SPV_AsstScale56Shift 2
#define SPV_SPV_AsstOffset56                    3731      // int8_t
#define SPV_SPV_AsstRef56                       3733      // float (4 Byte)
#define SPV_SPV_AsstReg57                       3737      // uint16_t
#define SPV_SPV_AsstRaw57                       3739      // uint16_t
#define SPV_SPV_AsstMeaning57                   3741      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType57                      3742      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType57Mask 0xE0
#define     SPV_SPV_AsstType57Shift 5
#define SPV_SPV_AsstScale57                     3742      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale57Mask 0x1C
#define     SPV_SPV_AsstScale57Shift 2
#define SPV_SPV_AsstOffset57                    3743      // int8_t
#define SPV_SPV_AsstRef57                       3745      // float (4 Byte)
#define SPV_SPV_AsstReg58                       3749      // uint16_t
#define SPV_SPV_AsstRaw58                       3751      // uint16_t
#define SPV_SPV_AsstMeaning58                   3753      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType58                      3754      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType58Mask 0xE0
#define     SPV_SPV_AsstType58Shift 5
#define SPV_SPV_AsstScale58                     3754      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale58Mask 0x1C
#define     SPV_SPV_AsstScale58Shift 2
#define SPV_SPV_AsstOffset58                    3755      // int8_t
#define SPV_SPV_AsstRef58                       3757      // float (4 Byte)
#define SPV_SPV_AsstReg59                       3761      // uint16_t
#define SPV_SPV_AsstRaw59                       3763      // uint16_t
#define SPV_SPV_AsstMeaning59                   3765      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType59                      3766      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType59Mask 0xE0
#define     SPV_SPV_AsstType59Shift 5
#define SPV_SPV_AsstScale59                     3766      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale59Mask 0x1C
#define     SPV_SPV_AsstScale59Shift 2
#define SPV_SPV_AsstOffset59                    3767      // int8_t
#define SPV_SPV_AsstRef59                       3769      // float (4 Byte)
#define SPV_SPV_AsstReg60                       3773      // uint16_t
#define SPV_SPV_AsstRaw60                       3775      // uint16_t
#define SPV_SPV_AsstMeaning60                   3777      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType60                      3778      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType60Mask 0xE0
#define     SPV_SPV_AsstType60Shift 5
#define SPV_SPV_AsstScale60                     3778      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale60Mask 0x1C
#define     SPV_SPV_AsstScale60Shift 2
#define SPV_SPV_AsstOffset60                    3779      // int8_t
#define SPV_SPV_AsstRef60                       3781      // float (4 Byte)
#define SPV_SPV_AsstReg61                       3785      // uint16_t
#define SPV_SPV_AsstRaw61                       3787      // uint16_t
#define SPV_SPV_AsstMeaning61                   3789      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType61                      3790      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType61Mask 0xE0
#define     SPV_SPV_AsstType61Shift 5
#define SPV_SPV_AsstScale61                     3790      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale61Mask 0x1C
#define     SPV_SPV_AsstScale61Shift 2
#define SPV_SPV_AsstOffset61                    3791      // int8_t
#define SPV_SPV_AsstRef61                       3793      // float (4 Byte)
#define SPV_SPV_AsstReg62                       3797      // uint16_t
#define SPV_SPV_AsstRaw62                       3799      // uint16_t
#define SPV_SPV_AsstMeaning62                   3801      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType62                      3802      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType62Mask 0xE0
#define     SPV_SPV_AsstType62Shift 5
#define SPV_SPV_AsstScale62                     3802      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale62Mask 0x1C
#define     SPV_SPV_AsstScale62Shift 2
#define SPV_SPV_AsstOffset62                    3803      // int8_t
#define SPV_SPV_AsstRef62                       3805      // float (4 Byte)
#define SPV_SPV_AsstReg63                       3809      // uint16_t
#define SPV_SPV_AsstRaw63                       3811      // uint16_t
#define SPV_SPV_AsstMeaning63                   3813      // 8 Bits, Bit 7-0
#define SPV_SPV_AsstType63                      3814      // 3 Bits, Bit 7-5
#define     SPV_SPV_AsstType63Mask 0xE0
#define     SPV_SPV_AsstType63Shift 5
#define SPV_SPV_AsstScale63                     3814      // 3 Bits, Bit 4-2
#define     SPV_SPV_AsstScale63Mask 0x1C
#define     SPV_SPV_AsstScale63Shift 2
#define SPV_SPV_AsstOffset63                    3815      // int8_t
#define SPV_SPV_AsstRef63                       3817      // float (4 Byte)

// IP-Adresse
#define ParamSPV_SPV_AsstIp                          (knx.paramData(SPV_SPV_AsstIp))
#define ParamSPV_SPV_AsstIpStr                       (knx.paramString(SPV_SPV_AsstIp, SPV_SPV_AsstIpLength))
// Port
#define ParamSPV_SPV_AsstPort                        (knx.paramWord(SPV_SPV_AsstPort))
// Modbus-Slave-ID
#define ParamSPV_SPV_AsstSlaveId                     (knx.paramByte(SPV_SPV_AsstSlaveId))
// ab Register
#define ParamSPV_SPV_AsstStartReg                    (knx.paramWord(SPV_SPV_AsstStartReg))
// Anzahl Register
#define ParamSPV_SPV_AsstReadCount                   (knx.paramByte(SPV_SPV_AsstReadCount))
// erkannter Transport
#define ParamSPV_SPV_AsstTransport                   (knx.paramByte(SPV_SPV_AsstTransport))
// Zielgerät
#define ParamSPV_SPV_AsstTargetChannel               (knx.paramByte(SPV_SPV_AsstTargetChannel))
// gelesene Zeilen
#define ParamSPV_SPV_AsstRowCount                    (knx.paramByte(SPV_SPV_AsstRowCount))
// Seriennummer
#define ParamSPV_SPV_AsstSerial                      (knx.paramData(SPV_SPV_AsstSerial))
#define ParamSPV_SPV_AsstSerialStr                   (knx.paramString(SPV_SPV_AsstSerial, SPV_SPV_AsstSerialLength))
// Ergebnis
#define ParamSPV_SPV_AsstResultText                  (knx.paramData(SPV_SPV_AsstResultText))
#define ParamSPV_SPV_AsstResultTextStr               (knx.paramString(SPV_SPV_AsstResultText, SPV_SPV_AsstResultTextLength))
// Register
#define ParamSPV_SPV_AsstReg00                       (knx.paramWord(SPV_SPV_AsstReg00))
// Rohwert
#define ParamSPV_SPV_AsstRaw00                       (knx.paramWord(SPV_SPV_AsstRaw00))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning00                   (knx.paramByte(SPV_SPV_AsstMeaning00))
// Datentyp
#define ParamSPV_SPV_AsstType00                      ((knx.paramByte(SPV_SPV_AsstType00) & SPV_SPV_AsstType00Mask) >> SPV_SPV_AsstType00Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale00                     ((knx.paramByte(SPV_SPV_AsstScale00) & SPV_SPV_AsstScale00Mask) >> SPV_SPV_AsstScale00Shift)
// Offset
#define ParamSPV_SPV_AsstOffset00                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset00))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef00                       (knx.paramFloat(SPV_SPV_AsstRef00, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg01                       (knx.paramWord(SPV_SPV_AsstReg01))
// Rohwert
#define ParamSPV_SPV_AsstRaw01                       (knx.paramWord(SPV_SPV_AsstRaw01))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning01                   (knx.paramByte(SPV_SPV_AsstMeaning01))
// Datentyp
#define ParamSPV_SPV_AsstType01                      ((knx.paramByte(SPV_SPV_AsstType01) & SPV_SPV_AsstType01Mask) >> SPV_SPV_AsstType01Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale01                     ((knx.paramByte(SPV_SPV_AsstScale01) & SPV_SPV_AsstScale01Mask) >> SPV_SPV_AsstScale01Shift)
// Offset
#define ParamSPV_SPV_AsstOffset01                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset01))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef01                       (knx.paramFloat(SPV_SPV_AsstRef01, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg02                       (knx.paramWord(SPV_SPV_AsstReg02))
// Rohwert
#define ParamSPV_SPV_AsstRaw02                       (knx.paramWord(SPV_SPV_AsstRaw02))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning02                   (knx.paramByte(SPV_SPV_AsstMeaning02))
// Datentyp
#define ParamSPV_SPV_AsstType02                      ((knx.paramByte(SPV_SPV_AsstType02) & SPV_SPV_AsstType02Mask) >> SPV_SPV_AsstType02Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale02                     ((knx.paramByte(SPV_SPV_AsstScale02) & SPV_SPV_AsstScale02Mask) >> SPV_SPV_AsstScale02Shift)
// Offset
#define ParamSPV_SPV_AsstOffset02                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset02))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef02                       (knx.paramFloat(SPV_SPV_AsstRef02, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg03                       (knx.paramWord(SPV_SPV_AsstReg03))
// Rohwert
#define ParamSPV_SPV_AsstRaw03                       (knx.paramWord(SPV_SPV_AsstRaw03))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning03                   (knx.paramByte(SPV_SPV_AsstMeaning03))
// Datentyp
#define ParamSPV_SPV_AsstType03                      ((knx.paramByte(SPV_SPV_AsstType03) & SPV_SPV_AsstType03Mask) >> SPV_SPV_AsstType03Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale03                     ((knx.paramByte(SPV_SPV_AsstScale03) & SPV_SPV_AsstScale03Mask) >> SPV_SPV_AsstScale03Shift)
// Offset
#define ParamSPV_SPV_AsstOffset03                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset03))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef03                       (knx.paramFloat(SPV_SPV_AsstRef03, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg04                       (knx.paramWord(SPV_SPV_AsstReg04))
// Rohwert
#define ParamSPV_SPV_AsstRaw04                       (knx.paramWord(SPV_SPV_AsstRaw04))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning04                   (knx.paramByte(SPV_SPV_AsstMeaning04))
// Datentyp
#define ParamSPV_SPV_AsstType04                      ((knx.paramByte(SPV_SPV_AsstType04) & SPV_SPV_AsstType04Mask) >> SPV_SPV_AsstType04Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale04                     ((knx.paramByte(SPV_SPV_AsstScale04) & SPV_SPV_AsstScale04Mask) >> SPV_SPV_AsstScale04Shift)
// Offset
#define ParamSPV_SPV_AsstOffset04                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset04))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef04                       (knx.paramFloat(SPV_SPV_AsstRef04, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg05                       (knx.paramWord(SPV_SPV_AsstReg05))
// Rohwert
#define ParamSPV_SPV_AsstRaw05                       (knx.paramWord(SPV_SPV_AsstRaw05))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning05                   (knx.paramByte(SPV_SPV_AsstMeaning05))
// Datentyp
#define ParamSPV_SPV_AsstType05                      ((knx.paramByte(SPV_SPV_AsstType05) & SPV_SPV_AsstType05Mask) >> SPV_SPV_AsstType05Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale05                     ((knx.paramByte(SPV_SPV_AsstScale05) & SPV_SPV_AsstScale05Mask) >> SPV_SPV_AsstScale05Shift)
// Offset
#define ParamSPV_SPV_AsstOffset05                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset05))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef05                       (knx.paramFloat(SPV_SPV_AsstRef05, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg06                       (knx.paramWord(SPV_SPV_AsstReg06))
// Rohwert
#define ParamSPV_SPV_AsstRaw06                       (knx.paramWord(SPV_SPV_AsstRaw06))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning06                   (knx.paramByte(SPV_SPV_AsstMeaning06))
// Datentyp
#define ParamSPV_SPV_AsstType06                      ((knx.paramByte(SPV_SPV_AsstType06) & SPV_SPV_AsstType06Mask) >> SPV_SPV_AsstType06Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale06                     ((knx.paramByte(SPV_SPV_AsstScale06) & SPV_SPV_AsstScale06Mask) >> SPV_SPV_AsstScale06Shift)
// Offset
#define ParamSPV_SPV_AsstOffset06                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset06))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef06                       (knx.paramFloat(SPV_SPV_AsstRef06, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg07                       (knx.paramWord(SPV_SPV_AsstReg07))
// Rohwert
#define ParamSPV_SPV_AsstRaw07                       (knx.paramWord(SPV_SPV_AsstRaw07))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning07                   (knx.paramByte(SPV_SPV_AsstMeaning07))
// Datentyp
#define ParamSPV_SPV_AsstType07                      ((knx.paramByte(SPV_SPV_AsstType07) & SPV_SPV_AsstType07Mask) >> SPV_SPV_AsstType07Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale07                     ((knx.paramByte(SPV_SPV_AsstScale07) & SPV_SPV_AsstScale07Mask) >> SPV_SPV_AsstScale07Shift)
// Offset
#define ParamSPV_SPV_AsstOffset07                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset07))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef07                       (knx.paramFloat(SPV_SPV_AsstRef07, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg08                       (knx.paramWord(SPV_SPV_AsstReg08))
// Rohwert
#define ParamSPV_SPV_AsstRaw08                       (knx.paramWord(SPV_SPV_AsstRaw08))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning08                   (knx.paramByte(SPV_SPV_AsstMeaning08))
// Datentyp
#define ParamSPV_SPV_AsstType08                      ((knx.paramByte(SPV_SPV_AsstType08) & SPV_SPV_AsstType08Mask) >> SPV_SPV_AsstType08Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale08                     ((knx.paramByte(SPV_SPV_AsstScale08) & SPV_SPV_AsstScale08Mask) >> SPV_SPV_AsstScale08Shift)
// Offset
#define ParamSPV_SPV_AsstOffset08                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset08))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef08                       (knx.paramFloat(SPV_SPV_AsstRef08, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg09                       (knx.paramWord(SPV_SPV_AsstReg09))
// Rohwert
#define ParamSPV_SPV_AsstRaw09                       (knx.paramWord(SPV_SPV_AsstRaw09))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning09                   (knx.paramByte(SPV_SPV_AsstMeaning09))
// Datentyp
#define ParamSPV_SPV_AsstType09                      ((knx.paramByte(SPV_SPV_AsstType09) & SPV_SPV_AsstType09Mask) >> SPV_SPV_AsstType09Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale09                     ((knx.paramByte(SPV_SPV_AsstScale09) & SPV_SPV_AsstScale09Mask) >> SPV_SPV_AsstScale09Shift)
// Offset
#define ParamSPV_SPV_AsstOffset09                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset09))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef09                       (knx.paramFloat(SPV_SPV_AsstRef09, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg10                       (knx.paramWord(SPV_SPV_AsstReg10))
// Rohwert
#define ParamSPV_SPV_AsstRaw10                       (knx.paramWord(SPV_SPV_AsstRaw10))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning10                   (knx.paramByte(SPV_SPV_AsstMeaning10))
// Datentyp
#define ParamSPV_SPV_AsstType10                      ((knx.paramByte(SPV_SPV_AsstType10) & SPV_SPV_AsstType10Mask) >> SPV_SPV_AsstType10Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale10                     ((knx.paramByte(SPV_SPV_AsstScale10) & SPV_SPV_AsstScale10Mask) >> SPV_SPV_AsstScale10Shift)
// Offset
#define ParamSPV_SPV_AsstOffset10                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset10))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef10                       (knx.paramFloat(SPV_SPV_AsstRef10, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg11                       (knx.paramWord(SPV_SPV_AsstReg11))
// Rohwert
#define ParamSPV_SPV_AsstRaw11                       (knx.paramWord(SPV_SPV_AsstRaw11))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning11                   (knx.paramByte(SPV_SPV_AsstMeaning11))
// Datentyp
#define ParamSPV_SPV_AsstType11                      ((knx.paramByte(SPV_SPV_AsstType11) & SPV_SPV_AsstType11Mask) >> SPV_SPV_AsstType11Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale11                     ((knx.paramByte(SPV_SPV_AsstScale11) & SPV_SPV_AsstScale11Mask) >> SPV_SPV_AsstScale11Shift)
// Offset
#define ParamSPV_SPV_AsstOffset11                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset11))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef11                       (knx.paramFloat(SPV_SPV_AsstRef11, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg12                       (knx.paramWord(SPV_SPV_AsstReg12))
// Rohwert
#define ParamSPV_SPV_AsstRaw12                       (knx.paramWord(SPV_SPV_AsstRaw12))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning12                   (knx.paramByte(SPV_SPV_AsstMeaning12))
// Datentyp
#define ParamSPV_SPV_AsstType12                      ((knx.paramByte(SPV_SPV_AsstType12) & SPV_SPV_AsstType12Mask) >> SPV_SPV_AsstType12Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale12                     ((knx.paramByte(SPV_SPV_AsstScale12) & SPV_SPV_AsstScale12Mask) >> SPV_SPV_AsstScale12Shift)
// Offset
#define ParamSPV_SPV_AsstOffset12                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset12))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef12                       (knx.paramFloat(SPV_SPV_AsstRef12, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg13                       (knx.paramWord(SPV_SPV_AsstReg13))
// Rohwert
#define ParamSPV_SPV_AsstRaw13                       (knx.paramWord(SPV_SPV_AsstRaw13))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning13                   (knx.paramByte(SPV_SPV_AsstMeaning13))
// Datentyp
#define ParamSPV_SPV_AsstType13                      ((knx.paramByte(SPV_SPV_AsstType13) & SPV_SPV_AsstType13Mask) >> SPV_SPV_AsstType13Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale13                     ((knx.paramByte(SPV_SPV_AsstScale13) & SPV_SPV_AsstScale13Mask) >> SPV_SPV_AsstScale13Shift)
// Offset
#define ParamSPV_SPV_AsstOffset13                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset13))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef13                       (knx.paramFloat(SPV_SPV_AsstRef13, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg14                       (knx.paramWord(SPV_SPV_AsstReg14))
// Rohwert
#define ParamSPV_SPV_AsstRaw14                       (knx.paramWord(SPV_SPV_AsstRaw14))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning14                   (knx.paramByte(SPV_SPV_AsstMeaning14))
// Datentyp
#define ParamSPV_SPV_AsstType14                      ((knx.paramByte(SPV_SPV_AsstType14) & SPV_SPV_AsstType14Mask) >> SPV_SPV_AsstType14Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale14                     ((knx.paramByte(SPV_SPV_AsstScale14) & SPV_SPV_AsstScale14Mask) >> SPV_SPV_AsstScale14Shift)
// Offset
#define ParamSPV_SPV_AsstOffset14                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset14))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef14                       (knx.paramFloat(SPV_SPV_AsstRef14, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg15                       (knx.paramWord(SPV_SPV_AsstReg15))
// Rohwert
#define ParamSPV_SPV_AsstRaw15                       (knx.paramWord(SPV_SPV_AsstRaw15))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning15                   (knx.paramByte(SPV_SPV_AsstMeaning15))
// Datentyp
#define ParamSPV_SPV_AsstType15                      ((knx.paramByte(SPV_SPV_AsstType15) & SPV_SPV_AsstType15Mask) >> SPV_SPV_AsstType15Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale15                     ((knx.paramByte(SPV_SPV_AsstScale15) & SPV_SPV_AsstScale15Mask) >> SPV_SPV_AsstScale15Shift)
// Offset
#define ParamSPV_SPV_AsstOffset15                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset15))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef15                       (knx.paramFloat(SPV_SPV_AsstRef15, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg16                       (knx.paramWord(SPV_SPV_AsstReg16))
// Rohwert
#define ParamSPV_SPV_AsstRaw16                       (knx.paramWord(SPV_SPV_AsstRaw16))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning16                   (knx.paramByte(SPV_SPV_AsstMeaning16))
// Datentyp
#define ParamSPV_SPV_AsstType16                      ((knx.paramByte(SPV_SPV_AsstType16) & SPV_SPV_AsstType16Mask) >> SPV_SPV_AsstType16Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale16                     ((knx.paramByte(SPV_SPV_AsstScale16) & SPV_SPV_AsstScale16Mask) >> SPV_SPV_AsstScale16Shift)
// Offset
#define ParamSPV_SPV_AsstOffset16                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset16))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef16                       (knx.paramFloat(SPV_SPV_AsstRef16, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg17                       (knx.paramWord(SPV_SPV_AsstReg17))
// Rohwert
#define ParamSPV_SPV_AsstRaw17                       (knx.paramWord(SPV_SPV_AsstRaw17))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning17                   (knx.paramByte(SPV_SPV_AsstMeaning17))
// Datentyp
#define ParamSPV_SPV_AsstType17                      ((knx.paramByte(SPV_SPV_AsstType17) & SPV_SPV_AsstType17Mask) >> SPV_SPV_AsstType17Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale17                     ((knx.paramByte(SPV_SPV_AsstScale17) & SPV_SPV_AsstScale17Mask) >> SPV_SPV_AsstScale17Shift)
// Offset
#define ParamSPV_SPV_AsstOffset17                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset17))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef17                       (knx.paramFloat(SPV_SPV_AsstRef17, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg18                       (knx.paramWord(SPV_SPV_AsstReg18))
// Rohwert
#define ParamSPV_SPV_AsstRaw18                       (knx.paramWord(SPV_SPV_AsstRaw18))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning18                   (knx.paramByte(SPV_SPV_AsstMeaning18))
// Datentyp
#define ParamSPV_SPV_AsstType18                      ((knx.paramByte(SPV_SPV_AsstType18) & SPV_SPV_AsstType18Mask) >> SPV_SPV_AsstType18Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale18                     ((knx.paramByte(SPV_SPV_AsstScale18) & SPV_SPV_AsstScale18Mask) >> SPV_SPV_AsstScale18Shift)
// Offset
#define ParamSPV_SPV_AsstOffset18                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset18))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef18                       (knx.paramFloat(SPV_SPV_AsstRef18, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg19                       (knx.paramWord(SPV_SPV_AsstReg19))
// Rohwert
#define ParamSPV_SPV_AsstRaw19                       (knx.paramWord(SPV_SPV_AsstRaw19))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning19                   (knx.paramByte(SPV_SPV_AsstMeaning19))
// Datentyp
#define ParamSPV_SPV_AsstType19                      ((knx.paramByte(SPV_SPV_AsstType19) & SPV_SPV_AsstType19Mask) >> SPV_SPV_AsstType19Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale19                     ((knx.paramByte(SPV_SPV_AsstScale19) & SPV_SPV_AsstScale19Mask) >> SPV_SPV_AsstScale19Shift)
// Offset
#define ParamSPV_SPV_AsstOffset19                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset19))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef19                       (knx.paramFloat(SPV_SPV_AsstRef19, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg20                       (knx.paramWord(SPV_SPV_AsstReg20))
// Rohwert
#define ParamSPV_SPV_AsstRaw20                       (knx.paramWord(SPV_SPV_AsstRaw20))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning20                   (knx.paramByte(SPV_SPV_AsstMeaning20))
// Datentyp
#define ParamSPV_SPV_AsstType20                      ((knx.paramByte(SPV_SPV_AsstType20) & SPV_SPV_AsstType20Mask) >> SPV_SPV_AsstType20Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale20                     ((knx.paramByte(SPV_SPV_AsstScale20) & SPV_SPV_AsstScale20Mask) >> SPV_SPV_AsstScale20Shift)
// Offset
#define ParamSPV_SPV_AsstOffset20                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset20))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef20                       (knx.paramFloat(SPV_SPV_AsstRef20, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg21                       (knx.paramWord(SPV_SPV_AsstReg21))
// Rohwert
#define ParamSPV_SPV_AsstRaw21                       (knx.paramWord(SPV_SPV_AsstRaw21))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning21                   (knx.paramByte(SPV_SPV_AsstMeaning21))
// Datentyp
#define ParamSPV_SPV_AsstType21                      ((knx.paramByte(SPV_SPV_AsstType21) & SPV_SPV_AsstType21Mask) >> SPV_SPV_AsstType21Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale21                     ((knx.paramByte(SPV_SPV_AsstScale21) & SPV_SPV_AsstScale21Mask) >> SPV_SPV_AsstScale21Shift)
// Offset
#define ParamSPV_SPV_AsstOffset21                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset21))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef21                       (knx.paramFloat(SPV_SPV_AsstRef21, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg22                       (knx.paramWord(SPV_SPV_AsstReg22))
// Rohwert
#define ParamSPV_SPV_AsstRaw22                       (knx.paramWord(SPV_SPV_AsstRaw22))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning22                   (knx.paramByte(SPV_SPV_AsstMeaning22))
// Datentyp
#define ParamSPV_SPV_AsstType22                      ((knx.paramByte(SPV_SPV_AsstType22) & SPV_SPV_AsstType22Mask) >> SPV_SPV_AsstType22Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale22                     ((knx.paramByte(SPV_SPV_AsstScale22) & SPV_SPV_AsstScale22Mask) >> SPV_SPV_AsstScale22Shift)
// Offset
#define ParamSPV_SPV_AsstOffset22                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset22))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef22                       (knx.paramFloat(SPV_SPV_AsstRef22, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg23                       (knx.paramWord(SPV_SPV_AsstReg23))
// Rohwert
#define ParamSPV_SPV_AsstRaw23                       (knx.paramWord(SPV_SPV_AsstRaw23))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning23                   (knx.paramByte(SPV_SPV_AsstMeaning23))
// Datentyp
#define ParamSPV_SPV_AsstType23                      ((knx.paramByte(SPV_SPV_AsstType23) & SPV_SPV_AsstType23Mask) >> SPV_SPV_AsstType23Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale23                     ((knx.paramByte(SPV_SPV_AsstScale23) & SPV_SPV_AsstScale23Mask) >> SPV_SPV_AsstScale23Shift)
// Offset
#define ParamSPV_SPV_AsstOffset23                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset23))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef23                       (knx.paramFloat(SPV_SPV_AsstRef23, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg24                       (knx.paramWord(SPV_SPV_AsstReg24))
// Rohwert
#define ParamSPV_SPV_AsstRaw24                       (knx.paramWord(SPV_SPV_AsstRaw24))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning24                   (knx.paramByte(SPV_SPV_AsstMeaning24))
// Datentyp
#define ParamSPV_SPV_AsstType24                      ((knx.paramByte(SPV_SPV_AsstType24) & SPV_SPV_AsstType24Mask) >> SPV_SPV_AsstType24Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale24                     ((knx.paramByte(SPV_SPV_AsstScale24) & SPV_SPV_AsstScale24Mask) >> SPV_SPV_AsstScale24Shift)
// Offset
#define ParamSPV_SPV_AsstOffset24                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset24))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef24                       (knx.paramFloat(SPV_SPV_AsstRef24, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg25                       (knx.paramWord(SPV_SPV_AsstReg25))
// Rohwert
#define ParamSPV_SPV_AsstRaw25                       (knx.paramWord(SPV_SPV_AsstRaw25))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning25                   (knx.paramByte(SPV_SPV_AsstMeaning25))
// Datentyp
#define ParamSPV_SPV_AsstType25                      ((knx.paramByte(SPV_SPV_AsstType25) & SPV_SPV_AsstType25Mask) >> SPV_SPV_AsstType25Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale25                     ((knx.paramByte(SPV_SPV_AsstScale25) & SPV_SPV_AsstScale25Mask) >> SPV_SPV_AsstScale25Shift)
// Offset
#define ParamSPV_SPV_AsstOffset25                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset25))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef25                       (knx.paramFloat(SPV_SPV_AsstRef25, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg26                       (knx.paramWord(SPV_SPV_AsstReg26))
// Rohwert
#define ParamSPV_SPV_AsstRaw26                       (knx.paramWord(SPV_SPV_AsstRaw26))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning26                   (knx.paramByte(SPV_SPV_AsstMeaning26))
// Datentyp
#define ParamSPV_SPV_AsstType26                      ((knx.paramByte(SPV_SPV_AsstType26) & SPV_SPV_AsstType26Mask) >> SPV_SPV_AsstType26Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale26                     ((knx.paramByte(SPV_SPV_AsstScale26) & SPV_SPV_AsstScale26Mask) >> SPV_SPV_AsstScale26Shift)
// Offset
#define ParamSPV_SPV_AsstOffset26                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset26))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef26                       (knx.paramFloat(SPV_SPV_AsstRef26, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg27                       (knx.paramWord(SPV_SPV_AsstReg27))
// Rohwert
#define ParamSPV_SPV_AsstRaw27                       (knx.paramWord(SPV_SPV_AsstRaw27))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning27                   (knx.paramByte(SPV_SPV_AsstMeaning27))
// Datentyp
#define ParamSPV_SPV_AsstType27                      ((knx.paramByte(SPV_SPV_AsstType27) & SPV_SPV_AsstType27Mask) >> SPV_SPV_AsstType27Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale27                     ((knx.paramByte(SPV_SPV_AsstScale27) & SPV_SPV_AsstScale27Mask) >> SPV_SPV_AsstScale27Shift)
// Offset
#define ParamSPV_SPV_AsstOffset27                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset27))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef27                       (knx.paramFloat(SPV_SPV_AsstRef27, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg28                       (knx.paramWord(SPV_SPV_AsstReg28))
// Rohwert
#define ParamSPV_SPV_AsstRaw28                       (knx.paramWord(SPV_SPV_AsstRaw28))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning28                   (knx.paramByte(SPV_SPV_AsstMeaning28))
// Datentyp
#define ParamSPV_SPV_AsstType28                      ((knx.paramByte(SPV_SPV_AsstType28) & SPV_SPV_AsstType28Mask) >> SPV_SPV_AsstType28Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale28                     ((knx.paramByte(SPV_SPV_AsstScale28) & SPV_SPV_AsstScale28Mask) >> SPV_SPV_AsstScale28Shift)
// Offset
#define ParamSPV_SPV_AsstOffset28                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset28))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef28                       (knx.paramFloat(SPV_SPV_AsstRef28, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg29                       (knx.paramWord(SPV_SPV_AsstReg29))
// Rohwert
#define ParamSPV_SPV_AsstRaw29                       (knx.paramWord(SPV_SPV_AsstRaw29))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning29                   (knx.paramByte(SPV_SPV_AsstMeaning29))
// Datentyp
#define ParamSPV_SPV_AsstType29                      ((knx.paramByte(SPV_SPV_AsstType29) & SPV_SPV_AsstType29Mask) >> SPV_SPV_AsstType29Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale29                     ((knx.paramByte(SPV_SPV_AsstScale29) & SPV_SPV_AsstScale29Mask) >> SPV_SPV_AsstScale29Shift)
// Offset
#define ParamSPV_SPV_AsstOffset29                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset29))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef29                       (knx.paramFloat(SPV_SPV_AsstRef29, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg30                       (knx.paramWord(SPV_SPV_AsstReg30))
// Rohwert
#define ParamSPV_SPV_AsstRaw30                       (knx.paramWord(SPV_SPV_AsstRaw30))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning30                   (knx.paramByte(SPV_SPV_AsstMeaning30))
// Datentyp
#define ParamSPV_SPV_AsstType30                      ((knx.paramByte(SPV_SPV_AsstType30) & SPV_SPV_AsstType30Mask) >> SPV_SPV_AsstType30Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale30                     ((knx.paramByte(SPV_SPV_AsstScale30) & SPV_SPV_AsstScale30Mask) >> SPV_SPV_AsstScale30Shift)
// Offset
#define ParamSPV_SPV_AsstOffset30                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset30))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef30                       (knx.paramFloat(SPV_SPV_AsstRef30, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg31                       (knx.paramWord(SPV_SPV_AsstReg31))
// Rohwert
#define ParamSPV_SPV_AsstRaw31                       (knx.paramWord(SPV_SPV_AsstRaw31))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning31                   (knx.paramByte(SPV_SPV_AsstMeaning31))
// Datentyp
#define ParamSPV_SPV_AsstType31                      ((knx.paramByte(SPV_SPV_AsstType31) & SPV_SPV_AsstType31Mask) >> SPV_SPV_AsstType31Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale31                     ((knx.paramByte(SPV_SPV_AsstScale31) & SPV_SPV_AsstScale31Mask) >> SPV_SPV_AsstScale31Shift)
// Offset
#define ParamSPV_SPV_AsstOffset31                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset31))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef31                       (knx.paramFloat(SPV_SPV_AsstRef31, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg32                       (knx.paramWord(SPV_SPV_AsstReg32))
// Rohwert
#define ParamSPV_SPV_AsstRaw32                       (knx.paramWord(SPV_SPV_AsstRaw32))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning32                   (knx.paramByte(SPV_SPV_AsstMeaning32))
// Datentyp
#define ParamSPV_SPV_AsstType32                      ((knx.paramByte(SPV_SPV_AsstType32) & SPV_SPV_AsstType32Mask) >> SPV_SPV_AsstType32Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale32                     ((knx.paramByte(SPV_SPV_AsstScale32) & SPV_SPV_AsstScale32Mask) >> SPV_SPV_AsstScale32Shift)
// Offset
#define ParamSPV_SPV_AsstOffset32                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset32))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef32                       (knx.paramFloat(SPV_SPV_AsstRef32, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg33                       (knx.paramWord(SPV_SPV_AsstReg33))
// Rohwert
#define ParamSPV_SPV_AsstRaw33                       (knx.paramWord(SPV_SPV_AsstRaw33))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning33                   (knx.paramByte(SPV_SPV_AsstMeaning33))
// Datentyp
#define ParamSPV_SPV_AsstType33                      ((knx.paramByte(SPV_SPV_AsstType33) & SPV_SPV_AsstType33Mask) >> SPV_SPV_AsstType33Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale33                     ((knx.paramByte(SPV_SPV_AsstScale33) & SPV_SPV_AsstScale33Mask) >> SPV_SPV_AsstScale33Shift)
// Offset
#define ParamSPV_SPV_AsstOffset33                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset33))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef33                       (knx.paramFloat(SPV_SPV_AsstRef33, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg34                       (knx.paramWord(SPV_SPV_AsstReg34))
// Rohwert
#define ParamSPV_SPV_AsstRaw34                       (knx.paramWord(SPV_SPV_AsstRaw34))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning34                   (knx.paramByte(SPV_SPV_AsstMeaning34))
// Datentyp
#define ParamSPV_SPV_AsstType34                      ((knx.paramByte(SPV_SPV_AsstType34) & SPV_SPV_AsstType34Mask) >> SPV_SPV_AsstType34Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale34                     ((knx.paramByte(SPV_SPV_AsstScale34) & SPV_SPV_AsstScale34Mask) >> SPV_SPV_AsstScale34Shift)
// Offset
#define ParamSPV_SPV_AsstOffset34                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset34))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef34                       (knx.paramFloat(SPV_SPV_AsstRef34, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg35                       (knx.paramWord(SPV_SPV_AsstReg35))
// Rohwert
#define ParamSPV_SPV_AsstRaw35                       (knx.paramWord(SPV_SPV_AsstRaw35))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning35                   (knx.paramByte(SPV_SPV_AsstMeaning35))
// Datentyp
#define ParamSPV_SPV_AsstType35                      ((knx.paramByte(SPV_SPV_AsstType35) & SPV_SPV_AsstType35Mask) >> SPV_SPV_AsstType35Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale35                     ((knx.paramByte(SPV_SPV_AsstScale35) & SPV_SPV_AsstScale35Mask) >> SPV_SPV_AsstScale35Shift)
// Offset
#define ParamSPV_SPV_AsstOffset35                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset35))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef35                       (knx.paramFloat(SPV_SPV_AsstRef35, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg36                       (knx.paramWord(SPV_SPV_AsstReg36))
// Rohwert
#define ParamSPV_SPV_AsstRaw36                       (knx.paramWord(SPV_SPV_AsstRaw36))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning36                   (knx.paramByte(SPV_SPV_AsstMeaning36))
// Datentyp
#define ParamSPV_SPV_AsstType36                      ((knx.paramByte(SPV_SPV_AsstType36) & SPV_SPV_AsstType36Mask) >> SPV_SPV_AsstType36Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale36                     ((knx.paramByte(SPV_SPV_AsstScale36) & SPV_SPV_AsstScale36Mask) >> SPV_SPV_AsstScale36Shift)
// Offset
#define ParamSPV_SPV_AsstOffset36                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset36))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef36                       (knx.paramFloat(SPV_SPV_AsstRef36, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg37                       (knx.paramWord(SPV_SPV_AsstReg37))
// Rohwert
#define ParamSPV_SPV_AsstRaw37                       (knx.paramWord(SPV_SPV_AsstRaw37))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning37                   (knx.paramByte(SPV_SPV_AsstMeaning37))
// Datentyp
#define ParamSPV_SPV_AsstType37                      ((knx.paramByte(SPV_SPV_AsstType37) & SPV_SPV_AsstType37Mask) >> SPV_SPV_AsstType37Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale37                     ((knx.paramByte(SPV_SPV_AsstScale37) & SPV_SPV_AsstScale37Mask) >> SPV_SPV_AsstScale37Shift)
// Offset
#define ParamSPV_SPV_AsstOffset37                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset37))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef37                       (knx.paramFloat(SPV_SPV_AsstRef37, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg38                       (knx.paramWord(SPV_SPV_AsstReg38))
// Rohwert
#define ParamSPV_SPV_AsstRaw38                       (knx.paramWord(SPV_SPV_AsstRaw38))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning38                   (knx.paramByte(SPV_SPV_AsstMeaning38))
// Datentyp
#define ParamSPV_SPV_AsstType38                      ((knx.paramByte(SPV_SPV_AsstType38) & SPV_SPV_AsstType38Mask) >> SPV_SPV_AsstType38Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale38                     ((knx.paramByte(SPV_SPV_AsstScale38) & SPV_SPV_AsstScale38Mask) >> SPV_SPV_AsstScale38Shift)
// Offset
#define ParamSPV_SPV_AsstOffset38                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset38))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef38                       (knx.paramFloat(SPV_SPV_AsstRef38, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg39                       (knx.paramWord(SPV_SPV_AsstReg39))
// Rohwert
#define ParamSPV_SPV_AsstRaw39                       (knx.paramWord(SPV_SPV_AsstRaw39))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning39                   (knx.paramByte(SPV_SPV_AsstMeaning39))
// Datentyp
#define ParamSPV_SPV_AsstType39                      ((knx.paramByte(SPV_SPV_AsstType39) & SPV_SPV_AsstType39Mask) >> SPV_SPV_AsstType39Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale39                     ((knx.paramByte(SPV_SPV_AsstScale39) & SPV_SPV_AsstScale39Mask) >> SPV_SPV_AsstScale39Shift)
// Offset
#define ParamSPV_SPV_AsstOffset39                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset39))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef39                       (knx.paramFloat(SPV_SPV_AsstRef39, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg40                       (knx.paramWord(SPV_SPV_AsstReg40))
// Rohwert
#define ParamSPV_SPV_AsstRaw40                       (knx.paramWord(SPV_SPV_AsstRaw40))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning40                   (knx.paramByte(SPV_SPV_AsstMeaning40))
// Datentyp
#define ParamSPV_SPV_AsstType40                      ((knx.paramByte(SPV_SPV_AsstType40) & SPV_SPV_AsstType40Mask) >> SPV_SPV_AsstType40Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale40                     ((knx.paramByte(SPV_SPV_AsstScale40) & SPV_SPV_AsstScale40Mask) >> SPV_SPV_AsstScale40Shift)
// Offset
#define ParamSPV_SPV_AsstOffset40                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset40))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef40                       (knx.paramFloat(SPV_SPV_AsstRef40, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg41                       (knx.paramWord(SPV_SPV_AsstReg41))
// Rohwert
#define ParamSPV_SPV_AsstRaw41                       (knx.paramWord(SPV_SPV_AsstRaw41))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning41                   (knx.paramByte(SPV_SPV_AsstMeaning41))
// Datentyp
#define ParamSPV_SPV_AsstType41                      ((knx.paramByte(SPV_SPV_AsstType41) & SPV_SPV_AsstType41Mask) >> SPV_SPV_AsstType41Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale41                     ((knx.paramByte(SPV_SPV_AsstScale41) & SPV_SPV_AsstScale41Mask) >> SPV_SPV_AsstScale41Shift)
// Offset
#define ParamSPV_SPV_AsstOffset41                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset41))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef41                       (knx.paramFloat(SPV_SPV_AsstRef41, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg42                       (knx.paramWord(SPV_SPV_AsstReg42))
// Rohwert
#define ParamSPV_SPV_AsstRaw42                       (knx.paramWord(SPV_SPV_AsstRaw42))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning42                   (knx.paramByte(SPV_SPV_AsstMeaning42))
// Datentyp
#define ParamSPV_SPV_AsstType42                      ((knx.paramByte(SPV_SPV_AsstType42) & SPV_SPV_AsstType42Mask) >> SPV_SPV_AsstType42Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale42                     ((knx.paramByte(SPV_SPV_AsstScale42) & SPV_SPV_AsstScale42Mask) >> SPV_SPV_AsstScale42Shift)
// Offset
#define ParamSPV_SPV_AsstOffset42                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset42))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef42                       (knx.paramFloat(SPV_SPV_AsstRef42, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg43                       (knx.paramWord(SPV_SPV_AsstReg43))
// Rohwert
#define ParamSPV_SPV_AsstRaw43                       (knx.paramWord(SPV_SPV_AsstRaw43))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning43                   (knx.paramByte(SPV_SPV_AsstMeaning43))
// Datentyp
#define ParamSPV_SPV_AsstType43                      ((knx.paramByte(SPV_SPV_AsstType43) & SPV_SPV_AsstType43Mask) >> SPV_SPV_AsstType43Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale43                     ((knx.paramByte(SPV_SPV_AsstScale43) & SPV_SPV_AsstScale43Mask) >> SPV_SPV_AsstScale43Shift)
// Offset
#define ParamSPV_SPV_AsstOffset43                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset43))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef43                       (knx.paramFloat(SPV_SPV_AsstRef43, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg44                       (knx.paramWord(SPV_SPV_AsstReg44))
// Rohwert
#define ParamSPV_SPV_AsstRaw44                       (knx.paramWord(SPV_SPV_AsstRaw44))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning44                   (knx.paramByte(SPV_SPV_AsstMeaning44))
// Datentyp
#define ParamSPV_SPV_AsstType44                      ((knx.paramByte(SPV_SPV_AsstType44) & SPV_SPV_AsstType44Mask) >> SPV_SPV_AsstType44Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale44                     ((knx.paramByte(SPV_SPV_AsstScale44) & SPV_SPV_AsstScale44Mask) >> SPV_SPV_AsstScale44Shift)
// Offset
#define ParamSPV_SPV_AsstOffset44                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset44))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef44                       (knx.paramFloat(SPV_SPV_AsstRef44, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg45                       (knx.paramWord(SPV_SPV_AsstReg45))
// Rohwert
#define ParamSPV_SPV_AsstRaw45                       (knx.paramWord(SPV_SPV_AsstRaw45))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning45                   (knx.paramByte(SPV_SPV_AsstMeaning45))
// Datentyp
#define ParamSPV_SPV_AsstType45                      ((knx.paramByte(SPV_SPV_AsstType45) & SPV_SPV_AsstType45Mask) >> SPV_SPV_AsstType45Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale45                     ((knx.paramByte(SPV_SPV_AsstScale45) & SPV_SPV_AsstScale45Mask) >> SPV_SPV_AsstScale45Shift)
// Offset
#define ParamSPV_SPV_AsstOffset45                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset45))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef45                       (knx.paramFloat(SPV_SPV_AsstRef45, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg46                       (knx.paramWord(SPV_SPV_AsstReg46))
// Rohwert
#define ParamSPV_SPV_AsstRaw46                       (knx.paramWord(SPV_SPV_AsstRaw46))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning46                   (knx.paramByte(SPV_SPV_AsstMeaning46))
// Datentyp
#define ParamSPV_SPV_AsstType46                      ((knx.paramByte(SPV_SPV_AsstType46) & SPV_SPV_AsstType46Mask) >> SPV_SPV_AsstType46Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale46                     ((knx.paramByte(SPV_SPV_AsstScale46) & SPV_SPV_AsstScale46Mask) >> SPV_SPV_AsstScale46Shift)
// Offset
#define ParamSPV_SPV_AsstOffset46                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset46))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef46                       (knx.paramFloat(SPV_SPV_AsstRef46, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg47                       (knx.paramWord(SPV_SPV_AsstReg47))
// Rohwert
#define ParamSPV_SPV_AsstRaw47                       (knx.paramWord(SPV_SPV_AsstRaw47))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning47                   (knx.paramByte(SPV_SPV_AsstMeaning47))
// Datentyp
#define ParamSPV_SPV_AsstType47                      ((knx.paramByte(SPV_SPV_AsstType47) & SPV_SPV_AsstType47Mask) >> SPV_SPV_AsstType47Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale47                     ((knx.paramByte(SPV_SPV_AsstScale47) & SPV_SPV_AsstScale47Mask) >> SPV_SPV_AsstScale47Shift)
// Offset
#define ParamSPV_SPV_AsstOffset47                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset47))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef47                       (knx.paramFloat(SPV_SPV_AsstRef47, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg48                       (knx.paramWord(SPV_SPV_AsstReg48))
// Rohwert
#define ParamSPV_SPV_AsstRaw48                       (knx.paramWord(SPV_SPV_AsstRaw48))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning48                   (knx.paramByte(SPV_SPV_AsstMeaning48))
// Datentyp
#define ParamSPV_SPV_AsstType48                      ((knx.paramByte(SPV_SPV_AsstType48) & SPV_SPV_AsstType48Mask) >> SPV_SPV_AsstType48Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale48                     ((knx.paramByte(SPV_SPV_AsstScale48) & SPV_SPV_AsstScale48Mask) >> SPV_SPV_AsstScale48Shift)
// Offset
#define ParamSPV_SPV_AsstOffset48                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset48))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef48                       (knx.paramFloat(SPV_SPV_AsstRef48, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg49                       (knx.paramWord(SPV_SPV_AsstReg49))
// Rohwert
#define ParamSPV_SPV_AsstRaw49                       (knx.paramWord(SPV_SPV_AsstRaw49))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning49                   (knx.paramByte(SPV_SPV_AsstMeaning49))
// Datentyp
#define ParamSPV_SPV_AsstType49                      ((knx.paramByte(SPV_SPV_AsstType49) & SPV_SPV_AsstType49Mask) >> SPV_SPV_AsstType49Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale49                     ((knx.paramByte(SPV_SPV_AsstScale49) & SPV_SPV_AsstScale49Mask) >> SPV_SPV_AsstScale49Shift)
// Offset
#define ParamSPV_SPV_AsstOffset49                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset49))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef49                       (knx.paramFloat(SPV_SPV_AsstRef49, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg50                       (knx.paramWord(SPV_SPV_AsstReg50))
// Rohwert
#define ParamSPV_SPV_AsstRaw50                       (knx.paramWord(SPV_SPV_AsstRaw50))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning50                   (knx.paramByte(SPV_SPV_AsstMeaning50))
// Datentyp
#define ParamSPV_SPV_AsstType50                      ((knx.paramByte(SPV_SPV_AsstType50) & SPV_SPV_AsstType50Mask) >> SPV_SPV_AsstType50Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale50                     ((knx.paramByte(SPV_SPV_AsstScale50) & SPV_SPV_AsstScale50Mask) >> SPV_SPV_AsstScale50Shift)
// Offset
#define ParamSPV_SPV_AsstOffset50                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset50))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef50                       (knx.paramFloat(SPV_SPV_AsstRef50, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg51                       (knx.paramWord(SPV_SPV_AsstReg51))
// Rohwert
#define ParamSPV_SPV_AsstRaw51                       (knx.paramWord(SPV_SPV_AsstRaw51))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning51                   (knx.paramByte(SPV_SPV_AsstMeaning51))
// Datentyp
#define ParamSPV_SPV_AsstType51                      ((knx.paramByte(SPV_SPV_AsstType51) & SPV_SPV_AsstType51Mask) >> SPV_SPV_AsstType51Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale51                     ((knx.paramByte(SPV_SPV_AsstScale51) & SPV_SPV_AsstScale51Mask) >> SPV_SPV_AsstScale51Shift)
// Offset
#define ParamSPV_SPV_AsstOffset51                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset51))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef51                       (knx.paramFloat(SPV_SPV_AsstRef51, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg52                       (knx.paramWord(SPV_SPV_AsstReg52))
// Rohwert
#define ParamSPV_SPV_AsstRaw52                       (knx.paramWord(SPV_SPV_AsstRaw52))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning52                   (knx.paramByte(SPV_SPV_AsstMeaning52))
// Datentyp
#define ParamSPV_SPV_AsstType52                      ((knx.paramByte(SPV_SPV_AsstType52) & SPV_SPV_AsstType52Mask) >> SPV_SPV_AsstType52Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale52                     ((knx.paramByte(SPV_SPV_AsstScale52) & SPV_SPV_AsstScale52Mask) >> SPV_SPV_AsstScale52Shift)
// Offset
#define ParamSPV_SPV_AsstOffset52                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset52))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef52                       (knx.paramFloat(SPV_SPV_AsstRef52, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg53                       (knx.paramWord(SPV_SPV_AsstReg53))
// Rohwert
#define ParamSPV_SPV_AsstRaw53                       (knx.paramWord(SPV_SPV_AsstRaw53))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning53                   (knx.paramByte(SPV_SPV_AsstMeaning53))
// Datentyp
#define ParamSPV_SPV_AsstType53                      ((knx.paramByte(SPV_SPV_AsstType53) & SPV_SPV_AsstType53Mask) >> SPV_SPV_AsstType53Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale53                     ((knx.paramByte(SPV_SPV_AsstScale53) & SPV_SPV_AsstScale53Mask) >> SPV_SPV_AsstScale53Shift)
// Offset
#define ParamSPV_SPV_AsstOffset53                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset53))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef53                       (knx.paramFloat(SPV_SPV_AsstRef53, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg54                       (knx.paramWord(SPV_SPV_AsstReg54))
// Rohwert
#define ParamSPV_SPV_AsstRaw54                       (knx.paramWord(SPV_SPV_AsstRaw54))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning54                   (knx.paramByte(SPV_SPV_AsstMeaning54))
// Datentyp
#define ParamSPV_SPV_AsstType54                      ((knx.paramByte(SPV_SPV_AsstType54) & SPV_SPV_AsstType54Mask) >> SPV_SPV_AsstType54Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale54                     ((knx.paramByte(SPV_SPV_AsstScale54) & SPV_SPV_AsstScale54Mask) >> SPV_SPV_AsstScale54Shift)
// Offset
#define ParamSPV_SPV_AsstOffset54                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset54))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef54                       (knx.paramFloat(SPV_SPV_AsstRef54, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg55                       (knx.paramWord(SPV_SPV_AsstReg55))
// Rohwert
#define ParamSPV_SPV_AsstRaw55                       (knx.paramWord(SPV_SPV_AsstRaw55))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning55                   (knx.paramByte(SPV_SPV_AsstMeaning55))
// Datentyp
#define ParamSPV_SPV_AsstType55                      ((knx.paramByte(SPV_SPV_AsstType55) & SPV_SPV_AsstType55Mask) >> SPV_SPV_AsstType55Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale55                     ((knx.paramByte(SPV_SPV_AsstScale55) & SPV_SPV_AsstScale55Mask) >> SPV_SPV_AsstScale55Shift)
// Offset
#define ParamSPV_SPV_AsstOffset55                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset55))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef55                       (knx.paramFloat(SPV_SPV_AsstRef55, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg56                       (knx.paramWord(SPV_SPV_AsstReg56))
// Rohwert
#define ParamSPV_SPV_AsstRaw56                       (knx.paramWord(SPV_SPV_AsstRaw56))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning56                   (knx.paramByte(SPV_SPV_AsstMeaning56))
// Datentyp
#define ParamSPV_SPV_AsstType56                      ((knx.paramByte(SPV_SPV_AsstType56) & SPV_SPV_AsstType56Mask) >> SPV_SPV_AsstType56Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale56                     ((knx.paramByte(SPV_SPV_AsstScale56) & SPV_SPV_AsstScale56Mask) >> SPV_SPV_AsstScale56Shift)
// Offset
#define ParamSPV_SPV_AsstOffset56                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset56))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef56                       (knx.paramFloat(SPV_SPV_AsstRef56, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg57                       (knx.paramWord(SPV_SPV_AsstReg57))
// Rohwert
#define ParamSPV_SPV_AsstRaw57                       (knx.paramWord(SPV_SPV_AsstRaw57))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning57                   (knx.paramByte(SPV_SPV_AsstMeaning57))
// Datentyp
#define ParamSPV_SPV_AsstType57                      ((knx.paramByte(SPV_SPV_AsstType57) & SPV_SPV_AsstType57Mask) >> SPV_SPV_AsstType57Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale57                     ((knx.paramByte(SPV_SPV_AsstScale57) & SPV_SPV_AsstScale57Mask) >> SPV_SPV_AsstScale57Shift)
// Offset
#define ParamSPV_SPV_AsstOffset57                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset57))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef57                       (knx.paramFloat(SPV_SPV_AsstRef57, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg58                       (knx.paramWord(SPV_SPV_AsstReg58))
// Rohwert
#define ParamSPV_SPV_AsstRaw58                       (knx.paramWord(SPV_SPV_AsstRaw58))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning58                   (knx.paramByte(SPV_SPV_AsstMeaning58))
// Datentyp
#define ParamSPV_SPV_AsstType58                      ((knx.paramByte(SPV_SPV_AsstType58) & SPV_SPV_AsstType58Mask) >> SPV_SPV_AsstType58Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale58                     ((knx.paramByte(SPV_SPV_AsstScale58) & SPV_SPV_AsstScale58Mask) >> SPV_SPV_AsstScale58Shift)
// Offset
#define ParamSPV_SPV_AsstOffset58                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset58))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef58                       (knx.paramFloat(SPV_SPV_AsstRef58, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg59                       (knx.paramWord(SPV_SPV_AsstReg59))
// Rohwert
#define ParamSPV_SPV_AsstRaw59                       (knx.paramWord(SPV_SPV_AsstRaw59))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning59                   (knx.paramByte(SPV_SPV_AsstMeaning59))
// Datentyp
#define ParamSPV_SPV_AsstType59                      ((knx.paramByte(SPV_SPV_AsstType59) & SPV_SPV_AsstType59Mask) >> SPV_SPV_AsstType59Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale59                     ((knx.paramByte(SPV_SPV_AsstScale59) & SPV_SPV_AsstScale59Mask) >> SPV_SPV_AsstScale59Shift)
// Offset
#define ParamSPV_SPV_AsstOffset59                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset59))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef59                       (knx.paramFloat(SPV_SPV_AsstRef59, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg60                       (knx.paramWord(SPV_SPV_AsstReg60))
// Rohwert
#define ParamSPV_SPV_AsstRaw60                       (knx.paramWord(SPV_SPV_AsstRaw60))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning60                   (knx.paramByte(SPV_SPV_AsstMeaning60))
// Datentyp
#define ParamSPV_SPV_AsstType60                      ((knx.paramByte(SPV_SPV_AsstType60) & SPV_SPV_AsstType60Mask) >> SPV_SPV_AsstType60Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale60                     ((knx.paramByte(SPV_SPV_AsstScale60) & SPV_SPV_AsstScale60Mask) >> SPV_SPV_AsstScale60Shift)
// Offset
#define ParamSPV_SPV_AsstOffset60                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset60))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef60                       (knx.paramFloat(SPV_SPV_AsstRef60, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg61                       (knx.paramWord(SPV_SPV_AsstReg61))
// Rohwert
#define ParamSPV_SPV_AsstRaw61                       (knx.paramWord(SPV_SPV_AsstRaw61))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning61                   (knx.paramByte(SPV_SPV_AsstMeaning61))
// Datentyp
#define ParamSPV_SPV_AsstType61                      ((knx.paramByte(SPV_SPV_AsstType61) & SPV_SPV_AsstType61Mask) >> SPV_SPV_AsstType61Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale61                     ((knx.paramByte(SPV_SPV_AsstScale61) & SPV_SPV_AsstScale61Mask) >> SPV_SPV_AsstScale61Shift)
// Offset
#define ParamSPV_SPV_AsstOffset61                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset61))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef61                       (knx.paramFloat(SPV_SPV_AsstRef61, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg62                       (knx.paramWord(SPV_SPV_AsstReg62))
// Rohwert
#define ParamSPV_SPV_AsstRaw62                       (knx.paramWord(SPV_SPV_AsstRaw62))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning62                   (knx.paramByte(SPV_SPV_AsstMeaning62))
// Datentyp
#define ParamSPV_SPV_AsstType62                      ((knx.paramByte(SPV_SPV_AsstType62) & SPV_SPV_AsstType62Mask) >> SPV_SPV_AsstType62Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale62                     ((knx.paramByte(SPV_SPV_AsstScale62) & SPV_SPV_AsstScale62Mask) >> SPV_SPV_AsstScale62Shift)
// Offset
#define ParamSPV_SPV_AsstOffset62                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset62))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef62                       (knx.paramFloat(SPV_SPV_AsstRef62, Float_Enc_IEEE754Single))
// Register
#define ParamSPV_SPV_AsstReg63                       (knx.paramWord(SPV_SPV_AsstReg63))
// Rohwert
#define ParamSPV_SPV_AsstRaw63                       (knx.paramWord(SPV_SPV_AsstRaw63))
// Bedeutung
#define ParamSPV_SPV_AsstMeaning63                   (knx.paramByte(SPV_SPV_AsstMeaning63))
// Datentyp
#define ParamSPV_SPV_AsstType63                      ((knx.paramByte(SPV_SPV_AsstType63) & SPV_SPV_AsstType63Mask) >> SPV_SPV_AsstType63Shift)
// Skalierung
#define ParamSPV_SPV_AsstScale63                     ((knx.paramByte(SPV_SPV_AsstScale63) & SPV_SPV_AsstScale63Mask) >> SPV_SPV_AsstScale63Shift)
// Offset
#define ParamSPV_SPV_AsstOffset63                    ((int8_t)knx.paramByte(SPV_SPV_AsstOffset63))
// abgelesener Wert
#define ParamSPV_SPV_AsstRef63                       (knx.paramFloat(SPV_SPV_AsstRef63, Float_Enc_IEEE754Single))

#define SPV_ChannelCount 6

// Parameter per channel
#define SPV_ParamBlockOffset 3821
#define SPV_ParamBlockSize 365
#define SPV_ParamCalcIndex(index) (index + SPV_ParamBlockOffset + _channelIndex * SPV_ParamBlockSize)

#define SPV_CHLoggerIp                           0      // char*, 32 Byte
#define     SPV_CHLoggerIpLength 32
#define SPV_CHLoggerPort                        32      // uint16_t
#define SPV_CHTransport                         34      // 8 Bits, Bit 7-0
#define SPV_CHProfile                           35      // 8 Bits, Bit 7-0
#define SPV_CHSerialMode                        36      // 8 Bits, Bit 7-0
#define SPV_CHSlaveId                           37      // uint8_t
#define SPV_CHPollInterval                      38      // uint16_t
#define SPV_CHLoggerSerialText                  40      // char*, 16 Byte
#define     SPV_CHLoggerSerialTextLength 16
#define SPV_CHView                              56      // 1 Bit, Bit 7
#define     SPV_CHViewMask 0x80
#define     SPV_CHViewShift 7
#define SPV_CHRegPower                          57      // uint16_t
#define SPV_CHTypePower                         59      // 3 Bits, Bit 7-5
#define     SPV_CHTypePowerMask 0xE0
#define     SPV_CHTypePowerShift 5
#define SPV_CHScalePower                        59      // 3 Bits, Bit 4-2
#define     SPV_CHScalePowerMask 0x1C
#define     SPV_CHScalePowerShift 2
#define SPV_CHEnPower                           59      // 1 Bit, Bit 1
#define     SPV_CHEnPowerMask 0x02
#define     SPV_CHEnPowerShift 1
#define SPV_CHOffsetPower                       60      // int8_t
#define SPV_CHRegApparentPower                  61      // uint16_t
#define SPV_CHTypeApparentPower                 63      // 3 Bits, Bit 7-5
#define     SPV_CHTypeApparentPowerMask 0xE0
#define     SPV_CHTypeApparentPowerShift 5
#define SPV_CHScaleApparentPower                63      // 3 Bits, Bit 4-2
#define     SPV_CHScaleApparentPowerMask 0x1C
#define     SPV_CHScaleApparentPowerShift 2
#define SPV_CHEnApparentPower                   63      // 1 Bit, Bit 1
#define     SPV_CHEnApparentPowerMask 0x02
#define     SPV_CHEnApparentPowerShift 1
#define SPV_CHOffsetApparentPower               64      // int8_t
#define SPV_CHRegGridVoltage                    65      // uint16_t
#define SPV_CHTypeGridVoltage                   67      // 3 Bits, Bit 7-5
#define     SPV_CHTypeGridVoltageMask 0xE0
#define     SPV_CHTypeGridVoltageShift 5
#define SPV_CHScaleGridVoltage                  67      // 3 Bits, Bit 4-2
#define     SPV_CHScaleGridVoltageMask 0x1C
#define     SPV_CHScaleGridVoltageShift 2
#define SPV_CHEnGridVoltage                     67      // 1 Bit, Bit 1
#define     SPV_CHEnGridVoltageMask 0x02
#define     SPV_CHEnGridVoltageShift 1
#define SPV_CHOffsetGridVoltage                 68      // int8_t
#define SPV_CHRegGridVoltageL2                  69      // uint16_t
#define SPV_CHTypeGridVoltageL2                 71      // 3 Bits, Bit 7-5
#define     SPV_CHTypeGridVoltageL2Mask 0xE0
#define     SPV_CHTypeGridVoltageL2Shift 5
#define SPV_CHScaleGridVoltageL2                71      // 3 Bits, Bit 4-2
#define     SPV_CHScaleGridVoltageL2Mask 0x1C
#define     SPV_CHScaleGridVoltageL2Shift 2
#define SPV_CHEnGridVoltageL2                   71      // 1 Bit, Bit 1
#define     SPV_CHEnGridVoltageL2Mask 0x02
#define     SPV_CHEnGridVoltageL2Shift 1
#define SPV_CHOffsetGridVoltageL2               72      // int8_t
#define SPV_CHRegGridVoltageL3                  73      // uint16_t
#define SPV_CHTypeGridVoltageL3                 75      // 3 Bits, Bit 7-5
#define     SPV_CHTypeGridVoltageL3Mask 0xE0
#define     SPV_CHTypeGridVoltageL3Shift 5
#define SPV_CHScaleGridVoltageL3                75      // 3 Bits, Bit 4-2
#define     SPV_CHScaleGridVoltageL3Mask 0x1C
#define     SPV_CHScaleGridVoltageL3Shift 2
#define SPV_CHEnGridVoltageL3                   75      // 1 Bit, Bit 1
#define     SPV_CHEnGridVoltageL3Mask 0x02
#define     SPV_CHEnGridVoltageL3Shift 1
#define SPV_CHOffsetGridVoltageL3               76      // int8_t
#define SPV_CHRegGridCurrent                    77      // uint16_t
#define SPV_CHTypeGridCurrent                   79      // 3 Bits, Bit 7-5
#define     SPV_CHTypeGridCurrentMask 0xE0
#define     SPV_CHTypeGridCurrentShift 5
#define SPV_CHScaleGridCurrent                  79      // 3 Bits, Bit 4-2
#define     SPV_CHScaleGridCurrentMask 0x1C
#define     SPV_CHScaleGridCurrentShift 2
#define SPV_CHEnGridCurrent                     79      // 1 Bit, Bit 1
#define     SPV_CHEnGridCurrentMask 0x02
#define     SPV_CHEnGridCurrentShift 1
#define SPV_CHOffsetGridCurrent                 80      // int8_t
#define SPV_CHRegGridFrequency                  81      // uint16_t
#define SPV_CHTypeGridFrequency                 83      // 3 Bits, Bit 7-5
#define     SPV_CHTypeGridFrequencyMask 0xE0
#define     SPV_CHTypeGridFrequencyShift 5
#define SPV_CHScaleGridFrequency                83      // 3 Bits, Bit 4-2
#define     SPV_CHScaleGridFrequencyMask 0x1C
#define     SPV_CHScaleGridFrequencyShift 2
#define SPV_CHEnGridFrequency                   83      // 1 Bit, Bit 1
#define     SPV_CHEnGridFrequencyMask 0x02
#define     SPV_CHEnGridFrequencyShift 1
#define SPV_CHOffsetGridFrequency               84      // int8_t
#define SPV_CHRegOperatingState                 85      // uint16_t
#define SPV_CHTypeOperatingState                87      // 3 Bits, Bit 7-5
#define     SPV_CHTypeOperatingStateMask 0xE0
#define     SPV_CHTypeOperatingStateShift 5
#define SPV_CHScaleOperatingState               87      // 3 Bits, Bit 4-2
#define     SPV_CHScaleOperatingStateMask 0x1C
#define     SPV_CHScaleOperatingStateShift 2
#define SPV_CHEnOperatingState                  87      // 1 Bit, Bit 1
#define     SPV_CHEnOperatingStateMask 0x02
#define     SPV_CHEnOperatingStateShift 1
#define SPV_CHOffsetOperatingState              88      // int8_t
#define SPV_CHRegToday                          89      // uint16_t
#define SPV_CHTypeToday                         91      // 3 Bits, Bit 7-5
#define     SPV_CHTypeTodayMask 0xE0
#define     SPV_CHTypeTodayShift 5
#define SPV_CHScaleToday                        91      // 3 Bits, Bit 4-2
#define     SPV_CHScaleTodayMask 0x1C
#define     SPV_CHScaleTodayShift 2
#define SPV_CHEnToday                           91      // 1 Bit, Bit 1
#define     SPV_CHEnTodayMask 0x02
#define     SPV_CHEnTodayShift 1
#define SPV_CHOffsetToday                       92      // int8_t
#define SPV_CHRegTotal                          93      // uint16_t
#define SPV_CHTypeTotal                         95      // 3 Bits, Bit 7-5
#define     SPV_CHTypeTotalMask 0xE0
#define     SPV_CHTypeTotalShift 5
#define SPV_CHScaleTotal                        95      // 3 Bits, Bit 4-2
#define     SPV_CHScaleTotalMask 0x1C
#define     SPV_CHScaleTotalShift 2
#define SPV_CHEnTotal                           95      // 1 Bit, Bit 1
#define     SPV_CHEnTotalMask 0x02
#define     SPV_CHEnTotalShift 1
#define SPV_CHOffsetTotal                       96      // int8_t
#define SPV_CHRegMonth                          97      // uint16_t
#define SPV_CHTypeMonth                         99      // 3 Bits, Bit 7-5
#define     SPV_CHTypeMonthMask 0xE0
#define     SPV_CHTypeMonthShift 5
#define SPV_CHScaleMonth                        99      // 3 Bits, Bit 4-2
#define     SPV_CHScaleMonthMask 0x1C
#define     SPV_CHScaleMonthShift 2
#define SPV_CHEnMonth                           99      // 1 Bit, Bit 1
#define     SPV_CHEnMonthMask 0x02
#define     SPV_CHEnMonthShift 1
#define SPV_CHOffsetMonth                       100      // int8_t
#define SPV_CHRegYear                           101      // uint16_t
#define SPV_CHTypeYear                          103      // 3 Bits, Bit 7-5
#define     SPV_CHTypeYearMask 0xE0
#define     SPV_CHTypeYearShift 5
#define SPV_CHScaleYear                         103      // 3 Bits, Bit 4-2
#define     SPV_CHScaleYearMask 0x1C
#define     SPV_CHScaleYearShift 2
#define SPV_CHEnYear                            103      // 1 Bit, Bit 1
#define     SPV_CHEnYearMask 0x02
#define     SPV_CHEnYearShift 1
#define SPV_CHOffsetYear                        104      // int8_t
#define SPV_CHRegToday1                         105      // uint16_t
#define SPV_CHTypeToday1                        107      // 3 Bits, Bit 7-5
#define     SPV_CHTypeToday1Mask 0xE0
#define     SPV_CHTypeToday1Shift 5
#define SPV_CHScaleToday1                       107      // 3 Bits, Bit 4-2
#define     SPV_CHScaleToday1Mask 0x1C
#define     SPV_CHScaleToday1Shift 2
#define SPV_CHEnToday1                          107      // 1 Bit, Bit 1
#define     SPV_CHEnToday1Mask 0x02
#define     SPV_CHEnToday1Shift 1
#define SPV_CHOffsetToday1                      108      // int8_t
#define SPV_CHRegToday2                         109      // uint16_t
#define SPV_CHTypeToday2                        111      // 3 Bits, Bit 7-5
#define     SPV_CHTypeToday2Mask 0xE0
#define     SPV_CHTypeToday2Shift 5
#define SPV_CHScaleToday2                       111      // 3 Bits, Bit 4-2
#define     SPV_CHScaleToday2Mask 0x1C
#define     SPV_CHScaleToday2Shift 2
#define SPV_CHEnToday2                          111      // 1 Bit, Bit 1
#define     SPV_CHEnToday2Mask 0x02
#define     SPV_CHEnToday2Shift 1
#define SPV_CHOffsetToday2                      112      // int8_t
#define SPV_CHRegTotal1                         113      // uint16_t
#define SPV_CHTypeTotal1                        115      // 3 Bits, Bit 7-5
#define     SPV_CHTypeTotal1Mask 0xE0
#define     SPV_CHTypeTotal1Shift 5
#define SPV_CHScaleTotal1                       115      // 3 Bits, Bit 4-2
#define     SPV_CHScaleTotal1Mask 0x1C
#define     SPV_CHScaleTotal1Shift 2
#define SPV_CHEnTotal1                          115      // 1 Bit, Bit 1
#define     SPV_CHEnTotal1Mask 0x02
#define     SPV_CHEnTotal1Shift 1
#define SPV_CHOffsetTotal1                      116      // int8_t
#define SPV_CHRegTotal2                         117      // uint16_t
#define SPV_CHTypeTotal2                        119      // 3 Bits, Bit 7-5
#define     SPV_CHTypeTotal2Mask 0xE0
#define     SPV_CHTypeTotal2Shift 5
#define SPV_CHScaleTotal2                       119      // 3 Bits, Bit 4-2
#define     SPV_CHScaleTotal2Mask 0x1C
#define     SPV_CHScaleTotal2Shift 2
#define SPV_CHEnTotal2                          119      // 1 Bit, Bit 1
#define     SPV_CHEnTotal2Mask 0x02
#define     SPV_CHEnTotal2Shift 1
#define SPV_CHOffsetTotal2                      120      // int8_t
#define SPV_CHRegPv1Voltage                     121      // uint16_t
#define SPV_CHTypePv1Voltage                    123      // 3 Bits, Bit 7-5
#define     SPV_CHTypePv1VoltageMask 0xE0
#define     SPV_CHTypePv1VoltageShift 5
#define SPV_CHScalePv1Voltage                   123      // 3 Bits, Bit 4-2
#define     SPV_CHScalePv1VoltageMask 0x1C
#define     SPV_CHScalePv1VoltageShift 2
#define SPV_CHEnPv1Voltage                      123      // 1 Bit, Bit 1
#define     SPV_CHEnPv1VoltageMask 0x02
#define     SPV_CHEnPv1VoltageShift 1
#define SPV_CHOffsetPv1Voltage                  124      // int8_t
#define SPV_CHRegPv1Current                     125      // uint16_t
#define SPV_CHTypePv1Current                    127      // 3 Bits, Bit 7-5
#define     SPV_CHTypePv1CurrentMask 0xE0
#define     SPV_CHTypePv1CurrentShift 5
#define SPV_CHScalePv1Current                   127      // 3 Bits, Bit 4-2
#define     SPV_CHScalePv1CurrentMask 0x1C
#define     SPV_CHScalePv1CurrentShift 2
#define SPV_CHEnPv1Current                      127      // 1 Bit, Bit 1
#define     SPV_CHEnPv1CurrentMask 0x02
#define     SPV_CHEnPv1CurrentShift 1
#define SPV_CHOffsetPv1Current                  128      // int8_t
#define SPV_CHRegPv1Power                       129      // uint16_t
#define SPV_CHTypePv1Power                      131      // 3 Bits, Bit 7-5
#define     SPV_CHTypePv1PowerMask 0xE0
#define     SPV_CHTypePv1PowerShift 5
#define SPV_CHScalePv1Power                     131      // 3 Bits, Bit 4-2
#define     SPV_CHScalePv1PowerMask 0x1C
#define     SPV_CHScalePv1PowerShift 2
#define SPV_CHEnPv1Power                        131      // 1 Bit, Bit 1
#define     SPV_CHEnPv1PowerMask 0x02
#define     SPV_CHEnPv1PowerShift 1
#define SPV_CHOffsetPv1Power                    132      // int8_t
#define SPV_CHRegPv1Today                       133      // uint16_t
#define SPV_CHTypePv1Today                      135      // 3 Bits, Bit 7-5
#define     SPV_CHTypePv1TodayMask 0xE0
#define     SPV_CHTypePv1TodayShift 5
#define SPV_CHScalePv1Today                     135      // 3 Bits, Bit 4-2
#define     SPV_CHScalePv1TodayMask 0x1C
#define     SPV_CHScalePv1TodayShift 2
#define SPV_CHEnPv1Today                        135      // 1 Bit, Bit 1
#define     SPV_CHEnPv1TodayMask 0x02
#define     SPV_CHEnPv1TodayShift 1
#define SPV_CHOffsetPv1Today                    136      // int8_t
#define SPV_CHRegPv2Voltage                     137      // uint16_t
#define SPV_CHTypePv2Voltage                    139      // 3 Bits, Bit 7-5
#define     SPV_CHTypePv2VoltageMask 0xE0
#define     SPV_CHTypePv2VoltageShift 5
#define SPV_CHScalePv2Voltage                   139      // 3 Bits, Bit 4-2
#define     SPV_CHScalePv2VoltageMask 0x1C
#define     SPV_CHScalePv2VoltageShift 2
#define SPV_CHEnPv2Voltage                      139      // 1 Bit, Bit 1
#define     SPV_CHEnPv2VoltageMask 0x02
#define     SPV_CHEnPv2VoltageShift 1
#define SPV_CHOffsetPv2Voltage                  140      // int8_t
#define SPV_CHRegPv2Current                     141      // uint16_t
#define SPV_CHTypePv2Current                    143      // 3 Bits, Bit 7-5
#define     SPV_CHTypePv2CurrentMask 0xE0
#define     SPV_CHTypePv2CurrentShift 5
#define SPV_CHScalePv2Current                   143      // 3 Bits, Bit 4-2
#define     SPV_CHScalePv2CurrentMask 0x1C
#define     SPV_CHScalePv2CurrentShift 2
#define SPV_CHEnPv2Current                      143      // 1 Bit, Bit 1
#define     SPV_CHEnPv2CurrentMask 0x02
#define     SPV_CHEnPv2CurrentShift 1
#define SPV_CHOffsetPv2Current                  144      // int8_t
#define SPV_CHRegPv2Power                       145      // uint16_t
#define SPV_CHTypePv2Power                      147      // 3 Bits, Bit 7-5
#define     SPV_CHTypePv2PowerMask 0xE0
#define     SPV_CHTypePv2PowerShift 5
#define SPV_CHScalePv2Power                     147      // 3 Bits, Bit 4-2
#define     SPV_CHScalePv2PowerMask 0x1C
#define     SPV_CHScalePv2PowerShift 2
#define SPV_CHEnPv2Power                        147      // 1 Bit, Bit 1
#define     SPV_CHEnPv2PowerMask 0x02
#define     SPV_CHEnPv2PowerShift 1
#define SPV_CHOffsetPv2Power                    148      // int8_t
#define SPV_CHRegPv2Today                       149      // uint16_t
#define SPV_CHTypePv2Today                      151      // 3 Bits, Bit 7-5
#define     SPV_CHTypePv2TodayMask 0xE0
#define     SPV_CHTypePv2TodayShift 5
#define SPV_CHScalePv2Today                     151      // 3 Bits, Bit 4-2
#define     SPV_CHScalePv2TodayMask 0x1C
#define     SPV_CHScalePv2TodayShift 2
#define SPV_CHEnPv2Today                        151      // 1 Bit, Bit 1
#define     SPV_CHEnPv2TodayMask 0x02
#define     SPV_CHEnPv2TodayShift 1
#define SPV_CHOffsetPv2Today                    152      // int8_t
#define SPV_CHRegPv3Voltage                     153      // uint16_t
#define SPV_CHTypePv3Voltage                    155      // 3 Bits, Bit 7-5
#define     SPV_CHTypePv3VoltageMask 0xE0
#define     SPV_CHTypePv3VoltageShift 5
#define SPV_CHScalePv3Voltage                   155      // 3 Bits, Bit 4-2
#define     SPV_CHScalePv3VoltageMask 0x1C
#define     SPV_CHScalePv3VoltageShift 2
#define SPV_CHEnPv3Voltage                      155      // 1 Bit, Bit 1
#define     SPV_CHEnPv3VoltageMask 0x02
#define     SPV_CHEnPv3VoltageShift 1
#define SPV_CHOffsetPv3Voltage                  156      // int8_t
#define SPV_CHRegPv3Current                     157      // uint16_t
#define SPV_CHTypePv3Current                    159      // 3 Bits, Bit 7-5
#define     SPV_CHTypePv3CurrentMask 0xE0
#define     SPV_CHTypePv3CurrentShift 5
#define SPV_CHScalePv3Current                   159      // 3 Bits, Bit 4-2
#define     SPV_CHScalePv3CurrentMask 0x1C
#define     SPV_CHScalePv3CurrentShift 2
#define SPV_CHEnPv3Current                      159      // 1 Bit, Bit 1
#define     SPV_CHEnPv3CurrentMask 0x02
#define     SPV_CHEnPv3CurrentShift 1
#define SPV_CHOffsetPv3Current                  160      // int8_t
#define SPV_CHRegPv3Power                       161      // uint16_t
#define SPV_CHTypePv3Power                      163      // 3 Bits, Bit 7-5
#define     SPV_CHTypePv3PowerMask 0xE0
#define     SPV_CHTypePv3PowerShift 5
#define SPV_CHScalePv3Power                     163      // 3 Bits, Bit 4-2
#define     SPV_CHScalePv3PowerMask 0x1C
#define     SPV_CHScalePv3PowerShift 2
#define SPV_CHEnPv3Power                        163      // 1 Bit, Bit 1
#define     SPV_CHEnPv3PowerMask 0x02
#define     SPV_CHEnPv3PowerShift 1
#define SPV_CHOffsetPv3Power                    164      // int8_t
#define SPV_CHRegPv3Today                       165      // uint16_t
#define SPV_CHTypePv3Today                      167      // 3 Bits, Bit 7-5
#define     SPV_CHTypePv3TodayMask 0xE0
#define     SPV_CHTypePv3TodayShift 5
#define SPV_CHScalePv3Today                     167      // 3 Bits, Bit 4-2
#define     SPV_CHScalePv3TodayMask 0x1C
#define     SPV_CHScalePv3TodayShift 2
#define SPV_CHEnPv3Today                        167      // 1 Bit, Bit 1
#define     SPV_CHEnPv3TodayMask 0x02
#define     SPV_CHEnPv3TodayShift 1
#define SPV_CHOffsetPv3Today                    168      // int8_t
#define SPV_CHRegPv4Voltage                     169      // uint16_t
#define SPV_CHTypePv4Voltage                    171      // 3 Bits, Bit 7-5
#define     SPV_CHTypePv4VoltageMask 0xE0
#define     SPV_CHTypePv4VoltageShift 5
#define SPV_CHScalePv4Voltage                   171      // 3 Bits, Bit 4-2
#define     SPV_CHScalePv4VoltageMask 0x1C
#define     SPV_CHScalePv4VoltageShift 2
#define SPV_CHEnPv4Voltage                      171      // 1 Bit, Bit 1
#define     SPV_CHEnPv4VoltageMask 0x02
#define     SPV_CHEnPv4VoltageShift 1
#define SPV_CHOffsetPv4Voltage                  172      // int8_t
#define SPV_CHRegPv4Current                     173      // uint16_t
#define SPV_CHTypePv4Current                    175      // 3 Bits, Bit 7-5
#define     SPV_CHTypePv4CurrentMask 0xE0
#define     SPV_CHTypePv4CurrentShift 5
#define SPV_CHScalePv4Current                   175      // 3 Bits, Bit 4-2
#define     SPV_CHScalePv4CurrentMask 0x1C
#define     SPV_CHScalePv4CurrentShift 2
#define SPV_CHEnPv4Current                      175      // 1 Bit, Bit 1
#define     SPV_CHEnPv4CurrentMask 0x02
#define     SPV_CHEnPv4CurrentShift 1
#define SPV_CHOffsetPv4Current                  176      // int8_t
#define SPV_CHRegPv4Power                       177      // uint16_t
#define SPV_CHTypePv4Power                      179      // 3 Bits, Bit 7-5
#define     SPV_CHTypePv4PowerMask 0xE0
#define     SPV_CHTypePv4PowerShift 5
#define SPV_CHScalePv4Power                     179      // 3 Bits, Bit 4-2
#define     SPV_CHScalePv4PowerMask 0x1C
#define     SPV_CHScalePv4PowerShift 2
#define SPV_CHEnPv4Power                        179      // 1 Bit, Bit 1
#define     SPV_CHEnPv4PowerMask 0x02
#define     SPV_CHEnPv4PowerShift 1
#define SPV_CHOffsetPv4Power                    180      // int8_t
#define SPV_CHRegPv4Today                       181      // uint16_t
#define SPV_CHTypePv4Today                      183      // 3 Bits, Bit 7-5
#define     SPV_CHTypePv4TodayMask 0xE0
#define     SPV_CHTypePv4TodayShift 5
#define SPV_CHScalePv4Today                     183      // 3 Bits, Bit 4-2
#define     SPV_CHScalePv4TodayMask 0x1C
#define     SPV_CHScalePv4TodayShift 2
#define SPV_CHEnPv4Today                        183      // 1 Bit, Bit 1
#define     SPV_CHEnPv4TodayMask 0x02
#define     SPV_CHEnPv4TodayShift 1
#define SPV_CHOffsetPv4Today                    184      // int8_t
#define SPV_CHRegSoc                            185      // uint16_t
#define SPV_CHTypeSoc                           187      // 3 Bits, Bit 7-5
#define     SPV_CHTypeSocMask 0xE0
#define     SPV_CHTypeSocShift 5
#define SPV_CHScaleSoc                          187      // 3 Bits, Bit 4-2
#define     SPV_CHScaleSocMask 0x1C
#define     SPV_CHScaleSocShift 2
#define SPV_CHEnSoc                             187      // 1 Bit, Bit 1
#define     SPV_CHEnSocMask 0x02
#define     SPV_CHEnSocShift 1
#define SPV_CHOffsetSoc                         188      // int8_t
#define SPV_CHRegSoh                            189      // uint16_t
#define SPV_CHTypeSoh                           191      // 3 Bits, Bit 7-5
#define     SPV_CHTypeSohMask 0xE0
#define     SPV_CHTypeSohShift 5
#define SPV_CHScaleSoh                          191      // 3 Bits, Bit 4-2
#define     SPV_CHScaleSohMask 0x1C
#define     SPV_CHScaleSohShift 2
#define SPV_CHEnSoh                             191      // 1 Bit, Bit 1
#define     SPV_CHEnSohMask 0x02
#define     SPV_CHEnSohShift 1
#define SPV_CHOffsetSoh                         192      // int8_t
#define SPV_CHRegBattVoltage                    193      // uint16_t
#define SPV_CHTypeBattVoltage                   195      // 3 Bits, Bit 7-5
#define     SPV_CHTypeBattVoltageMask 0xE0
#define     SPV_CHTypeBattVoltageShift 5
#define SPV_CHScaleBattVoltage                  195      // 3 Bits, Bit 4-2
#define     SPV_CHScaleBattVoltageMask 0x1C
#define     SPV_CHScaleBattVoltageShift 2
#define SPV_CHEnBattVoltage                     195      // 1 Bit, Bit 1
#define     SPV_CHEnBattVoltageMask 0x02
#define     SPV_CHEnBattVoltageShift 1
#define SPV_CHOffsetBattVoltage                 196      // int8_t
#define SPV_CHRegBattCurrent                    197      // uint16_t
#define SPV_CHTypeBattCurrent                   199      // 3 Bits, Bit 7-5
#define     SPV_CHTypeBattCurrentMask 0xE0
#define     SPV_CHTypeBattCurrentShift 5
#define SPV_CHScaleBattCurrent                  199      // 3 Bits, Bit 4-2
#define     SPV_CHScaleBattCurrentMask 0x1C
#define     SPV_CHScaleBattCurrentShift 2
#define SPV_CHEnBattCurrent                     199      // 1 Bit, Bit 1
#define     SPV_CHEnBattCurrentMask 0x02
#define     SPV_CHEnBattCurrentShift 1
#define SPV_CHOffsetBattCurrent                 200      // int8_t
#define SPV_CHRegBattPower                      201      // uint16_t
#define SPV_CHTypeBattPower                     203      // 3 Bits, Bit 7-5
#define     SPV_CHTypeBattPowerMask 0xE0
#define     SPV_CHTypeBattPowerShift 5
#define SPV_CHScaleBattPower                    203      // 3 Bits, Bit 4-2
#define     SPV_CHScaleBattPowerMask 0x1C
#define     SPV_CHScaleBattPowerShift 2
#define SPV_CHEnBattPower                       203      // 1 Bit, Bit 1
#define     SPV_CHEnBattPowerMask 0x02
#define     SPV_CHEnBattPowerShift 1
#define SPV_CHOffsetBattPower                   204      // int8_t
#define SPV_CHRegBattTemperature                205      // uint16_t
#define SPV_CHTypeBattTemperature               207      // 3 Bits, Bit 7-5
#define     SPV_CHTypeBattTemperatureMask 0xE0
#define     SPV_CHTypeBattTemperatureShift 5
#define SPV_CHScaleBattTemperature              207      // 3 Bits, Bit 4-2
#define     SPV_CHScaleBattTemperatureMask 0x1C
#define     SPV_CHScaleBattTemperatureShift 2
#define SPV_CHEnBattTemperature                 207      // 1 Bit, Bit 1
#define     SPV_CHEnBattTemperatureMask 0x02
#define     SPV_CHEnBattTemperatureShift 1
#define SPV_CHOffsetBattTemperature             208      // int8_t
#define SPV_CHRegCycleTimes                     209      // uint16_t
#define SPV_CHTypeCycleTimes                    211      // 3 Bits, Bit 7-5
#define     SPV_CHTypeCycleTimesMask 0xE0
#define     SPV_CHTypeCycleTimesShift 5
#define SPV_CHScaleCycleTimes                   211      // 3 Bits, Bit 4-2
#define     SPV_CHScaleCycleTimesMask 0x1C
#define     SPV_CHScaleCycleTimesShift 2
#define SPV_CHEnCycleTimes                      211      // 1 Bit, Bit 1
#define     SPV_CHEnCycleTimesMask 0x02
#define     SPV_CHEnCycleTimesShift 1
#define SPV_CHOffsetCycleTimes                  212      // int8_t
#define SPV_CHRegRemainingCapacity              213      // uint16_t
#define SPV_CHTypeRemainingCapacity             215      // 3 Bits, Bit 7-5
#define     SPV_CHTypeRemainingCapacityMask 0xE0
#define     SPV_CHTypeRemainingCapacityShift 5
#define SPV_CHScaleRemainingCapacity            215      // 3 Bits, Bit 4-2
#define     SPV_CHScaleRemainingCapacityMask 0x1C
#define     SPV_CHScaleRemainingCapacityShift 2
#define SPV_CHEnRemainingCapacity               215      // 1 Bit, Bit 1
#define     SPV_CHEnRemainingCapacityMask 0x02
#define     SPV_CHEnRemainingCapacityShift 1
#define SPV_CHOffsetRemainingCapacity           216      // int8_t
#define SPV_CHRegTodayCharge                    217      // uint16_t
#define SPV_CHTypeTodayCharge                   219      // 3 Bits, Bit 7-5
#define     SPV_CHTypeTodayChargeMask 0xE0
#define     SPV_CHTypeTodayChargeShift 5
#define SPV_CHScaleTodayCharge                  219      // 3 Bits, Bit 4-2
#define     SPV_CHScaleTodayChargeMask 0x1C
#define     SPV_CHScaleTodayChargeShift 2
#define SPV_CHEnTodayCharge                     219      // 1 Bit, Bit 1
#define     SPV_CHEnTodayChargeMask 0x02
#define     SPV_CHEnTodayChargeShift 1
#define SPV_CHOffsetTodayCharge                 220      // int8_t
#define SPV_CHRegTodayDischarge                 221      // uint16_t
#define SPV_CHTypeTodayDischarge                223      // 3 Bits, Bit 7-5
#define     SPV_CHTypeTodayDischargeMask 0xE0
#define     SPV_CHTypeTodayDischargeShift 5
#define SPV_CHScaleTodayDischarge               223      // 3 Bits, Bit 4-2
#define     SPV_CHScaleTodayDischargeMask 0x1C
#define     SPV_CHScaleTodayDischargeShift 2
#define SPV_CHEnTodayDischarge                  223      // 1 Bit, Bit 1
#define     SPV_CHEnTodayDischargeMask 0x02
#define     SPV_CHEnTodayDischargeShift 1
#define SPV_CHOffsetTodayDischarge              224      // int8_t
#define SPV_CHRegTotalCharge                    225      // uint16_t
#define SPV_CHTypeTotalCharge                   227      // 3 Bits, Bit 7-5
#define     SPV_CHTypeTotalChargeMask 0xE0
#define     SPV_CHTypeTotalChargeShift 5
#define SPV_CHScaleTotalCharge                  227      // 3 Bits, Bit 4-2
#define     SPV_CHScaleTotalChargeMask 0x1C
#define     SPV_CHScaleTotalChargeShift 2
#define SPV_CHEnTotalCharge                     227      // 1 Bit, Bit 1
#define     SPV_CHEnTotalChargeMask 0x02
#define     SPV_CHEnTotalChargeShift 1
#define SPV_CHOffsetTotalCharge                 228      // int8_t
#define SPV_CHRegTotalDischarge                 229      // uint16_t
#define SPV_CHTypeTotalDischarge                231      // 3 Bits, Bit 7-5
#define     SPV_CHTypeTotalDischargeMask 0xE0
#define     SPV_CHTypeTotalDischargeShift 5
#define SPV_CHScaleTotalDischarge               231      // 3 Bits, Bit 4-2
#define     SPV_CHScaleTotalDischargeMask 0x1C
#define     SPV_CHScaleTotalDischargeShift 2
#define SPV_CHEnTotalDischarge                  231      // 1 Bit, Bit 1
#define     SPV_CHEnTotalDischargeMask 0x02
#define     SPV_CHEnTotalDischargeShift 1
#define SPV_CHOffsetTotalDischarge              232      // int8_t
#define SPV_CHRegCellVoltageMax                 233      // uint16_t
#define SPV_CHTypeCellVoltageMax                235      // 3 Bits, Bit 7-5
#define     SPV_CHTypeCellVoltageMaxMask 0xE0
#define     SPV_CHTypeCellVoltageMaxShift 5
#define SPV_CHScaleCellVoltageMax               235      // 3 Bits, Bit 4-2
#define     SPV_CHScaleCellVoltageMaxMask 0x1C
#define     SPV_CHScaleCellVoltageMaxShift 2
#define SPV_CHEnCellVoltageMax                  235      // 1 Bit, Bit 1
#define     SPV_CHEnCellVoltageMaxMask 0x02
#define     SPV_CHEnCellVoltageMaxShift 1
#define SPV_CHOffsetCellVoltageMax              236      // int8_t
#define SPV_CHRegCellVoltageMin                 237      // uint16_t
#define SPV_CHTypeCellVoltageMin                239      // 3 Bits, Bit 7-5
#define     SPV_CHTypeCellVoltageMinMask 0xE0
#define     SPV_CHTypeCellVoltageMinShift 5
#define SPV_CHScaleCellVoltageMin               239      // 3 Bits, Bit 4-2
#define     SPV_CHScaleCellVoltageMinMask 0x1C
#define     SPV_CHScaleCellVoltageMinShift 2
#define SPV_CHEnCellVoltageMin                  239      // 1 Bit, Bit 1
#define     SPV_CHEnCellVoltageMinMask 0x02
#define     SPV_CHEnCellVoltageMinShift 1
#define SPV_CHOffsetCellVoltageMin              240      // int8_t
#define SPV_CHRegCellTempMax                    241      // uint16_t
#define SPV_CHTypeCellTempMax                   243      // 3 Bits, Bit 7-5
#define     SPV_CHTypeCellTempMaxMask 0xE0
#define     SPV_CHTypeCellTempMaxShift 5
#define SPV_CHScaleCellTempMax                  243      // 3 Bits, Bit 4-2
#define     SPV_CHScaleCellTempMaxMask 0x1C
#define     SPV_CHScaleCellTempMaxShift 2
#define SPV_CHEnCellTempMax                     243      // 1 Bit, Bit 1
#define     SPV_CHEnCellTempMaxMask 0x02
#define     SPV_CHEnCellTempMaxShift 1
#define SPV_CHOffsetCellTempMax                 244      // int8_t
#define SPV_CHRegCellTempMin                    245      // uint16_t
#define SPV_CHTypeCellTempMin                   247      // 3 Bits, Bit 7-5
#define     SPV_CHTypeCellTempMinMask 0xE0
#define     SPV_CHTypeCellTempMinShift 5
#define SPV_CHScaleCellTempMin                  247      // 3 Bits, Bit 4-2
#define     SPV_CHScaleCellTempMinMask 0x1C
#define     SPV_CHScaleCellTempMinShift 2
#define SPV_CHEnCellTempMin                     247      // 1 Bit, Bit 1
#define     SPV_CHEnCellTempMinMask 0x02
#define     SPV_CHEnCellTempMinShift 1
#define SPV_CHOffsetCellTempMin                 248      // int8_t
#define SPV_CHRegHousePower                     249      // uint16_t
#define SPV_CHTypeHousePower                    251      // 3 Bits, Bit 7-5
#define     SPV_CHTypeHousePowerMask 0xE0
#define     SPV_CHTypeHousePowerShift 5
#define SPV_CHScaleHousePower                   251      // 3 Bits, Bit 4-2
#define     SPV_CHScaleHousePowerMask 0x1C
#define     SPV_CHScaleHousePowerShift 2
#define SPV_CHEnHousePower                      251      // 1 Bit, Bit 1
#define     SPV_CHEnHousePowerMask 0x02
#define     SPV_CHEnHousePowerShift 1
#define SPV_CHOffsetHousePower                  252      // int8_t
#define SPV_CHRegImportPower                    253      // uint16_t
#define SPV_CHTypeImportPower                   255      // 3 Bits, Bit 7-5
#define     SPV_CHTypeImportPowerMask 0xE0
#define     SPV_CHTypeImportPowerShift 5
#define SPV_CHScaleImportPower                  255      // 3 Bits, Bit 4-2
#define     SPV_CHScaleImportPowerMask 0x1C
#define     SPV_CHScaleImportPowerShift 2
#define SPV_CHEnImportPower                     255      // 1 Bit, Bit 1
#define     SPV_CHEnImportPowerMask 0x02
#define     SPV_CHEnImportPowerShift 1
#define SPV_CHOffsetImportPower                 256      // int8_t
#define SPV_CHRegExportPower                    257      // uint16_t
#define SPV_CHTypeExportPower                   259      // 3 Bits, Bit 7-5
#define     SPV_CHTypeExportPowerMask 0xE0
#define     SPV_CHTypeExportPowerShift 5
#define SPV_CHScaleExportPower                  259      // 3 Bits, Bit 4-2
#define     SPV_CHScaleExportPowerMask 0x1C
#define     SPV_CHScaleExportPowerShift 2
#define SPV_CHEnExportPower                     259      // 1 Bit, Bit 1
#define     SPV_CHEnExportPowerMask 0x02
#define     SPV_CHEnExportPowerShift 1
#define SPV_CHOffsetExportPower                 260      // int8_t
#define SPV_CHRegImportTotal                    261      // uint16_t
#define SPV_CHTypeImportTotal                   263      // 3 Bits, Bit 7-5
#define     SPV_CHTypeImportTotalMask 0xE0
#define     SPV_CHTypeImportTotalShift 5
#define SPV_CHScaleImportTotal                  263      // 3 Bits, Bit 4-2
#define     SPV_CHScaleImportTotalMask 0x1C
#define     SPV_CHScaleImportTotalShift 2
#define SPV_CHEnImportTotal                     263      // 1 Bit, Bit 1
#define     SPV_CHEnImportTotalMask 0x02
#define     SPV_CHEnImportTotalShift 1
#define SPV_CHOffsetImportTotal                 264      // int8_t
#define SPV_CHRegExportTotal                    265      // uint16_t
#define SPV_CHTypeExportTotal                   267      // 3 Bits, Bit 7-5
#define     SPV_CHTypeExportTotalMask 0xE0
#define     SPV_CHTypeExportTotalShift 5
#define SPV_CHScaleExportTotal                  267      // 3 Bits, Bit 4-2
#define     SPV_CHScaleExportTotalMask 0x1C
#define     SPV_CHScaleExportTotalShift 2
#define SPV_CHEnExportTotal                     267      // 1 Bit, Bit 1
#define     SPV_CHEnExportTotalMask 0x02
#define     SPV_CHEnExportTotalShift 1
#define SPV_CHOffsetExportTotal                 268      // int8_t
#define SPV_CHRegHouseToday                     269      // uint16_t
#define SPV_CHTypeHouseToday                    271      // 3 Bits, Bit 7-5
#define     SPV_CHTypeHouseTodayMask 0xE0
#define     SPV_CHTypeHouseTodayShift 5
#define SPV_CHScaleHouseToday                   271      // 3 Bits, Bit 4-2
#define     SPV_CHScaleHouseTodayMask 0x1C
#define     SPV_CHScaleHouseTodayShift 2
#define SPV_CHEnHouseToday                      271      // 1 Bit, Bit 1
#define     SPV_CHEnHouseTodayMask 0x02
#define     SPV_CHEnHouseTodayShift 1
#define SPV_CHOffsetHouseToday                  272      // int8_t
#define SPV_CHRegImportToday                    273      // uint16_t
#define SPV_CHTypeImportToday                   275      // 3 Bits, Bit 7-5
#define     SPV_CHTypeImportTodayMask 0xE0
#define     SPV_CHTypeImportTodayShift 5
#define SPV_CHScaleImportToday                  275      // 3 Bits, Bit 4-2
#define     SPV_CHScaleImportTodayMask 0x1C
#define     SPV_CHScaleImportTodayShift 2
#define SPV_CHEnImportToday                     275      // 1 Bit, Bit 1
#define     SPV_CHEnImportTodayMask 0x02
#define     SPV_CHEnImportTodayShift 1
#define SPV_CHOffsetImportToday                 276      // int8_t
#define SPV_CHRegExportToday                    277      // uint16_t
#define SPV_CHTypeExportToday                   279      // 3 Bits, Bit 7-5
#define     SPV_CHTypeExportTodayMask 0xE0
#define     SPV_CHTypeExportTodayShift 5
#define SPV_CHScaleExportToday                  279      // 3 Bits, Bit 4-2
#define     SPV_CHScaleExportTodayMask 0x1C
#define     SPV_CHScaleExportTodayShift 2
#define SPV_CHEnExportToday                     279      // 1 Bit, Bit 1
#define     SPV_CHEnExportTodayMask 0x02
#define     SPV_CHEnExportTodayShift 1
#define SPV_CHOffsetExportToday                 280      // int8_t
#define SPV_CHRegTemperature                    281      // uint16_t
#define SPV_CHTypeTemperature                   283      // 3 Bits, Bit 7-5
#define     SPV_CHTypeTemperatureMask 0xE0
#define     SPV_CHTypeTemperatureShift 5
#define SPV_CHScaleTemperature                  283      // 3 Bits, Bit 4-2
#define     SPV_CHScaleTemperatureMask 0x1C
#define     SPV_CHScaleTemperatureShift 2
#define SPV_CHEnTemperature                     283      // 1 Bit, Bit 1
#define     SPV_CHEnTemperatureMask 0x02
#define     SPV_CHEnTemperatureShift 1
#define SPV_CHOffsetTemperature                 284      // int8_t
#define SPV_CHRegHeatsinkTemp                   285      // uint16_t
#define SPV_CHTypeHeatsinkTemp                  287      // 3 Bits, Bit 7-5
#define     SPV_CHTypeHeatsinkTempMask 0xE0
#define     SPV_CHTypeHeatsinkTempShift 5
#define SPV_CHScaleHeatsinkTemp                 287      // 3 Bits, Bit 4-2
#define     SPV_CHScaleHeatsinkTempMask 0x1C
#define     SPV_CHScaleHeatsinkTempShift 2
#define SPV_CHEnHeatsinkTemp                    287      // 1 Bit, Bit 1
#define     SPV_CHEnHeatsinkTempMask 0x02
#define     SPV_CHEnHeatsinkTempShift 1
#define SPV_CHOffsetHeatsinkTemp                288      // int8_t
#define SPV_CHRegErrorCode                      289      // uint16_t
#define SPV_CHTypeErrorCode                     291      // 3 Bits, Bit 7-5
#define     SPV_CHTypeErrorCodeMask 0xE0
#define     SPV_CHTypeErrorCodeShift 5
#define SPV_CHScaleErrorCode                    291      // 3 Bits, Bit 4-2
#define     SPV_CHScaleErrorCodeMask 0x1C
#define     SPV_CHScaleErrorCodeShift 2
#define SPV_CHEnErrorCode                       291      // 1 Bit, Bit 1
#define     SPV_CHEnErrorCodeMask 0x02
#define     SPV_CHEnErrorCodeShift 1
#define SPV_CHOffsetErrorCode                   292      // int8_t
#define SPV_CHRegOperatingHours                 293      // uint16_t
#define SPV_CHTypeOperatingHours                295      // 3 Bits, Bit 7-5
#define     SPV_CHTypeOperatingHoursMask 0xE0
#define     SPV_CHTypeOperatingHoursShift 5
#define SPV_CHScaleOperatingHours               295      // 3 Bits, Bit 4-2
#define     SPV_CHScaleOperatingHoursMask 0x1C
#define     SPV_CHScaleOperatingHoursShift 2
#define SPV_CHEnOperatingHours                  295      // 1 Bit, Bit 1
#define     SPV_CHEnOperatingHoursMask 0x02
#define     SPV_CHEnOperatingHoursShift 1
#define SPV_CHOffsetOperatingHours              296      // int8_t
#define SPV_CHRegSpare1                         297      // uint16_t
#define SPV_CHTypeSpare1                        299      // 3 Bits, Bit 7-5
#define     SPV_CHTypeSpare1Mask 0xE0
#define     SPV_CHTypeSpare1Shift 5
#define SPV_CHScaleSpare1                       299      // 3 Bits, Bit 4-2
#define     SPV_CHScaleSpare1Mask 0x1C
#define     SPV_CHScaleSpare1Shift 2
#define SPV_CHEnSpare1                          299      // 1 Bit, Bit 1
#define     SPV_CHEnSpare1Mask 0x02
#define     SPV_CHEnSpare1Shift 1
#define SPV_CHOffsetSpare1                      300      // int8_t
#define SPV_CHRegSpare2                         301      // uint16_t
#define SPV_CHTypeSpare2                        303      // 3 Bits, Bit 7-5
#define     SPV_CHTypeSpare2Mask 0xE0
#define     SPV_CHTypeSpare2Shift 5
#define SPV_CHScaleSpare2                       303      // 3 Bits, Bit 4-2
#define     SPV_CHScaleSpare2Mask 0x1C
#define     SPV_CHScaleSpare2Shift 2
#define SPV_CHEnSpare2                          303      // 1 Bit, Bit 1
#define     SPV_CHEnSpare2Mask 0x02
#define     SPV_CHEnSpare2Shift 1
#define SPV_CHOffsetSpare2                      304      // int8_t
#define SPV_CHRegSpare3                         305      // uint16_t
#define SPV_CHTypeSpare3                        307      // 3 Bits, Bit 7-5
#define     SPV_CHTypeSpare3Mask 0xE0
#define     SPV_CHTypeSpare3Shift 5
#define SPV_CHScaleSpare3                       307      // 3 Bits, Bit 4-2
#define     SPV_CHScaleSpare3Mask 0x1C
#define     SPV_CHScaleSpare3Shift 2
#define SPV_CHEnSpare3                          307      // 1 Bit, Bit 1
#define     SPV_CHEnSpare3Mask 0x02
#define     SPV_CHEnSpare3Shift 1
#define SPV_CHOffsetSpare3                      308      // int8_t
#define SPV_CHRegSpare4                         309      // uint16_t
#define SPV_CHTypeSpare4                        311      // 3 Bits, Bit 7-5
#define     SPV_CHTypeSpare4Mask 0xE0
#define     SPV_CHTypeSpare4Shift 5
#define SPV_CHScaleSpare4                       311      // 3 Bits, Bit 4-2
#define     SPV_CHScaleSpare4Mask 0x1C
#define     SPV_CHScaleSpare4Shift 2
#define SPV_CHEnSpare4                          311      // 1 Bit, Bit 1
#define     SPV_CHEnSpare4Mask 0x02
#define     SPV_CHEnSpare4Shift 1
#define SPV_CHOffsetSpare4                      312      // int8_t
#define SPV_CHSendDelayBase                     313      // 2 Bits, Bit 7-6
#define     SPV_CHSendDelayBaseMask 0xC0
#define     SPV_CHSendDelayBaseShift 6
#define SPV_CHSendDelayTime                     313      // 14 Bits, Bit 13-0
#define     SPV_CHSendDelayTimeMask 0x3FFF
#define     SPV_CHSendDelayTimeShift 0
#define SPV_CHSendChangePercent                 315      // uint8_t
#define SPV_CHProfileMsg                        316      // char*, 48 Byte
#define     SPV_CHProfileMsgLength 48
#define SPV_CHActive                            364      // 1 Bit, Bit 7
#define     SPV_CHActiveMask 0x80
#define     SPV_CHActiveShift 7
#define SPV_CHSuspended                         364      // 1 Bit, Bit 6
#define     SPV_CHSuspendedMask 0x40
#define     SPV_CHSuspendedShift 6

// IP-Adresse
#define ParamSPV_CHLoggerIp                          (knx.paramData(SPV_ParamCalcIndex(SPV_CHLoggerIp)))
#define ParamSPV_CHLoggerIpStr                       (knx.paramString(SPV_ParamCalcIndex(SPV_CHLoggerIp), SPV_CHLoggerIpLength))
// Port
#define ParamSPV_CHLoggerPort                        (knx.paramWord(SPV_ParamCalcIndex(SPV_CHLoggerPort)))
// Transportprotokoll
#define ParamSPV_CHTransport                         (knx.paramByte(SPV_ParamCalcIndex(SPV_CHTransport)))
// Geräteprofil
#define ParamSPV_CHProfile                           (knx.paramByte(SPV_ParamCalcIndex(SPV_CHProfile)))
// Logger-Seriennummer
#define ParamSPV_CHSerialMode                        (knx.paramByte(SPV_ParamCalcIndex(SPV_CHSerialMode)))
// Modbus-Slave-ID
#define ParamSPV_CHSlaveId                           (knx.paramByte(SPV_ParamCalcIndex(SPV_CHSlaveId)))
// Abfrageintervall (0 = aus)
#define ParamSPV_CHPollInterval                      (knx.paramWord(SPV_ParamCalcIndex(SPV_CHPollInterval)))
// Seriennummer
#define ParamSPV_CHLoggerSerialText                  (knx.paramData(SPV_ParamCalcIndex(SPV_CHLoggerSerialText)))
#define ParamSPV_CHLoggerSerialTextStr               (knx.paramString(SPV_ParamCalcIndex(SPV_CHLoggerSerialText), SPV_CHLoggerSerialTextLength))
// Erweiterter Modus: Register und Umrechnung anzeigen
#define ParamSPV_CHView                              ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHView)) & SPV_CHViewMask))
// Register
#define ParamSPV_CHRegPower                          (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegPower)))
// Datentyp
#define ParamSPV_CHTypePower                         ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypePower)) & SPV_CHTypePowerMask) >> SPV_CHTypePowerShift)
// Skalierung
#define ParamSPV_CHScalePower                        ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScalePower)) & SPV_CHScalePowerMask) >> SPV_CHScalePowerShift)
// Wirkleistung
#define ParamSPV_CHEnPower                           ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnPower)) & SPV_CHEnPowerMask))
// Offset
#define ParamSPV_CHOffsetPower                       ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetPower)))
// Register
#define ParamSPV_CHRegApparentPower                  (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegApparentPower)))
// Datentyp
#define ParamSPV_CHTypeApparentPower                 ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeApparentPower)) & SPV_CHTypeApparentPowerMask) >> SPV_CHTypeApparentPowerShift)
// Skalierung
#define ParamSPV_CHScaleApparentPower                ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleApparentPower)) & SPV_CHScaleApparentPowerMask) >> SPV_CHScaleApparentPowerShift)
// Scheinleistung
#define ParamSPV_CHEnApparentPower                   ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnApparentPower)) & SPV_CHEnApparentPowerMask))
// Offset
#define ParamSPV_CHOffsetApparentPower               ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetApparentPower)))
// Register
#define ParamSPV_CHRegGridVoltage                    (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegGridVoltage)))
// Datentyp
#define ParamSPV_CHTypeGridVoltage                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeGridVoltage)) & SPV_CHTypeGridVoltageMask) >> SPV_CHTypeGridVoltageShift)
// Skalierung
#define ParamSPV_CHScaleGridVoltage                  ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleGridVoltage)) & SPV_CHScaleGridVoltageMask) >> SPV_CHScaleGridVoltageShift)
// Netzspannung
#define ParamSPV_CHEnGridVoltage                     ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnGridVoltage)) & SPV_CHEnGridVoltageMask))
// Offset
#define ParamSPV_CHOffsetGridVoltage                 ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetGridVoltage)))
// Register
#define ParamSPV_CHRegGridVoltageL2                  (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegGridVoltageL2)))
// Datentyp
#define ParamSPV_CHTypeGridVoltageL2                 ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeGridVoltageL2)) & SPV_CHTypeGridVoltageL2Mask) >> SPV_CHTypeGridVoltageL2Shift)
// Skalierung
#define ParamSPV_CHScaleGridVoltageL2                ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleGridVoltageL2)) & SPV_CHScaleGridVoltageL2Mask) >> SPV_CHScaleGridVoltageL2Shift)
// Netzspannung L2
#define ParamSPV_CHEnGridVoltageL2                   ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnGridVoltageL2)) & SPV_CHEnGridVoltageL2Mask))
// Offset
#define ParamSPV_CHOffsetGridVoltageL2               ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetGridVoltageL2)))
// Register
#define ParamSPV_CHRegGridVoltageL3                  (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegGridVoltageL3)))
// Datentyp
#define ParamSPV_CHTypeGridVoltageL3                 ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeGridVoltageL3)) & SPV_CHTypeGridVoltageL3Mask) >> SPV_CHTypeGridVoltageL3Shift)
// Skalierung
#define ParamSPV_CHScaleGridVoltageL3                ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleGridVoltageL3)) & SPV_CHScaleGridVoltageL3Mask) >> SPV_CHScaleGridVoltageL3Shift)
// Netzspannung L3
#define ParamSPV_CHEnGridVoltageL3                   ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnGridVoltageL3)) & SPV_CHEnGridVoltageL3Mask))
// Offset
#define ParamSPV_CHOffsetGridVoltageL3               ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetGridVoltageL3)))
// Register
#define ParamSPV_CHRegGridCurrent                    (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegGridCurrent)))
// Datentyp
#define ParamSPV_CHTypeGridCurrent                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeGridCurrent)) & SPV_CHTypeGridCurrentMask) >> SPV_CHTypeGridCurrentShift)
// Skalierung
#define ParamSPV_CHScaleGridCurrent                  ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleGridCurrent)) & SPV_CHScaleGridCurrentMask) >> SPV_CHScaleGridCurrentShift)
// Netzstrom
#define ParamSPV_CHEnGridCurrent                     ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnGridCurrent)) & SPV_CHEnGridCurrentMask))
// Offset
#define ParamSPV_CHOffsetGridCurrent                 ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetGridCurrent)))
// Register
#define ParamSPV_CHRegGridFrequency                  (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegGridFrequency)))
// Datentyp
#define ParamSPV_CHTypeGridFrequency                 ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeGridFrequency)) & SPV_CHTypeGridFrequencyMask) >> SPV_CHTypeGridFrequencyShift)
// Skalierung
#define ParamSPV_CHScaleGridFrequency                ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleGridFrequency)) & SPV_CHScaleGridFrequencyMask) >> SPV_CHScaleGridFrequencyShift)
// Netzfrequenz
#define ParamSPV_CHEnGridFrequency                   ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnGridFrequency)) & SPV_CHEnGridFrequencyMask))
// Offset
#define ParamSPV_CHOffsetGridFrequency               ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetGridFrequency)))
// Register
#define ParamSPV_CHRegOperatingState                 (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegOperatingState)))
// Datentyp
#define ParamSPV_CHTypeOperatingState                ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeOperatingState)) & SPV_CHTypeOperatingStateMask) >> SPV_CHTypeOperatingStateShift)
// Skalierung
#define ParamSPV_CHScaleOperatingState               ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleOperatingState)) & SPV_CHScaleOperatingStateMask) >> SPV_CHScaleOperatingStateShift)
// Betriebszustand
#define ParamSPV_CHEnOperatingState                  ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnOperatingState)) & SPV_CHEnOperatingStateMask))
// Offset
#define ParamSPV_CHOffsetOperatingState              ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetOperatingState)))
// Register
#define ParamSPV_CHRegToday                          (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegToday)))
// Datentyp
#define ParamSPV_CHTypeToday                         ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeToday)) & SPV_CHTypeTodayMask) >> SPV_CHTypeTodayShift)
// Skalierung
#define ParamSPV_CHScaleToday                        ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleToday)) & SPV_CHScaleTodayMask) >> SPV_CHScaleTodayShift)
// Tagesertrag
#define ParamSPV_CHEnToday                           ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnToday)) & SPV_CHEnTodayMask))
// Offset
#define ParamSPV_CHOffsetToday                       ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetToday)))
// Register
#define ParamSPV_CHRegTotal                          (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegTotal)))
// Datentyp
#define ParamSPV_CHTypeTotal                         ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeTotal)) & SPV_CHTypeTotalMask) >> SPV_CHTypeTotalShift)
// Skalierung
#define ParamSPV_CHScaleTotal                        ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleTotal)) & SPV_CHScaleTotalMask) >> SPV_CHScaleTotalShift)
// Gesamtertrag
#define ParamSPV_CHEnTotal                           ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnTotal)) & SPV_CHEnTotalMask))
// Offset
#define ParamSPV_CHOffsetTotal                       ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetTotal)))
// Register
#define ParamSPV_CHRegMonth                          (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegMonth)))
// Datentyp
#define ParamSPV_CHTypeMonth                         ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeMonth)) & SPV_CHTypeMonthMask) >> SPV_CHTypeMonthShift)
// Skalierung
#define ParamSPV_CHScaleMonth                        ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleMonth)) & SPV_CHScaleMonthMask) >> SPV_CHScaleMonthShift)
// Monatsertrag
#define ParamSPV_CHEnMonth                           ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnMonth)) & SPV_CHEnMonthMask))
// Offset
#define ParamSPV_CHOffsetMonth                       ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetMonth)))
// Register
#define ParamSPV_CHRegYear                           (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegYear)))
// Datentyp
#define ParamSPV_CHTypeYear                          ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeYear)) & SPV_CHTypeYearMask) >> SPV_CHTypeYearShift)
// Skalierung
#define ParamSPV_CHScaleYear                         ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleYear)) & SPV_CHScaleYearMask) >> SPV_CHScaleYearShift)
// Jahresertrag
#define ParamSPV_CHEnYear                            ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnYear)) & SPV_CHEnYearMask))
// Offset
#define ParamSPV_CHOffsetYear                        ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetYear)))
// Register
#define ParamSPV_CHRegToday1                         (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegToday1)))
// Datentyp
#define ParamSPV_CHTypeToday1                        ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeToday1)) & SPV_CHTypeToday1Mask) >> SPV_CHTypeToday1Shift)
// Skalierung
#define ParamSPV_CHScaleToday1                       ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleToday1)) & SPV_CHScaleToday1Mask) >> SPV_CHScaleToday1Shift)
// Tagesertrag String 1
#define ParamSPV_CHEnToday1                          ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnToday1)) & SPV_CHEnToday1Mask))
// Offset
#define ParamSPV_CHOffsetToday1                      ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetToday1)))
// Register
#define ParamSPV_CHRegToday2                         (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegToday2)))
// Datentyp
#define ParamSPV_CHTypeToday2                        ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeToday2)) & SPV_CHTypeToday2Mask) >> SPV_CHTypeToday2Shift)
// Skalierung
#define ParamSPV_CHScaleToday2                       ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleToday2)) & SPV_CHScaleToday2Mask) >> SPV_CHScaleToday2Shift)
// Tagesertrag String 2
#define ParamSPV_CHEnToday2                          ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnToday2)) & SPV_CHEnToday2Mask))
// Offset
#define ParamSPV_CHOffsetToday2                      ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetToday2)))
// Register
#define ParamSPV_CHRegTotal1                         (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegTotal1)))
// Datentyp
#define ParamSPV_CHTypeTotal1                        ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeTotal1)) & SPV_CHTypeTotal1Mask) >> SPV_CHTypeTotal1Shift)
// Skalierung
#define ParamSPV_CHScaleTotal1                       ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleTotal1)) & SPV_CHScaleTotal1Mask) >> SPV_CHScaleTotal1Shift)
// Gesamtertrag String 1
#define ParamSPV_CHEnTotal1                          ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnTotal1)) & SPV_CHEnTotal1Mask))
// Offset
#define ParamSPV_CHOffsetTotal1                      ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetTotal1)))
// Register
#define ParamSPV_CHRegTotal2                         (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegTotal2)))
// Datentyp
#define ParamSPV_CHTypeTotal2                        ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeTotal2)) & SPV_CHTypeTotal2Mask) >> SPV_CHTypeTotal2Shift)
// Skalierung
#define ParamSPV_CHScaleTotal2                       ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleTotal2)) & SPV_CHScaleTotal2Mask) >> SPV_CHScaleTotal2Shift)
// Gesamtertrag String 2
#define ParamSPV_CHEnTotal2                          ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnTotal2)) & SPV_CHEnTotal2Mask))
// Offset
#define ParamSPV_CHOffsetTotal2                      ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetTotal2)))
// Register
#define ParamSPV_CHRegPv1Voltage                     (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegPv1Voltage)))
// Datentyp
#define ParamSPV_CHTypePv1Voltage                    ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypePv1Voltage)) & SPV_CHTypePv1VoltageMask) >> SPV_CHTypePv1VoltageShift)
// Skalierung
#define ParamSPV_CHScalePv1Voltage                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScalePv1Voltage)) & SPV_CHScalePv1VoltageMask) >> SPV_CHScalePv1VoltageShift)
// PV1 Spannung
#define ParamSPV_CHEnPv1Voltage                      ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnPv1Voltage)) & SPV_CHEnPv1VoltageMask))
// Offset
#define ParamSPV_CHOffsetPv1Voltage                  ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetPv1Voltage)))
// Register
#define ParamSPV_CHRegPv1Current                     (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegPv1Current)))
// Datentyp
#define ParamSPV_CHTypePv1Current                    ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypePv1Current)) & SPV_CHTypePv1CurrentMask) >> SPV_CHTypePv1CurrentShift)
// Skalierung
#define ParamSPV_CHScalePv1Current                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScalePv1Current)) & SPV_CHScalePv1CurrentMask) >> SPV_CHScalePv1CurrentShift)
// PV1 Strom
#define ParamSPV_CHEnPv1Current                      ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnPv1Current)) & SPV_CHEnPv1CurrentMask))
// Offset
#define ParamSPV_CHOffsetPv1Current                  ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetPv1Current)))
// Register
#define ParamSPV_CHRegPv1Power                       (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegPv1Power)))
// Datentyp
#define ParamSPV_CHTypePv1Power                      ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypePv1Power)) & SPV_CHTypePv1PowerMask) >> SPV_CHTypePv1PowerShift)
// Skalierung
#define ParamSPV_CHScalePv1Power                     ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScalePv1Power)) & SPV_CHScalePv1PowerMask) >> SPV_CHScalePv1PowerShift)
// PV1 Leistung
#define ParamSPV_CHEnPv1Power                        ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnPv1Power)) & SPV_CHEnPv1PowerMask))
// Offset
#define ParamSPV_CHOffsetPv1Power                    ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetPv1Power)))
// Register
#define ParamSPV_CHRegPv1Today                       (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegPv1Today)))
// Datentyp
#define ParamSPV_CHTypePv1Today                      ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypePv1Today)) & SPV_CHTypePv1TodayMask) >> SPV_CHTypePv1TodayShift)
// Skalierung
#define ParamSPV_CHScalePv1Today                     ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScalePv1Today)) & SPV_CHScalePv1TodayMask) >> SPV_CHScalePv1TodayShift)
// PV1 Tagesertrag
#define ParamSPV_CHEnPv1Today                        ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnPv1Today)) & SPV_CHEnPv1TodayMask))
// Offset
#define ParamSPV_CHOffsetPv1Today                    ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetPv1Today)))
// Register
#define ParamSPV_CHRegPv2Voltage                     (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegPv2Voltage)))
// Datentyp
#define ParamSPV_CHTypePv2Voltage                    ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypePv2Voltage)) & SPV_CHTypePv2VoltageMask) >> SPV_CHTypePv2VoltageShift)
// Skalierung
#define ParamSPV_CHScalePv2Voltage                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScalePv2Voltage)) & SPV_CHScalePv2VoltageMask) >> SPV_CHScalePv2VoltageShift)
// PV2 Spannung
#define ParamSPV_CHEnPv2Voltage                      ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnPv2Voltage)) & SPV_CHEnPv2VoltageMask))
// Offset
#define ParamSPV_CHOffsetPv2Voltage                  ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetPv2Voltage)))
// Register
#define ParamSPV_CHRegPv2Current                     (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegPv2Current)))
// Datentyp
#define ParamSPV_CHTypePv2Current                    ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypePv2Current)) & SPV_CHTypePv2CurrentMask) >> SPV_CHTypePv2CurrentShift)
// Skalierung
#define ParamSPV_CHScalePv2Current                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScalePv2Current)) & SPV_CHScalePv2CurrentMask) >> SPV_CHScalePv2CurrentShift)
// PV2 Strom
#define ParamSPV_CHEnPv2Current                      ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnPv2Current)) & SPV_CHEnPv2CurrentMask))
// Offset
#define ParamSPV_CHOffsetPv2Current                  ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetPv2Current)))
// Register
#define ParamSPV_CHRegPv2Power                       (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegPv2Power)))
// Datentyp
#define ParamSPV_CHTypePv2Power                      ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypePv2Power)) & SPV_CHTypePv2PowerMask) >> SPV_CHTypePv2PowerShift)
// Skalierung
#define ParamSPV_CHScalePv2Power                     ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScalePv2Power)) & SPV_CHScalePv2PowerMask) >> SPV_CHScalePv2PowerShift)
// PV2 Leistung
#define ParamSPV_CHEnPv2Power                        ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnPv2Power)) & SPV_CHEnPv2PowerMask))
// Offset
#define ParamSPV_CHOffsetPv2Power                    ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetPv2Power)))
// Register
#define ParamSPV_CHRegPv2Today                       (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegPv2Today)))
// Datentyp
#define ParamSPV_CHTypePv2Today                      ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypePv2Today)) & SPV_CHTypePv2TodayMask) >> SPV_CHTypePv2TodayShift)
// Skalierung
#define ParamSPV_CHScalePv2Today                     ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScalePv2Today)) & SPV_CHScalePv2TodayMask) >> SPV_CHScalePv2TodayShift)
// PV2 Tagesertrag
#define ParamSPV_CHEnPv2Today                        ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnPv2Today)) & SPV_CHEnPv2TodayMask))
// Offset
#define ParamSPV_CHOffsetPv2Today                    ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetPv2Today)))
// Register
#define ParamSPV_CHRegPv3Voltage                     (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegPv3Voltage)))
// Datentyp
#define ParamSPV_CHTypePv3Voltage                    ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypePv3Voltage)) & SPV_CHTypePv3VoltageMask) >> SPV_CHTypePv3VoltageShift)
// Skalierung
#define ParamSPV_CHScalePv3Voltage                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScalePv3Voltage)) & SPV_CHScalePv3VoltageMask) >> SPV_CHScalePv3VoltageShift)
// PV3 Spannung
#define ParamSPV_CHEnPv3Voltage                      ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnPv3Voltage)) & SPV_CHEnPv3VoltageMask))
// Offset
#define ParamSPV_CHOffsetPv3Voltage                  ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetPv3Voltage)))
// Register
#define ParamSPV_CHRegPv3Current                     (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegPv3Current)))
// Datentyp
#define ParamSPV_CHTypePv3Current                    ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypePv3Current)) & SPV_CHTypePv3CurrentMask) >> SPV_CHTypePv3CurrentShift)
// Skalierung
#define ParamSPV_CHScalePv3Current                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScalePv3Current)) & SPV_CHScalePv3CurrentMask) >> SPV_CHScalePv3CurrentShift)
// PV3 Strom
#define ParamSPV_CHEnPv3Current                      ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnPv3Current)) & SPV_CHEnPv3CurrentMask))
// Offset
#define ParamSPV_CHOffsetPv3Current                  ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetPv3Current)))
// Register
#define ParamSPV_CHRegPv3Power                       (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegPv3Power)))
// Datentyp
#define ParamSPV_CHTypePv3Power                      ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypePv3Power)) & SPV_CHTypePv3PowerMask) >> SPV_CHTypePv3PowerShift)
// Skalierung
#define ParamSPV_CHScalePv3Power                     ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScalePv3Power)) & SPV_CHScalePv3PowerMask) >> SPV_CHScalePv3PowerShift)
// PV3 Leistung
#define ParamSPV_CHEnPv3Power                        ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnPv3Power)) & SPV_CHEnPv3PowerMask))
// Offset
#define ParamSPV_CHOffsetPv3Power                    ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetPv3Power)))
// Register
#define ParamSPV_CHRegPv3Today                       (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegPv3Today)))
// Datentyp
#define ParamSPV_CHTypePv3Today                      ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypePv3Today)) & SPV_CHTypePv3TodayMask) >> SPV_CHTypePv3TodayShift)
// Skalierung
#define ParamSPV_CHScalePv3Today                     ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScalePv3Today)) & SPV_CHScalePv3TodayMask) >> SPV_CHScalePv3TodayShift)
// PV3 Tagesertrag
#define ParamSPV_CHEnPv3Today                        ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnPv3Today)) & SPV_CHEnPv3TodayMask))
// Offset
#define ParamSPV_CHOffsetPv3Today                    ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetPv3Today)))
// Register
#define ParamSPV_CHRegPv4Voltage                     (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegPv4Voltage)))
// Datentyp
#define ParamSPV_CHTypePv4Voltage                    ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypePv4Voltage)) & SPV_CHTypePv4VoltageMask) >> SPV_CHTypePv4VoltageShift)
// Skalierung
#define ParamSPV_CHScalePv4Voltage                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScalePv4Voltage)) & SPV_CHScalePv4VoltageMask) >> SPV_CHScalePv4VoltageShift)
// PV4 Spannung
#define ParamSPV_CHEnPv4Voltage                      ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnPv4Voltage)) & SPV_CHEnPv4VoltageMask))
// Offset
#define ParamSPV_CHOffsetPv4Voltage                  ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetPv4Voltage)))
// Register
#define ParamSPV_CHRegPv4Current                     (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegPv4Current)))
// Datentyp
#define ParamSPV_CHTypePv4Current                    ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypePv4Current)) & SPV_CHTypePv4CurrentMask) >> SPV_CHTypePv4CurrentShift)
// Skalierung
#define ParamSPV_CHScalePv4Current                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScalePv4Current)) & SPV_CHScalePv4CurrentMask) >> SPV_CHScalePv4CurrentShift)
// PV4 Strom
#define ParamSPV_CHEnPv4Current                      ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnPv4Current)) & SPV_CHEnPv4CurrentMask))
// Offset
#define ParamSPV_CHOffsetPv4Current                  ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetPv4Current)))
// Register
#define ParamSPV_CHRegPv4Power                       (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegPv4Power)))
// Datentyp
#define ParamSPV_CHTypePv4Power                      ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypePv4Power)) & SPV_CHTypePv4PowerMask) >> SPV_CHTypePv4PowerShift)
// Skalierung
#define ParamSPV_CHScalePv4Power                     ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScalePv4Power)) & SPV_CHScalePv4PowerMask) >> SPV_CHScalePv4PowerShift)
// PV4 Leistung
#define ParamSPV_CHEnPv4Power                        ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnPv4Power)) & SPV_CHEnPv4PowerMask))
// Offset
#define ParamSPV_CHOffsetPv4Power                    ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetPv4Power)))
// Register
#define ParamSPV_CHRegPv4Today                       (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegPv4Today)))
// Datentyp
#define ParamSPV_CHTypePv4Today                      ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypePv4Today)) & SPV_CHTypePv4TodayMask) >> SPV_CHTypePv4TodayShift)
// Skalierung
#define ParamSPV_CHScalePv4Today                     ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScalePv4Today)) & SPV_CHScalePv4TodayMask) >> SPV_CHScalePv4TodayShift)
// PV4 Tagesertrag
#define ParamSPV_CHEnPv4Today                        ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnPv4Today)) & SPV_CHEnPv4TodayMask))
// Offset
#define ParamSPV_CHOffsetPv4Today                    ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetPv4Today)))
// Register
#define ParamSPV_CHRegSoc                            (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegSoc)))
// Datentyp
#define ParamSPV_CHTypeSoc                           ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeSoc)) & SPV_CHTypeSocMask) >> SPV_CHTypeSocShift)
// Skalierung
#define ParamSPV_CHScaleSoc                          ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleSoc)) & SPV_CHScaleSocMask) >> SPV_CHScaleSocShift)
// Batterie Ladezustand
#define ParamSPV_CHEnSoc                             ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnSoc)) & SPV_CHEnSocMask))
// Offset
#define ParamSPV_CHOffsetSoc                         ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetSoc)))
// Register
#define ParamSPV_CHRegSoh                            (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegSoh)))
// Datentyp
#define ParamSPV_CHTypeSoh                           ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeSoh)) & SPV_CHTypeSohMask) >> SPV_CHTypeSohShift)
// Skalierung
#define ParamSPV_CHScaleSoh                          ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleSoh)) & SPV_CHScaleSohMask) >> SPV_CHScaleSohShift)
// Batterie Alterungszustand
#define ParamSPV_CHEnSoh                             ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnSoh)) & SPV_CHEnSohMask))
// Offset
#define ParamSPV_CHOffsetSoh                         ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetSoh)))
// Register
#define ParamSPV_CHRegBattVoltage                    (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegBattVoltage)))
// Datentyp
#define ParamSPV_CHTypeBattVoltage                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeBattVoltage)) & SPV_CHTypeBattVoltageMask) >> SPV_CHTypeBattVoltageShift)
// Skalierung
#define ParamSPV_CHScaleBattVoltage                  ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleBattVoltage)) & SPV_CHScaleBattVoltageMask) >> SPV_CHScaleBattVoltageShift)
// Batteriespannung
#define ParamSPV_CHEnBattVoltage                     ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnBattVoltage)) & SPV_CHEnBattVoltageMask))
// Offset
#define ParamSPV_CHOffsetBattVoltage                 ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetBattVoltage)))
// Register
#define ParamSPV_CHRegBattCurrent                    (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegBattCurrent)))
// Datentyp
#define ParamSPV_CHTypeBattCurrent                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeBattCurrent)) & SPV_CHTypeBattCurrentMask) >> SPV_CHTypeBattCurrentShift)
// Skalierung
#define ParamSPV_CHScaleBattCurrent                  ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleBattCurrent)) & SPV_CHScaleBattCurrentMask) >> SPV_CHScaleBattCurrentShift)
// Batteriestrom
#define ParamSPV_CHEnBattCurrent                     ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnBattCurrent)) & SPV_CHEnBattCurrentMask))
// Offset
#define ParamSPV_CHOffsetBattCurrent                 ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetBattCurrent)))
// Register
#define ParamSPV_CHRegBattPower                      (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegBattPower)))
// Datentyp
#define ParamSPV_CHTypeBattPower                     ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeBattPower)) & SPV_CHTypeBattPowerMask) >> SPV_CHTypeBattPowerShift)
// Skalierung
#define ParamSPV_CHScaleBattPower                    ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleBattPower)) & SPV_CHScaleBattPowerMask) >> SPV_CHScaleBattPowerShift)
// Batterieleistung
#define ParamSPV_CHEnBattPower                       ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnBattPower)) & SPV_CHEnBattPowerMask))
// Offset
#define ParamSPV_CHOffsetBattPower                   ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetBattPower)))
// Register
#define ParamSPV_CHRegBattTemperature                (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegBattTemperature)))
// Datentyp
#define ParamSPV_CHTypeBattTemperature               ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeBattTemperature)) & SPV_CHTypeBattTemperatureMask) >> SPV_CHTypeBattTemperatureShift)
// Skalierung
#define ParamSPV_CHScaleBattTemperature              ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleBattTemperature)) & SPV_CHScaleBattTemperatureMask) >> SPV_CHScaleBattTemperatureShift)
// Batterietemperatur
#define ParamSPV_CHEnBattTemperature                 ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnBattTemperature)) & SPV_CHEnBattTemperatureMask))
// Offset
#define ParamSPV_CHOffsetBattTemperature             ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetBattTemperature)))
// Register
#define ParamSPV_CHRegCycleTimes                     (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegCycleTimes)))
// Datentyp
#define ParamSPV_CHTypeCycleTimes                    ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeCycleTimes)) & SPV_CHTypeCycleTimesMask) >> SPV_CHTypeCycleTimesShift)
// Skalierung
#define ParamSPV_CHScaleCycleTimes                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleCycleTimes)) & SPV_CHScaleCycleTimesMask) >> SPV_CHScaleCycleTimesShift)
// Ladezyklen
#define ParamSPV_CHEnCycleTimes                      ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnCycleTimes)) & SPV_CHEnCycleTimesMask))
// Offset
#define ParamSPV_CHOffsetCycleTimes                  ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetCycleTimes)))
// Register
#define ParamSPV_CHRegRemainingCapacity              (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegRemainingCapacity)))
// Datentyp
#define ParamSPV_CHTypeRemainingCapacity             ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeRemainingCapacity)) & SPV_CHTypeRemainingCapacityMask) >> SPV_CHTypeRemainingCapacityShift)
// Skalierung
#define ParamSPV_CHScaleRemainingCapacity            ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleRemainingCapacity)) & SPV_CHScaleRemainingCapacityMask) >> SPV_CHScaleRemainingCapacityShift)
// Restkapazität
#define ParamSPV_CHEnRemainingCapacity               ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnRemainingCapacity)) & SPV_CHEnRemainingCapacityMask))
// Offset
#define ParamSPV_CHOffsetRemainingCapacity           ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetRemainingCapacity)))
// Register
#define ParamSPV_CHRegTodayCharge                    (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegTodayCharge)))
// Datentyp
#define ParamSPV_CHTypeTodayCharge                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeTodayCharge)) & SPV_CHTypeTodayChargeMask) >> SPV_CHTypeTodayChargeShift)
// Skalierung
#define ParamSPV_CHScaleTodayCharge                  ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleTodayCharge)) & SPV_CHScaleTodayChargeMask) >> SPV_CHScaleTodayChargeShift)
// Heute geladen
#define ParamSPV_CHEnTodayCharge                     ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnTodayCharge)) & SPV_CHEnTodayChargeMask))
// Offset
#define ParamSPV_CHOffsetTodayCharge                 ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetTodayCharge)))
// Register
#define ParamSPV_CHRegTodayDischarge                 (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegTodayDischarge)))
// Datentyp
#define ParamSPV_CHTypeTodayDischarge                ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeTodayDischarge)) & SPV_CHTypeTodayDischargeMask) >> SPV_CHTypeTodayDischargeShift)
// Skalierung
#define ParamSPV_CHScaleTodayDischarge               ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleTodayDischarge)) & SPV_CHScaleTodayDischargeMask) >> SPV_CHScaleTodayDischargeShift)
// Heute entladen
#define ParamSPV_CHEnTodayDischarge                  ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnTodayDischarge)) & SPV_CHEnTodayDischargeMask))
// Offset
#define ParamSPV_CHOffsetTodayDischarge              ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetTodayDischarge)))
// Register
#define ParamSPV_CHRegTotalCharge                    (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegTotalCharge)))
// Datentyp
#define ParamSPV_CHTypeTotalCharge                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeTotalCharge)) & SPV_CHTypeTotalChargeMask) >> SPV_CHTypeTotalChargeShift)
// Skalierung
#define ParamSPV_CHScaleTotalCharge                  ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleTotalCharge)) & SPV_CHScaleTotalChargeMask) >> SPV_CHScaleTotalChargeShift)
// Gesamt geladen
#define ParamSPV_CHEnTotalCharge                     ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnTotalCharge)) & SPV_CHEnTotalChargeMask))
// Offset
#define ParamSPV_CHOffsetTotalCharge                 ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetTotalCharge)))
// Register
#define ParamSPV_CHRegTotalDischarge                 (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegTotalDischarge)))
// Datentyp
#define ParamSPV_CHTypeTotalDischarge                ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeTotalDischarge)) & SPV_CHTypeTotalDischargeMask) >> SPV_CHTypeTotalDischargeShift)
// Skalierung
#define ParamSPV_CHScaleTotalDischarge               ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleTotalDischarge)) & SPV_CHScaleTotalDischargeMask) >> SPV_CHScaleTotalDischargeShift)
// Gesamt entladen
#define ParamSPV_CHEnTotalDischarge                  ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnTotalDischarge)) & SPV_CHEnTotalDischargeMask))
// Offset
#define ParamSPV_CHOffsetTotalDischarge              ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetTotalDischarge)))
// Register
#define ParamSPV_CHRegCellVoltageMax                 (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegCellVoltageMax)))
// Datentyp
#define ParamSPV_CHTypeCellVoltageMax                ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeCellVoltageMax)) & SPV_CHTypeCellVoltageMaxMask) >> SPV_CHTypeCellVoltageMaxShift)
// Skalierung
#define ParamSPV_CHScaleCellVoltageMax               ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleCellVoltageMax)) & SPV_CHScaleCellVoltageMaxMask) >> SPV_CHScaleCellVoltageMaxShift)
// Zellspannung maximal
#define ParamSPV_CHEnCellVoltageMax                  ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnCellVoltageMax)) & SPV_CHEnCellVoltageMaxMask))
// Offset
#define ParamSPV_CHOffsetCellVoltageMax              ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetCellVoltageMax)))
// Register
#define ParamSPV_CHRegCellVoltageMin                 (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegCellVoltageMin)))
// Datentyp
#define ParamSPV_CHTypeCellVoltageMin                ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeCellVoltageMin)) & SPV_CHTypeCellVoltageMinMask) >> SPV_CHTypeCellVoltageMinShift)
// Skalierung
#define ParamSPV_CHScaleCellVoltageMin               ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleCellVoltageMin)) & SPV_CHScaleCellVoltageMinMask) >> SPV_CHScaleCellVoltageMinShift)
// Zellspannung minimal
#define ParamSPV_CHEnCellVoltageMin                  ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnCellVoltageMin)) & SPV_CHEnCellVoltageMinMask))
// Offset
#define ParamSPV_CHOffsetCellVoltageMin              ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetCellVoltageMin)))
// Register
#define ParamSPV_CHRegCellTempMax                    (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegCellTempMax)))
// Datentyp
#define ParamSPV_CHTypeCellTempMax                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeCellTempMax)) & SPV_CHTypeCellTempMaxMask) >> SPV_CHTypeCellTempMaxShift)
// Skalierung
#define ParamSPV_CHScaleCellTempMax                  ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleCellTempMax)) & SPV_CHScaleCellTempMaxMask) >> SPV_CHScaleCellTempMaxShift)
// Zelltemperatur maximal
#define ParamSPV_CHEnCellTempMax                     ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnCellTempMax)) & SPV_CHEnCellTempMaxMask))
// Offset
#define ParamSPV_CHOffsetCellTempMax                 ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetCellTempMax)))
// Register
#define ParamSPV_CHRegCellTempMin                    (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegCellTempMin)))
// Datentyp
#define ParamSPV_CHTypeCellTempMin                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeCellTempMin)) & SPV_CHTypeCellTempMinMask) >> SPV_CHTypeCellTempMinShift)
// Skalierung
#define ParamSPV_CHScaleCellTempMin                  ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleCellTempMin)) & SPV_CHScaleCellTempMinMask) >> SPV_CHScaleCellTempMinShift)
// Zelltemperatur minimal
#define ParamSPV_CHEnCellTempMin                     ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnCellTempMin)) & SPV_CHEnCellTempMinMask))
// Offset
#define ParamSPV_CHOffsetCellTempMin                 ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetCellTempMin)))
// Register
#define ParamSPV_CHRegHousePower                     (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegHousePower)))
// Datentyp
#define ParamSPV_CHTypeHousePower                    ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeHousePower)) & SPV_CHTypeHousePowerMask) >> SPV_CHTypeHousePowerShift)
// Skalierung
#define ParamSPV_CHScaleHousePower                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleHousePower)) & SPV_CHScaleHousePowerMask) >> SPV_CHScaleHousePowerShift)
// Hausverbrauch
#define ParamSPV_CHEnHousePower                      ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnHousePower)) & SPV_CHEnHousePowerMask))
// Offset
#define ParamSPV_CHOffsetHousePower                  ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetHousePower)))
// Register
#define ParamSPV_CHRegImportPower                    (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegImportPower)))
// Datentyp
#define ParamSPV_CHTypeImportPower                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeImportPower)) & SPV_CHTypeImportPowerMask) >> SPV_CHTypeImportPowerShift)
// Skalierung
#define ParamSPV_CHScaleImportPower                  ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleImportPower)) & SPV_CHScaleImportPowerMask) >> SPV_CHScaleImportPowerShift)
// Netzbezug Leistung
#define ParamSPV_CHEnImportPower                     ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnImportPower)) & SPV_CHEnImportPowerMask))
// Offset
#define ParamSPV_CHOffsetImportPower                 ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetImportPower)))
// Register
#define ParamSPV_CHRegExportPower                    (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegExportPower)))
// Datentyp
#define ParamSPV_CHTypeExportPower                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeExportPower)) & SPV_CHTypeExportPowerMask) >> SPV_CHTypeExportPowerShift)
// Skalierung
#define ParamSPV_CHScaleExportPower                  ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleExportPower)) & SPV_CHScaleExportPowerMask) >> SPV_CHScaleExportPowerShift)
// Einspeisung Leistung
#define ParamSPV_CHEnExportPower                     ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnExportPower)) & SPV_CHEnExportPowerMask))
// Offset
#define ParamSPV_CHOffsetExportPower                 ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetExportPower)))
// Register
#define ParamSPV_CHRegImportTotal                    (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegImportTotal)))
// Datentyp
#define ParamSPV_CHTypeImportTotal                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeImportTotal)) & SPV_CHTypeImportTotalMask) >> SPV_CHTypeImportTotalShift)
// Skalierung
#define ParamSPV_CHScaleImportTotal                  ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleImportTotal)) & SPV_CHScaleImportTotalMask) >> SPV_CHScaleImportTotalShift)
// Netzbezug gesamt
#define ParamSPV_CHEnImportTotal                     ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnImportTotal)) & SPV_CHEnImportTotalMask))
// Offset
#define ParamSPV_CHOffsetImportTotal                 ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetImportTotal)))
// Register
#define ParamSPV_CHRegExportTotal                    (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegExportTotal)))
// Datentyp
#define ParamSPV_CHTypeExportTotal                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeExportTotal)) & SPV_CHTypeExportTotalMask) >> SPV_CHTypeExportTotalShift)
// Skalierung
#define ParamSPV_CHScaleExportTotal                  ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleExportTotal)) & SPV_CHScaleExportTotalMask) >> SPV_CHScaleExportTotalShift)
// Einspeisung gesamt
#define ParamSPV_CHEnExportTotal                     ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnExportTotal)) & SPV_CHEnExportTotalMask))
// Offset
#define ParamSPV_CHOffsetExportTotal                 ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetExportTotal)))
// Register
#define ParamSPV_CHRegHouseToday                     (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegHouseToday)))
// Datentyp
#define ParamSPV_CHTypeHouseToday                    ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeHouseToday)) & SPV_CHTypeHouseTodayMask) >> SPV_CHTypeHouseTodayShift)
// Skalierung
#define ParamSPV_CHScaleHouseToday                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleHouseToday)) & SPV_CHScaleHouseTodayMask) >> SPV_CHScaleHouseTodayShift)
// Hausverbrauch heute
#define ParamSPV_CHEnHouseToday                      ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnHouseToday)) & SPV_CHEnHouseTodayMask))
// Offset
#define ParamSPV_CHOffsetHouseToday                  ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetHouseToday)))
// Register
#define ParamSPV_CHRegImportToday                    (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegImportToday)))
// Datentyp
#define ParamSPV_CHTypeImportToday                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeImportToday)) & SPV_CHTypeImportTodayMask) >> SPV_CHTypeImportTodayShift)
// Skalierung
#define ParamSPV_CHScaleImportToday                  ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleImportToday)) & SPV_CHScaleImportTodayMask) >> SPV_CHScaleImportTodayShift)
// Netzbezug heute
#define ParamSPV_CHEnImportToday                     ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnImportToday)) & SPV_CHEnImportTodayMask))
// Offset
#define ParamSPV_CHOffsetImportToday                 ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetImportToday)))
// Register
#define ParamSPV_CHRegExportToday                    (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegExportToday)))
// Datentyp
#define ParamSPV_CHTypeExportToday                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeExportToday)) & SPV_CHTypeExportTodayMask) >> SPV_CHTypeExportTodayShift)
// Skalierung
#define ParamSPV_CHScaleExportToday                  ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleExportToday)) & SPV_CHScaleExportTodayMask) >> SPV_CHScaleExportTodayShift)
// Einspeisung heute
#define ParamSPV_CHEnExportToday                     ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnExportToday)) & SPV_CHEnExportTodayMask))
// Offset
#define ParamSPV_CHOffsetExportToday                 ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetExportToday)))
// Register
#define ParamSPV_CHRegTemperature                    (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegTemperature)))
// Datentyp
#define ParamSPV_CHTypeTemperature                   ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeTemperature)) & SPV_CHTypeTemperatureMask) >> SPV_CHTypeTemperatureShift)
// Skalierung
#define ParamSPV_CHScaleTemperature                  ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleTemperature)) & SPV_CHScaleTemperatureMask) >> SPV_CHScaleTemperatureShift)
// Gerätetemperatur
#define ParamSPV_CHEnTemperature                     ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnTemperature)) & SPV_CHEnTemperatureMask))
// Offset
#define ParamSPV_CHOffsetTemperature                 ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetTemperature)))
// Register
#define ParamSPV_CHRegHeatsinkTemp                   (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegHeatsinkTemp)))
// Datentyp
#define ParamSPV_CHTypeHeatsinkTemp                  ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeHeatsinkTemp)) & SPV_CHTypeHeatsinkTempMask) >> SPV_CHTypeHeatsinkTempShift)
// Skalierung
#define ParamSPV_CHScaleHeatsinkTemp                 ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleHeatsinkTemp)) & SPV_CHScaleHeatsinkTempMask) >> SPV_CHScaleHeatsinkTempShift)
// Kühlkörpertemperatur
#define ParamSPV_CHEnHeatsinkTemp                    ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnHeatsinkTemp)) & SPV_CHEnHeatsinkTempMask))
// Offset
#define ParamSPV_CHOffsetHeatsinkTemp                ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetHeatsinkTemp)))
// Register
#define ParamSPV_CHRegErrorCode                      (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegErrorCode)))
// Datentyp
#define ParamSPV_CHTypeErrorCode                     ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeErrorCode)) & SPV_CHTypeErrorCodeMask) >> SPV_CHTypeErrorCodeShift)
// Skalierung
#define ParamSPV_CHScaleErrorCode                    ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleErrorCode)) & SPV_CHScaleErrorCodeMask) >> SPV_CHScaleErrorCodeShift)
// Fehlercode
#define ParamSPV_CHEnErrorCode                       ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnErrorCode)) & SPV_CHEnErrorCodeMask))
// Offset
#define ParamSPV_CHOffsetErrorCode                   ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetErrorCode)))
// Register
#define ParamSPV_CHRegOperatingHours                 (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegOperatingHours)))
// Datentyp
#define ParamSPV_CHTypeOperatingHours                ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeOperatingHours)) & SPV_CHTypeOperatingHoursMask) >> SPV_CHTypeOperatingHoursShift)
// Skalierung
#define ParamSPV_CHScaleOperatingHours               ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleOperatingHours)) & SPV_CHScaleOperatingHoursMask) >> SPV_CHScaleOperatingHoursShift)
// Betriebsstunden
#define ParamSPV_CHEnOperatingHours                  ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnOperatingHours)) & SPV_CHEnOperatingHoursMask))
// Offset
#define ParamSPV_CHOffsetOperatingHours              ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetOperatingHours)))
// Register
#define ParamSPV_CHRegSpare1                         (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegSpare1)))
// Datentyp
#define ParamSPV_CHTypeSpare1                        ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeSpare1)) & SPV_CHTypeSpare1Mask) >> SPV_CHTypeSpare1Shift)
// Skalierung
#define ParamSPV_CHScaleSpare1                       ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleSpare1)) & SPV_CHScaleSpare1Mask) >> SPV_CHScaleSpare1Shift)
// Freier Wert 1
#define ParamSPV_CHEnSpare1                          ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnSpare1)) & SPV_CHEnSpare1Mask))
// Offset
#define ParamSPV_CHOffsetSpare1                      ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetSpare1)))
// Register
#define ParamSPV_CHRegSpare2                         (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegSpare2)))
// Datentyp
#define ParamSPV_CHTypeSpare2                        ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeSpare2)) & SPV_CHTypeSpare2Mask) >> SPV_CHTypeSpare2Shift)
// Skalierung
#define ParamSPV_CHScaleSpare2                       ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleSpare2)) & SPV_CHScaleSpare2Mask) >> SPV_CHScaleSpare2Shift)
// Freier Wert 2
#define ParamSPV_CHEnSpare2                          ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnSpare2)) & SPV_CHEnSpare2Mask))
// Offset
#define ParamSPV_CHOffsetSpare2                      ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetSpare2)))
// Register
#define ParamSPV_CHRegSpare3                         (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegSpare3)))
// Datentyp
#define ParamSPV_CHTypeSpare3                        ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeSpare3)) & SPV_CHTypeSpare3Mask) >> SPV_CHTypeSpare3Shift)
// Skalierung
#define ParamSPV_CHScaleSpare3                       ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleSpare3)) & SPV_CHScaleSpare3Mask) >> SPV_CHScaleSpare3Shift)
// Freier Wert 3
#define ParamSPV_CHEnSpare3                          ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnSpare3)) & SPV_CHEnSpare3Mask))
// Offset
#define ParamSPV_CHOffsetSpare3                      ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetSpare3)))
// Register
#define ParamSPV_CHRegSpare4                         (knx.paramWord(SPV_ParamCalcIndex(SPV_CHRegSpare4)))
// Datentyp
#define ParamSPV_CHTypeSpare4                        ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHTypeSpare4)) & SPV_CHTypeSpare4Mask) >> SPV_CHTypeSpare4Shift)
// Skalierung
#define ParamSPV_CHScaleSpare4                       ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHScaleSpare4)) & SPV_CHScaleSpare4Mask) >> SPV_CHScaleSpare4Shift)
// Freier Wert 4
#define ParamSPV_CHEnSpare4                          ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHEnSpare4)) & SPV_CHEnSpare4Mask))
// Offset
#define ParamSPV_CHOffsetSpare4                      ((int8_t)knx.paramByte(SPV_ParamCalcIndex(SPV_CHOffsetSpare4)))
// Zeitbasis
#define ParamSPV_CHSendDelayBase                     ((knx.paramByte(SPV_ParamCalcIndex(SPV_CHSendDelayBase)) & SPV_CHSendDelayBaseMask) >> SPV_CHSendDelayBaseShift)
// zyklisch senden alle (0 = aus)
#define ParamSPV_CHSendDelayTime                     (knx.paramWord(SPV_ParamCalcIndex(SPV_CHSendDelayTime)) & SPV_CHSendDelayTimeMask)
// zyklisch senden alle (0 = aus) (in Millisekunden)
#define ParamSPV_CHSendDelayTimeMS                   (paramDelay(knx.paramWord(SPV_ParamCalcIndex(SPV_CHSendDelayTime))))
// zusätzlich bei Änderung um (0 = aus)
#define ParamSPV_CHSendChangePercent                 (knx.paramByte(SPV_ParamCalcIndex(SPV_CHSendChangePercent)))
// Meldung
#define ParamSPV_CHProfileMsg                        (knx.paramData(SPV_ParamCalcIndex(SPV_CHProfileMsg)))
#define ParamSPV_CHProfileMsgStr                     (knx.paramString(SPV_ParamCalcIndex(SPV_CHProfileMsg), SPV_CHProfileMsgLength))
// Kanalaktivität
#define ParamSPV_CHActive                            ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHActive)) & SPV_CHActiveMask))
// Suspendiert
#define ParamSPV_CHSuspended                         ((bool)(knx.paramByte(SPV_ParamCalcIndex(SPV_CHSuspended)) & SPV_CHSuspendedMask))

// deprecated
#define SPV_KoOffset 600

// Communication objects per channel (multiple occurrence)
#define SPV_KoBlockOffset 600
#define SPV_KoBlockSize 65

#define SPV_KoCalcNumber(index) (index + SPV_KoBlockOffset + _channelIndex * SPV_KoBlockSize)
#define SPV_KoCalcIndex(number) ((number >= SPV_KoCalcNumber(0) && number < SPV_KoCalcNumber(SPV_KoBlockSize)) ? (number - SPV_KoBlockOffset) % SPV_KoBlockSize : -1)
#define SPV_KoCalcChannel(number) ((number >= SPV_KoBlockOffset && number < SPV_KoBlockOffset + SPV_ChannelCount * SPV_KoBlockSize) ? (number - SPV_KoBlockOffset) / SPV_KoBlockSize : -1)

#define SPV_KoCHReachable 0
#define SPV_KoCHPower 1
#define SPV_KoCHApparentPower 2
#define SPV_KoCHGridVoltage 3
#define SPV_KoCHGridVoltageL2 4
#define SPV_KoCHGridVoltageL3 5
#define SPV_KoCHGridCurrent 6
#define SPV_KoCHGridFrequency 7
#define SPV_KoCHOperatingState 8
#define SPV_KoCHToday 9
#define SPV_KoCHTotal 10
#define SPV_KoCHMonth 11
#define SPV_KoCHYear 12
#define SPV_KoCHToday1 13
#define SPV_KoCHToday2 14
#define SPV_KoCHTotal1 15
#define SPV_KoCHTotal2 16
#define SPV_KoCHPv1Voltage 17
#define SPV_KoCHPv1Current 18
#define SPV_KoCHPv1Power 19
#define SPV_KoCHPv1Today 20
#define SPV_KoCHPv2Voltage 21
#define SPV_KoCHPv2Current 22
#define SPV_KoCHPv2Power 23
#define SPV_KoCHPv2Today 24
#define SPV_KoCHPv3Voltage 25
#define SPV_KoCHPv3Current 26
#define SPV_KoCHPv3Power 27
#define SPV_KoCHPv3Today 28
#define SPV_KoCHPv4Voltage 29
#define SPV_KoCHPv4Current 30
#define SPV_KoCHPv4Power 31
#define SPV_KoCHPv4Today 32
#define SPV_KoCHSoc 33
#define SPV_KoCHSoh 34
#define SPV_KoCHBattVoltage 35
#define SPV_KoCHBattCurrent 36
#define SPV_KoCHBattPower 37
#define SPV_KoCHBattTemperature 38
#define SPV_KoCHCycleTimes 39
#define SPV_KoCHRemainingCapacity 40
#define SPV_KoCHTodayCharge 41
#define SPV_KoCHTodayDischarge 42
#define SPV_KoCHTotalCharge 43
#define SPV_KoCHTotalDischarge 44
#define SPV_KoCHCellVoltageMax 45
#define SPV_KoCHCellVoltageMin 46
#define SPV_KoCHCellTempMax 47
#define SPV_KoCHCellTempMin 48
#define SPV_KoCHHousePower 49
#define SPV_KoCHImportPower 50
#define SPV_KoCHExportPower 51
#define SPV_KoCHImportTotal 52
#define SPV_KoCHExportTotal 53
#define SPV_KoCHHouseToday 54
#define SPV_KoCHImportToday 55
#define SPV_KoCHExportToday 56
#define SPV_KoCHTemperature 57
#define SPV_KoCHHeatsinkTemp 58
#define SPV_KoCHErrorCode 59
#define SPV_KoCHOperatingHours 60
#define SPV_KoCHSpare1 61
#define SPV_KoCHSpare2 62
#define SPV_KoCHSpare3 63
#define SPV_KoCHSpare4 64

// 
#define KoSPV_CHReachable                         (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHReachable)))
// 
#define KoSPV_CHPower                             (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHPower)))
// 
#define KoSPV_CHApparentPower                     (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHApparentPower)))
// 
#define KoSPV_CHGridVoltage                       (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHGridVoltage)))
// 
#define KoSPV_CHGridVoltageL2                     (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHGridVoltageL2)))
// 
#define KoSPV_CHGridVoltageL3                     (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHGridVoltageL3)))
// 
#define KoSPV_CHGridCurrent                       (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHGridCurrent)))
// 
#define KoSPV_CHGridFrequency                     (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHGridFrequency)))
// 
#define KoSPV_CHOperatingState                    (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHOperatingState)))
// 
#define KoSPV_CHToday                             (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHToday)))
// 
#define KoSPV_CHTotal                             (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHTotal)))
// 
#define KoSPV_CHMonth                             (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHMonth)))
// 
#define KoSPV_CHYear                              (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHYear)))
// 
#define KoSPV_CHToday1                            (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHToday1)))
// 
#define KoSPV_CHToday2                            (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHToday2)))
// 
#define KoSPV_CHTotal1                            (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHTotal1)))
// 
#define KoSPV_CHTotal2                            (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHTotal2)))
// 
#define KoSPV_CHPv1Voltage                        (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHPv1Voltage)))
// 
#define KoSPV_CHPv1Current                        (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHPv1Current)))
// 
#define KoSPV_CHPv1Power                          (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHPv1Power)))
// 
#define KoSPV_CHPv1Today                          (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHPv1Today)))
// 
#define KoSPV_CHPv2Voltage                        (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHPv2Voltage)))
// 
#define KoSPV_CHPv2Current                        (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHPv2Current)))
// 
#define KoSPV_CHPv2Power                          (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHPv2Power)))
// 
#define KoSPV_CHPv2Today                          (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHPv2Today)))
// 
#define KoSPV_CHPv3Voltage                        (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHPv3Voltage)))
// 
#define KoSPV_CHPv3Current                        (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHPv3Current)))
// 
#define KoSPV_CHPv3Power                          (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHPv3Power)))
// 
#define KoSPV_CHPv3Today                          (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHPv3Today)))
// 
#define KoSPV_CHPv4Voltage                        (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHPv4Voltage)))
// 
#define KoSPV_CHPv4Current                        (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHPv4Current)))
// 
#define KoSPV_CHPv4Power                          (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHPv4Power)))
// 
#define KoSPV_CHPv4Today                          (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHPv4Today)))
// 
#define KoSPV_CHSoc                               (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHSoc)))
// 
#define KoSPV_CHSoh                               (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHSoh)))
// 
#define KoSPV_CHBattVoltage                       (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHBattVoltage)))
// 
#define KoSPV_CHBattCurrent                       (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHBattCurrent)))
// 
#define KoSPV_CHBattPower                         (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHBattPower)))
// 
#define KoSPV_CHBattTemperature                   (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHBattTemperature)))
// 
#define KoSPV_CHCycleTimes                        (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHCycleTimes)))
// 
#define KoSPV_CHRemainingCapacity                 (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHRemainingCapacity)))
// 
#define KoSPV_CHTodayCharge                       (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHTodayCharge)))
// 
#define KoSPV_CHTodayDischarge                    (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHTodayDischarge)))
// 
#define KoSPV_CHTotalCharge                       (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHTotalCharge)))
// 
#define KoSPV_CHTotalDischarge                    (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHTotalDischarge)))
// 
#define KoSPV_CHCellVoltageMax                    (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHCellVoltageMax)))
// 
#define KoSPV_CHCellVoltageMin                    (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHCellVoltageMin)))
// 
#define KoSPV_CHCellTempMax                       (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHCellTempMax)))
// 
#define KoSPV_CHCellTempMin                       (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHCellTempMin)))
// 
#define KoSPV_CHHousePower                        (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHHousePower)))
// 
#define KoSPV_CHImportPower                       (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHImportPower)))
// 
#define KoSPV_CHExportPower                       (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHExportPower)))
// 
#define KoSPV_CHImportTotal                       (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHImportTotal)))
// 
#define KoSPV_CHExportTotal                       (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHExportTotal)))
// 
#define KoSPV_CHHouseToday                        (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHHouseToday)))
// 
#define KoSPV_CHImportToday                       (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHImportToday)))
// 
#define KoSPV_CHExportToday                       (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHExportToday)))
// 
#define KoSPV_CHTemperature                       (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHTemperature)))
// 
#define KoSPV_CHHeatsinkTemp                      (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHHeatsinkTemp)))
// 
#define KoSPV_CHErrorCode                         (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHErrorCode)))
// 
#define KoSPV_CHOperatingHours                    (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHOperatingHours)))
// 
#define KoSPV_CHSpare1                            (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHSpare1)))
// 
#define KoSPV_CHSpare2                            (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHSpare2)))
// 
#define KoSPV_CHSpare3                            (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHSpare3)))
// 
#define KoSPV_CHSpare4                            (knx.getGroupObject(SPV_KoCalcNumber(SPV_KoCHSpare4)))

#define WIP_WIPTls                              6011      // 1 Bit, Bit 6
#define     WIP_WIPTlsMask 0x40
#define     WIP_WIPTlsShift 6
#define WIP_WIPSapEnable                        6011      // 1 Bit, Bit 5
#define     WIP_WIPSapEnableMask 0x20
#define     WIP_WIPSapEnableShift 5
#define WIP_WIPUseConnected                     6011      // 1 Bit, Bit 4
#define     WIP_WIPUseConnectedMask 0x10
#define     WIP_WIPUseConnectedShift 4
#define WIP_WIPUseDiag                          6011      // 1 Bit, Bit 3
#define     WIP_WIPUseDiagMask 0x08
#define     WIP_WIPUseDiagShift 3
#define WIP_WIPUseRingAny                       6011      // 1 Bit, Bit 2
#define     WIP_WIPUseRingAnyMask 0x04
#define     WIP_WIPUseRingAnyShift 2
#define WIP_WIPUseLockAll                       6011      // 1 Bit, Bit 1
#define     WIP_WIPUseLockAllMask 0x02
#define     WIP_WIPUseLockAllShift 1
#define WIP_WIPCertCheck                        6012      // 8 Bits, Bit 7-0
#define WIP_WIPHost                             6013      // char*, 32 Byte
#define     WIP_WIPHostLength 32
#define WIP_WIPPort                             6045      // uint16_t
#define WIP_WIPUser                             6047      // char*, 64 Byte
#define     WIP_WIPUserLength 64
#define WIP_WIPPass                             6111      // char*, 32 Byte
#define     WIP_WIPPassLength 32
#define WIP_WIPReconnect                        6143      // uint16_t
#define WIP_WIPUseSapDoorbell                   6145      // 1 Bit, Bit 7
#define     WIP_WIPUseSapDoorbellMask 0x80
#define     WIP_WIPUseSapDoorbellShift 7
#define WIP_WIPUseSapMute                       6145      // 1 Bit, Bit 6
#define     WIP_WIPUseSapMuteMask 0x40
#define     WIP_WIPUseSapMuteShift 6
#define WIP_WIPUseSapDayNight                   6145      // 1 Bit, Bit 5
#define     WIP_WIPUseSapDayNightMask 0x20
#define     WIP_WIPUseSapDayNightShift 5
#define WIP_WIPUseSapBinIn                      6145      // 1 Bit, Bit 4
#define     WIP_WIPUseSapBinInMask 0x10
#define     WIP_WIPUseSapBinInShift 4
#define WIP_WIPUseSapBinOut                     6145      // 1 Bit, Bit 3
#define     WIP_WIPUseSapBinOutMask 0x08
#define     WIP_WIPUseSapBinOutShift 3
#define WIP_WIPUseSapAlarm                      6145      // 1 Bit, Bit 2
#define     WIP_WIPUseSapAlarmMask 0x04
#define     WIP_WIPUseSapAlarmShift 2
#define WIP_WIPUseSapTamper                     6145      // 1 Bit, Bit 1
#define     WIP_WIPUseSapTamperMask 0x02
#define     WIP_WIPUseSapTamperShift 1
#define WIP_WIPReserve                          6154      // uint8_t

// TLS verwenden
#define ParamWIP_WIPTls                              ((bool)(knx.paramByte(WIP_WIPTls) & WIP_WIPTlsMask))
// Funktionen des Smart Access Point verwenden
#define ParamWIP_WIPSapEnable                        ((bool)(knx.paramByte(WIP_WIPSapEnable) & WIP_WIPSapEnableMask))
// Verbindung
#define ParamWIP_WIPUseConnected                     ((bool)(knx.paramByte(WIP_WIPUseConnected) & WIP_WIPUseConnectedMask))
// Diagnose-Meldungstext
#define ParamWIP_WIPUseDiag                          ((bool)(knx.paramByte(WIP_WIPUseDiag) & WIP_WIPUseDiagMask))
// Klingeln (Sammel)
#define ParamWIP_WIPUseRingAny                       ((bool)(knx.paramByte(WIP_WIPUseRingAny) & WIP_WIPUseRingAnyMask))
// Sperre (alle)
#define ParamWIP_WIPUseLockAll                       ((bool)(knx.paramByte(WIP_WIPUseLockAll) & WIP_WIPUseLockAllMask))
// Zertifikatsprüfung
#define ParamWIP_WIPCertCheck                        (knx.paramByte(WIP_WIPCertCheck))
// Smart Access Point (IP-Adresse)
#define ParamWIP_WIPHost                             (knx.paramData(WIP_WIPHost))
#define ParamWIP_WIPHostStr                          (knx.paramString(WIP_WIPHost, WIP_WIPHostLength))
// Port
#define ParamWIP_WIPPort                             (knx.paramWord(WIP_WIPPort))
// API-Benutzername
#define ParamWIP_WIPUser                             (knx.paramData(WIP_WIPUser))
#define ParamWIP_WIPUserStr                          (knx.paramString(WIP_WIPUser, WIP_WIPUserLength))
// API-Passwort
#define ParamWIP_WIPPass                             (knx.paramData(WIP_WIPPass))
#define ParamWIP_WIPPassStr                          (knx.paramString(WIP_WIPPass, WIP_WIPPassLength))
// Verbindung erneut aufbauen nach
#define ParamWIP_WIPReconnect                        (knx.paramWord(WIP_WIPReconnect))
// Klingeln
#define ParamWIP_WIPUseSapDoorbell                   ((bool)(knx.paramByte(WIP_WIPUseSapDoorbell) & WIP_WIPUseSapDoorbellMask))
// Stummschaltung
#define ParamWIP_WIPUseSapMute                       ((bool)(knx.paramByte(WIP_WIPUseSapMute) & WIP_WIPUseSapMuteMask))
// Tag/Nacht-Umschaltung
#define ParamWIP_WIPUseSapDayNight                   ((bool)(knx.paramByte(WIP_WIPUseSapDayNight) & WIP_WIPUseSapDayNightMask))
// Binäreingang
#define ParamWIP_WIPUseSapBinIn                      ((bool)(knx.paramByte(WIP_WIPUseSapBinIn) & WIP_WIPUseSapBinInMask))
// Binärausgang
#define ParamWIP_WIPUseSapBinOut                     ((bool)(knx.paramByte(WIP_WIPUseSapBinOut) & WIP_WIPUseSapBinOutMask))
// Alarm
#define ParamWIP_WIPUseSapAlarm                      ((bool)(knx.paramByte(WIP_WIPUseSapAlarm) & WIP_WIPUseSapAlarmMask))
// Sabotage
#define ParamWIP_WIPUseSapTamper                     ((bool)(knx.paramByte(WIP_WIPUseSapTamper) & WIP_WIPUseSapTamperMask))
// 
#define ParamWIP_WIPReserve                          (knx.paramByte(WIP_WIPReserve))

#define WIP_KoWIPConnected 1050
#define WIP_KoWIPDiag 1051
#define WIP_KoWIPRingAny 1052
#define WIP_KoWIPLockAll 1053
#define WIP_KoWIPSapDoorbell 1054
#define WIP_KoWIPSapMute 1055
#define WIP_KoWIPSapMuteStat 1056
#define WIP_KoWIPSapDayNight 1057
#define WIP_KoWIPSapBinIn 1058
#define WIP_KoWIPSapBinOut 1059
#define WIP_KoWIPSapAlarm 1060
#define WIP_KoWIPSapTamper 1061

// Verbindung
#define KoWIP_WIPConnected                        (knx.getGroupObject(WIP_KoWIPConnected))
// Diagnose
#define KoWIP_WIPDiag                             (knx.getGroupObject(WIP_KoWIPDiag))
// Klingeln (Sammel)
#define KoWIP_WIPRingAny                          (knx.getGroupObject(WIP_KoWIPRingAny))
// Sperre (alle)
#define KoWIP_WIPLockAll                          (knx.getGroupObject(WIP_KoWIPLockAll))
// SmartAP Klingeln
#define KoWIP_WIPSapDoorbell                      (knx.getGroupObject(WIP_KoWIPSapDoorbell))
// SmartAP Stummschaltung
#define KoWIP_WIPSapMute                          (knx.getGroupObject(WIP_KoWIPSapMute))
// Status SmartAP Stummschaltung
#define KoWIP_WIPSapMuteStat                      (knx.getGroupObject(WIP_KoWIPSapMuteStat))
// SmartAP Tag/Nacht
#define KoWIP_WIPSapDayNight                      (knx.getGroupObject(WIP_KoWIPSapDayNight))
// SmartAP Binäreingang
#define KoWIP_WIPSapBinIn                         (knx.getGroupObject(WIP_KoWIPSapBinIn))
// SmartAP Binärausgang
#define KoWIP_WIPSapBinOut                        (knx.getGroupObject(WIP_KoWIPSapBinOut))
// SmartAP Alarm
#define KoWIP_WIPSapAlarm                         (knx.getGroupObject(WIP_KoWIPSapAlarm))
// SmartAP Sabotage
#define KoWIP_WIPSapTamper                        (knx.getGroupObject(WIP_KoWIPSapTamper))

#define WIP_ChannelCount 8

// Parameter per channel
#define WIP_ParamBlockOffset 6155
#define WIP_ParamBlockSize 62
#define WIP_ParamCalcIndex(index) (index + WIP_ParamBlockOffset + _channelIndex * WIP_ParamBlockSize)

#define WIP_CHSerial                             0      // char*, 20 Byte
#define     WIP_CHSerialLength 20
#define WIP_CHType                              20      // 8 Bits, Bit 7-0
#define WIP_CHOpenPath                          21      // 8 Bits, Bit 7-0
#define WIP_CHOpenTrigger                       22      // 8 Bits, Bit 7-0
#define WIP_CHLockEnable                        23      // 1 Bit, Bit 7
#define     WIP_CHLockEnableMask 0x80
#define     WIP_CHLockEnableShift 7
#define WIP_CHRingMode                          23      // 1 Bit, Bit 6
#define     WIP_CHRingModeMask 0x40
#define     WIP_CHRingModeShift 6
#define WIP_CHExpert                            23      // 1 Bit, Bit 5
#define     WIP_CHExpertMask 0x20
#define     WIP_CHExpertShift 5
#define WIP_CHLightEnable                       23      // 1 Bit, Bit 4
#define     WIP_CHLightEnableMask 0x10
#define     WIP_CHLightEnableShift 4
#define WIP_CHStateEnable                       23      // 1 Bit, Bit 3
#define     WIP_CHStateEnableMask 0x08
#define     WIP_CHStateEnableShift 3
#define WIP_CHRingPulse                         24      // uint16_t
#define WIP_CHRingBlock                         26      // uint8_t
#define WIP_CHRingCh                            27      // uint8_t
#define WIP_CHRingDp                            28      // uint8_t
#define WIP_CHOpenCh                            29      // uint8_t
#define WIP_CHOpenDp                            30      // uint8_t
#define WIP_CHStateCh                           31      // uint8_t
#define WIP_CHStateDp                           32      // uint8_t
#define WIP_CHSerialOutdoor                     33      // char*, 20 Byte
#define     WIP_CHSerialOutdoorLength 20
#define WIP_CHGenericDpt                        53      // 8 Bits, Bit 7-0
#define WIP_CHGenericDir                        54      // 8 Bits, Bit 7-0
#define WIP_CHActive                            61      // 1 Bit, Bit 7
#define     WIP_CHActiveMask 0x80
#define     WIP_CHActiveShift 7
#define WIP_CHSuspended                         61      // 1 Bit, Bit 6
#define     WIP_CHSuspendedMask 0x40
#define     WIP_CHSuspendedShift 6

// Seriennummer
#define ParamWIP_CHSerial                            (knx.paramData(WIP_ParamCalcIndex(WIP_CHSerial)))
#define ParamWIP_CHSerialStr                         (knx.paramString(WIP_ParamCalcIndex(WIP_CHSerial), WIP_CHSerialLength))
// Gerätetyp
#define ParamWIP_CHType                              (knx.paramByte(WIP_ParamCalcIndex(WIP_CHType)))
// Öffnungsweg
#define ParamWIP_CHOpenPath                          (knx.paramByte(WIP_ParamCalcIndex(WIP_CHOpenPath)))
// Auslösen bei Wert
#define ParamWIP_CHOpenTrigger                       (knx.paramByte(WIP_ParamCalcIndex(WIP_CHOpenTrigger)))
// Sperrobjekt
#define ParamWIP_CHLockEnable                        ((bool)(knx.paramByte(WIP_ParamCalcIndex(WIP_CHLockEnable)) & WIP_CHLockEnableMask))
// Klingelsignal
#define ParamWIP_CHRingMode                          ((bool)(knx.paramByte(WIP_ParamCalcIndex(WIP_CHRingMode)) & WIP_CHRingModeMask))
// Experteneinstellungen
#define ParamWIP_CHExpert                            ((bool)(knx.paramByte(WIP_ParamCalcIndex(WIP_CHExpert)) & WIP_CHExpertMask))
// Lichtkanal verwenden
#define ParamWIP_CHLightEnable                       ((bool)(knx.paramByte(WIP_ParamCalcIndex(WIP_CHLightEnable)) & WIP_CHLightEnableMask))
// Türstatus verwenden
#define ParamWIP_CHStateEnable                       ((bool)(knx.paramByte(WIP_ParamCalcIndex(WIP_CHStateEnable)) & WIP_CHStateEnableMask))
// Impulsdauer
#define ParamWIP_CHRingPulse                         (knx.paramWord(WIP_ParamCalcIndex(WIP_CHRingPulse)))
// Sperrzeit (0 = aus)
#define ParamWIP_CHRingBlock                         (knx.paramByte(WIP_ParamCalcIndex(WIP_CHRingBlock)))
// Klingeln: Kanal
#define ParamWIP_CHRingCh                            (knx.paramByte(WIP_ParamCalcIndex(WIP_CHRingCh)))
// Klingeln: Datenpunkt
#define ParamWIP_CHRingDp                            (knx.paramByte(WIP_ParamCalcIndex(WIP_CHRingDp)))
// Türöffner: Kanal
#define ParamWIP_CHOpenCh                            (knx.paramByte(WIP_ParamCalcIndex(WIP_CHOpenCh)))
// Türöffner: Datenpunkt
#define ParamWIP_CHOpenDp                            (knx.paramByte(WIP_ParamCalcIndex(WIP_CHOpenDp)))
// Türstatus: Kanal
#define ParamWIP_CHStateCh                           (knx.paramByte(WIP_ParamCalcIndex(WIP_CHStateCh)))
// Türstatus: Datenpunkt
#define ParamWIP_CHStateDp                           (knx.paramByte(WIP_ParamCalcIndex(WIP_CHStateDp)))
// Seriennummer Außenstation
#define ParamWIP_CHSerialOutdoor                     (knx.paramData(WIP_ParamCalcIndex(WIP_CHSerialOutdoor)))
#define ParamWIP_CHSerialOutdoorStr                  (knx.paramString(WIP_ParamCalcIndex(WIP_CHSerialOutdoor), WIP_CHSerialOutdoorLength))
// Datentyp
#define ParamWIP_CHGenericDpt                        (knx.paramByte(WIP_ParamCalcIndex(WIP_CHGenericDpt)))
// Richtung
#define ParamWIP_CHGenericDir                        (knx.paramByte(WIP_ParamCalcIndex(WIP_CHGenericDir)))
// Kanalaktivität
#define ParamWIP_CHActive                            ((bool)(knx.paramByte(WIP_ParamCalcIndex(WIP_CHActive)) & WIP_CHActiveMask))
// Suspendiert
#define ParamWIP_CHSuspended                         ((bool)(knx.paramByte(WIP_ParamCalcIndex(WIP_CHSuspended)) & WIP_CHSuspendedMask))

// deprecated
#define WIP_KoOffset 1070

// Communication objects per channel (multiple occurrence)
#define WIP_KoBlockOffset 1070
#define WIP_KoBlockSize 10

#define WIP_KoCalcNumber(index) (index + WIP_KoBlockOffset + _channelIndex * WIP_KoBlockSize)
#define WIP_KoCalcIndex(number) ((number >= WIP_KoCalcNumber(0) && number < WIP_KoCalcNumber(WIP_KoBlockSize)) ? (number - WIP_KoBlockOffset) % WIP_KoBlockSize : -1)
#define WIP_KoCalcChannel(number) ((number >= WIP_KoBlockOffset && number < WIP_KoBlockOffset + WIP_ChannelCount * WIP_KoBlockSize) ? (number - WIP_KoBlockOffset) / WIP_KoBlockSize : -1)

#define WIP_KoCHRing 0
#define WIP_KoCHOpen 1
#define WIP_KoCHOpenActive 2
#define WIP_KoCHLock 3
#define WIP_KoCHDoorState 4
#define WIP_KoCHError 5
#define WIP_KoCHLight 6
#define WIP_KoCHLightStatus 7
#define WIP_KoCHGenericOut 8
#define WIP_KoCHGenericIn 9

// Klingeln
#define KoWIP_CHRing                              (knx.getGroupObject(WIP_KoCalcNumber(WIP_KoCHRing)))
// Tür öffnen
#define KoWIP_CHOpen                              (knx.getGroupObject(WIP_KoCalcNumber(WIP_KoCHOpen)))
// Status Türöffner
#define KoWIP_CHOpenActive                        (knx.getGroupObject(WIP_KoCalcNumber(WIP_KoCHOpenActive)))
// Sperre
#define KoWIP_CHLock                              (knx.getGroupObject(WIP_KoCalcNumber(WIP_KoCHLock)))
// Türstatus
#define KoWIP_CHDoorState                         (knx.getGroupObject(WIP_KoCalcNumber(WIP_KoCHDoorState)))
// Fehler
#define KoWIP_CHError                             (knx.getGroupObject(WIP_KoCalcNumber(WIP_KoCHError)))
// Licht
#define KoWIP_CHLight                             (knx.getGroupObject(WIP_KoCalcNumber(WIP_KoCHLight)))
// Status Licht
#define KoWIP_CHLightStatus                       (knx.getGroupObject(WIP_KoCalcNumber(WIP_KoCHLightStatus)))
// Wert
#define KoWIP_CHGenericOut                        (knx.getGroupObject(WIP_KoCalcNumber(WIP_KoCHGenericOut)))
// Wert setzen
#define KoWIP_CHGenericIn                         (knx.getGroupObject(WIP_KoCalcNumber(WIP_KoCHGenericIn)))

#define ROB_ROBUseDiag                          6651      // 1 Bit, Bit 6
#define     ROB_ROBUseDiagMask 0x40
#define     ROB_ROBUseDiagShift 6

// Diagnose-Meldungstext
#define ParamROB_ROBUseDiag                          ((bool)(knx.paramByte(ROB_ROBUseDiag) & ROB_ROBUseDiagMask))

#define ROB_KoROBDiag 1200

// Diagnose
#define KoROB_ROBDiag                             (knx.getGroupObject(ROB_KoROBDiag))

#define ROB_ChannelCount 2

// Parameter per channel
#define ROB_ParamBlockOffset 6652
#define ROB_ParamBlockSize 55
#define ROB_ParamCalcIndex(index) (index + ROB_ParamBlockOffset + _channelIndex * ROB_ParamBlockSize)

#define ROB_CHType                               0      // 8 Bits, Bit 7-0
#define ROB_CHSuspended                          1      // 1 Bit, Bit 7
#define     ROB_CHSuspendedMask 0x80
#define     ROB_CHSuspendedShift 7
#define ROB_CHIp                                 2      // char*, 16 Byte
#define     ROB_CHIpLength 16
#define ROB_CHToken                             18      // char*, 33 Byte
#define     ROB_CHTokenLength 33
#define ROB_CHPollInterval                      51      // uint16_t
#define ROB_CHConsumablePoll                    53      // uint8_t
#define ROB_CHCyclicSend                        54      // uint8_t

// Kanaltyp
#define ParamROB_CHType                              (knx.paramByte(ROB_ParamCalcIndex(ROB_CHType)))
// Suspendiert
#define ParamROB_CHSuspended                         ((bool)(knx.paramByte(ROB_ParamCalcIndex(ROB_CHSuspended)) & ROB_CHSuspendedMask))
// IP-Adresse
#define ParamROB_CHIp                                (knx.paramData(ROB_ParamCalcIndex(ROB_CHIp)))
#define ParamROB_CHIpStr                             (knx.paramString(ROB_ParamCalcIndex(ROB_CHIp), ROB_CHIpLength))
// Token (32 Hex-Zeichen)
#define ParamROB_CHToken                             (knx.paramData(ROB_ParamCalcIndex(ROB_CHToken)))
#define ParamROB_CHTokenStr                          (knx.paramString(ROB_ParamCalcIndex(ROB_CHToken), ROB_CHTokenLength))
// Zustand abfragen alle
#define ParamROB_CHPollInterval                      (knx.paramWord(ROB_ParamCalcIndex(ROB_CHPollInterval)))
// Verschleiß abfragen alle
#define ParamROB_CHConsumablePoll                    (knx.paramByte(ROB_ParamCalcIndex(ROB_CHConsumablePoll)))
// Statusobjekte zyklisch senden alle
#define ParamROB_CHCyclicSend                        (knx.paramByte(ROB_ParamCalcIndex(ROB_CHCyclicSend)))

// deprecated
#define ROB_KoOffset 1210

// Communication objects per channel (multiple occurrence)
#define ROB_KoBlockOffset 1210
#define ROB_KoBlockSize 23

#define ROB_KoCalcNumber(index) (index + ROB_KoBlockOffset + _channelIndex * ROB_KoBlockSize)
#define ROB_KoCalcIndex(number) ((number >= ROB_KoCalcNumber(0) && number < ROB_KoCalcNumber(ROB_KoBlockSize)) ? (number - ROB_KoBlockOffset) % ROB_KoBlockSize : -1)
#define ROB_KoCalcChannel(number) ((number >= ROB_KoBlockOffset && number < ROB_KoBlockOffset + ROB_ChannelCount * ROB_KoBlockSize) ? (number - ROB_KoBlockOffset) / ROB_KoBlockSize : -1)

#define ROB_KoCHReachable 0
#define ROB_KoCHStart 1
#define ROB_KoCHPause 2
#define ROB_KoCHStop 3
#define ROB_KoCHDock 4
#define ROB_KoCHLocate 5
#define ROB_KoCHFanSpeed 6
#define ROB_KoCHFanSpeedStatus 7
#define ROB_KoCHState 8
#define ROB_KoCHStateText 9
#define ROB_KoCHCleaning 10
#define ROB_KoCHCharging 11
#define ROB_KoCHBattery 12
#define ROB_KoCHError 13
#define ROB_KoCHErrorCode 14
#define ROB_KoCHErrorText 15
#define ROB_KoCHCleanArea 16
#define ROB_KoCHCleanTime 17
#define ROB_KoCHMainBrush 18
#define ROB_KoCHSideBrush 19
#define ROB_KoCHFilter 20
#define ROB_KoCHSensors 21
#define ROB_KoCHConsumableReset 22

// Erreichbar
#define KoROB_CHReachable                         (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHReachable)))
// Reinigung starten
#define KoROB_CHStart                             (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHStart)))
// Pause
#define KoROB_CHPause                             (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHPause)))
// Stopp
#define KoROB_CHStop                              (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHStop)))
// Zur Station
#define KoROB_CHDock                              (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHDock)))
// Roboter finden
#define KoROB_CHLocate                            (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHLocate)))
// Saugstufe
#define KoROB_CHFanSpeed                          (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHFanSpeed)))
// Status Saugstufe
#define KoROB_CHFanSpeedStatus                    (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHFanSpeedStatus)))
// Zustand
#define KoROB_CHState                             (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHState)))
// Zustand Text
#define KoROB_CHStateText                         (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHStateText)))
// Reinigt
#define KoROB_CHCleaning                          (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHCleaning)))
// Lädt
#define KoROB_CHCharging                          (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHCharging)))
// Akku
#define KoROB_CHBattery                           (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHBattery)))
// Fehler
#define KoROB_CHError                             (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHError)))
// Fehlercode
#define KoROB_CHErrorCode                         (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHErrorCode)))
// Fehlertext
#define KoROB_CHErrorText                         (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHErrorText)))
// Gereinigte Fläche
#define KoROB_CHCleanArea                         (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHCleanArea)))
// Reinigungsdauer
#define KoROB_CHCleanTime                         (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHCleanTime)))
// Hauptbürste Restlaufzeit
#define KoROB_CHMainBrush                         (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHMainBrush)))
// Seitenbürste Restlaufzeit
#define KoROB_CHSideBrush                         (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHSideBrush)))
// Filter Restlaufzeit
#define KoROB_CHFilter                            (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHFilter)))
// Sensoren Restlaufzeit
#define KoROB_CHSensors                           (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHSensors)))
// Verschleiß zurücksetzen
#define KoROB_CHConsumableReset                   (knx.getGroupObject(ROB_KoCalcNumber(ROB_KoCHConsumableReset)))

#define GDW_GDWUseDiag                          6762      // 1 Bit, Bit 6
#define     GDW_GDWUseDiagMask 0x40
#define     GDW_GDWUseDiagShift 6

// Diagnose-Meldungstext
#define ParamGDW_GDWUseDiag                          ((bool)(knx.paramByte(GDW_GDWUseDiag) & GDW_GDWUseDiagMask))

#define GDW_KoGDWDiag 1300

// Diagnose
#define KoGDW_GDWDiag                             (knx.getGroupObject(GDW_KoGDWDiag))

#define GDW_ChannelCount 2

// Parameter per channel
#define GDW_ParamBlockOffset 6763
#define GDW_ParamBlockSize 96
#define GDW_ParamCalcIndex(index) (index + GDW_ParamBlockOffset + _channelIndex * GDW_ParamBlockSize)

#define GDW_CHType                               0      // 8 Bits, Bit 7-0
#define GDW_CHSuspended                          1      // 1 Bit, Bit 7
#define     GDW_CHSuspendedMask 0x80
#define     GDW_CHSuspendedShift 7
#define GDW_CHIp                                 2      // char*, 16 Byte
#define     GDW_CHIpLength 16
#define GDW_CHPort                              18      // uint16_t
#define GDW_CHProtocol                          20      // 8 Bits, Bit 7-0
#define GDW_CHAddress                           21      // uint8_t
#define GDW_CHPollInterval                      22      // uint16_t
#define GDW_CHSendDelayBase                     24      // 2 Bits, Bit 7-6
#define     GDW_CHSendDelayBaseMask 0xC0
#define     GDW_CHSendDelayBaseShift 6
#define GDW_CHSendDelayTime                     24      // 14 Bits, Bit 13-0
#define     GDW_CHSendDelayTimeMask 0x3FFF
#define     GDW_CHSendDelayTimeShift 0
#define GDW_CHSendChangePercent                 26      // uint8_t
#define GDW_CHUseReachable                      32      // 1 Bit, Bit 7
#define     GDW_CHUseReachableMask 0x80
#define     GDW_CHUseReachableShift 7
#define GDW_CHUseWorkMode                       32      // 1 Bit, Bit 6
#define     GDW_CHUseWorkModeMask 0x40
#define     GDW_CHUseWorkModeShift 6
#define GDW_CHUseErrorCodes                     32      // 1 Bit, Bit 5
#define     GDW_CHUseErrorCodesMask 0x20
#define     GDW_CHUseErrorCodesShift 5
#define GDW_CHUseWarningCode                    32      // 1 Bit, Bit 4
#define     GDW_CHUseWarningCodeMask 0x10
#define     GDW_CHUseWarningCodeShift 4
#define GDW_CHUseSafetyCountry                  32      // 1 Bit, Bit 3
#define     GDW_CHUseSafetyCountryMask 0x08
#define     GDW_CHUseSafetyCountryShift 3
#define GDW_CHUseFunctionBit                    32      // 1 Bit, Bit 2
#define     GDW_CHUseFunctionBitMask 0x04
#define     GDW_CHUseFunctionBitShift 2
#define GDW_CHUseHoursTotal                     32      // 1 Bit, Bit 1
#define     GDW_CHUseHoursTotalMask 0x02
#define     GDW_CHUseHoursTotalShift 1
#define GDW_CHUseTimestamp                      32      // 1 Bit, Bit 0
#define     GDW_CHUseTimestampMask 0x01
#define     GDW_CHUseTimestampShift 0
#define GDW_CHUseTemperature                    33      // 1 Bit, Bit 7
#define     GDW_CHUseTemperatureMask 0x80
#define     GDW_CHUseTemperatureShift 7
#define GDW_CHUseBusVoltage                     33      // 1 Bit, Bit 6
#define     GDW_CHUseBusVoltageMask 0x40
#define     GDW_CHUseBusVoltageShift 6
#define GDW_CHUseNBusVoltage                    33      // 1 Bit, Bit 5
#define     GDW_CHUseNBusVoltageMask 0x20
#define     GDW_CHUseNBusVoltageShift 5
#define GDW_CHUseGridInOut                      33      // 1 Bit, Bit 4
#define     GDW_CHUseGridInOutMask 0x10
#define     GDW_CHUseGridInOutShift 4
#define GDW_CHUseRssi                           33      // 1 Bit, Bit 3
#define     GDW_CHUseRssiMask 0x08
#define     GDW_CHUseRssiShift 3
#define GDW_CHUseMeterCommStatus                33      // 1 Bit, Bit 2
#define     GDW_CHUseMeterCommStatusMask 0x04
#define     GDW_CHUseMeterCommStatusShift 2
#define GDW_CHUseGridMode                       33      // 1 Bit, Bit 1
#define     GDW_CHUseGridModeMask 0x02
#define     GDW_CHUseGridModeShift 1
#define GDW_CHUseOperationCode                  33      // 1 Bit, Bit 0
#define     GDW_CHUseOperationCodeMask 0x01
#define     GDW_CHUseOperationCodeShift 0
#define GDW_CHUseDiagStatus                     34      // 1 Bit, Bit 7
#define     GDW_CHUseDiagStatusMask 0x80
#define     GDW_CHUseDiagStatusShift 7
#define GDW_CHUseTempAir                        34      // 1 Bit, Bit 6
#define     GDW_CHUseTempAirMask 0x40
#define     GDW_CHUseTempAirShift 6
#define GDW_CHUseTempModule                     34      // 1 Bit, Bit 5
#define     GDW_CHUseTempModuleMask 0x20
#define     GDW_CHUseTempModuleShift 5
#define GDW_CHUseTempHeatsink                   34      // 1 Bit, Bit 4
#define     GDW_CHUseTempHeatsinkMask 0x10
#define     GDW_CHUseTempHeatsinkShift 4
#define GDW_CHUseDeratingMode                   34      // 1 Bit, Bit 3
#define     GDW_CHUseDeratingModeMask 0x08
#define     GDW_CHUseDeratingModeShift 3
#define GDW_CHUseLeakageCurrent                 34      // 1 Bit, Bit 2
#define     GDW_CHUseLeakageCurrentMask 0x04
#define     GDW_CHUseLeakageCurrentShift 2
#define GDW_CHUsePvPower                        34      // 1 Bit, Bit 1
#define     GDW_CHUsePvPowerMask 0x02
#define     GDW_CHUsePvPowerShift 1
#define GDW_CHUsePv1Voltage                     34      // 1 Bit, Bit 0
#define     GDW_CHUsePv1VoltageMask 0x01
#define     GDW_CHUsePv1VoltageShift 0
#define GDW_CHUsePv1Current                     35      // 1 Bit, Bit 7
#define     GDW_CHUsePv1CurrentMask 0x80
#define     GDW_CHUsePv1CurrentShift 7
#define GDW_CHUsePv1Power                       35      // 1 Bit, Bit 6
#define     GDW_CHUsePv1PowerMask 0x40
#define     GDW_CHUsePv1PowerShift 6
#define GDW_CHUsePv2Voltage                     35      // 1 Bit, Bit 5
#define     GDW_CHUsePv2VoltageMask 0x20
#define     GDW_CHUsePv2VoltageShift 5
#define GDW_CHUsePv2Current                     35      // 1 Bit, Bit 4
#define     GDW_CHUsePv2CurrentMask 0x10
#define     GDW_CHUsePv2CurrentShift 4
#define GDW_CHUsePv2Power                       35      // 1 Bit, Bit 3
#define     GDW_CHUsePv2PowerMask 0x08
#define     GDW_CHUsePv2PowerShift 3
#define GDW_CHUsePv3Voltage                     35      // 1 Bit, Bit 2
#define     GDW_CHUsePv3VoltageMask 0x04
#define     GDW_CHUsePv3VoltageShift 2
#define GDW_CHUsePv3Current                     35      // 1 Bit, Bit 1
#define     GDW_CHUsePv3CurrentMask 0x02
#define     GDW_CHUsePv3CurrentShift 1
#define GDW_CHUsePv3Power                       35      // 1 Bit, Bit 0
#define     GDW_CHUsePv3PowerMask 0x01
#define     GDW_CHUsePv3PowerShift 0
#define GDW_CHUsePv4Voltage                     36      // 1 Bit, Bit 7
#define     GDW_CHUsePv4VoltageMask 0x80
#define     GDW_CHUsePv4VoltageShift 7
#define GDW_CHUsePv4Current                     36      // 1 Bit, Bit 6
#define     GDW_CHUsePv4CurrentMask 0x40
#define     GDW_CHUsePv4CurrentShift 6
#define GDW_CHUsePv4Power                       36      // 1 Bit, Bit 5
#define     GDW_CHUsePv4PowerMask 0x20
#define     GDW_CHUsePv4PowerShift 5
#define GDW_CHUsePv1Mode                        36      // 1 Bit, Bit 4
#define     GDW_CHUsePv1ModeMask 0x10
#define     GDW_CHUsePv1ModeShift 4
#define GDW_CHUsePv2Mode                        36      // 1 Bit, Bit 3
#define     GDW_CHUsePv2ModeMask 0x08
#define     GDW_CHUsePv2ModeShift 3
#define GDW_CHUsePv3Mode                        36      // 1 Bit, Bit 2
#define     GDW_CHUsePv3ModeMask 0x04
#define     GDW_CHUsePv3ModeShift 2
#define GDW_CHUsePv4Mode                        36      // 1 Bit, Bit 1
#define     GDW_CHUsePv4ModeMask 0x02
#define     GDW_CHUsePv4ModeShift 1
#define GDW_CHUseTotalInputPower                36      // 1 Bit, Bit 0
#define     GDW_CHUseTotalInputPowerMask 0x01
#define     GDW_CHUseTotalInputPowerShift 0
#define GDW_CHUsePvPowerTotalExt                37      // 1 Bit, Bit 7
#define     GDW_CHUsePvPowerTotalExtMask 0x80
#define     GDW_CHUsePvPowerTotalExtShift 7
#define GDW_CHUsePvChannel                      37      // 1 Bit, Bit 6
#define     GDW_CHUsePvChannelMask 0x40
#define     GDW_CHUsePvChannelShift 6
#define GDW_CHUsePv5Voltage                     37      // 1 Bit, Bit 5
#define     GDW_CHUsePv5VoltageMask 0x20
#define     GDW_CHUsePv5VoltageShift 5
#define GDW_CHUsePv5Current                     37      // 1 Bit, Bit 4
#define     GDW_CHUsePv5CurrentMask 0x10
#define     GDW_CHUsePv5CurrentShift 4
#define GDW_CHUsePv6Voltage                     37      // 1 Bit, Bit 3
#define     GDW_CHUsePv6VoltageMask 0x08
#define     GDW_CHUsePv6VoltageShift 3
#define GDW_CHUsePv6Current                     37      // 1 Bit, Bit 2
#define     GDW_CHUsePv6CurrentMask 0x04
#define     GDW_CHUsePv6CurrentShift 2
#define GDW_CHUsePv7Voltage                     37      // 1 Bit, Bit 1
#define     GDW_CHUsePv7VoltageMask 0x02
#define     GDW_CHUsePv7VoltageShift 1
#define GDW_CHUsePv7Current                     37      // 1 Bit, Bit 0
#define     GDW_CHUsePv7CurrentMask 0x01
#define     GDW_CHUsePv7CurrentShift 0
#define GDW_CHUsePv8Voltage                     38      // 1 Bit, Bit 7
#define     GDW_CHUsePv8VoltageMask 0x80
#define     GDW_CHUsePv8VoltageShift 7
#define GDW_CHUsePv8Current                     38      // 1 Bit, Bit 6
#define     GDW_CHUsePv8CurrentMask 0x40
#define     GDW_CHUsePv8CurrentShift 6
#define GDW_CHUsePv9Voltage                     38      // 1 Bit, Bit 5
#define     GDW_CHUsePv9VoltageMask 0x20
#define     GDW_CHUsePv9VoltageShift 5
#define GDW_CHUsePv9Current                     38      // 1 Bit, Bit 4
#define     GDW_CHUsePv9CurrentMask 0x10
#define     GDW_CHUsePv9CurrentShift 4
#define GDW_CHUsePv10Voltage                    38      // 1 Bit, Bit 3
#define     GDW_CHUsePv10VoltageMask 0x08
#define     GDW_CHUsePv10VoltageShift 3
#define GDW_CHUsePv10Current                    38      // 1 Bit, Bit 2
#define     GDW_CHUsePv10CurrentMask 0x04
#define     GDW_CHUsePv10CurrentShift 2
#define GDW_CHUsePv11Voltage                    38      // 1 Bit, Bit 1
#define     GDW_CHUsePv11VoltageMask 0x02
#define     GDW_CHUsePv11VoltageShift 1
#define GDW_CHUsePv11Current                    38      // 1 Bit, Bit 0
#define     GDW_CHUsePv11CurrentMask 0x01
#define     GDW_CHUsePv11CurrentShift 0
#define GDW_CHUsePv12Voltage                    39      // 1 Bit, Bit 7
#define     GDW_CHUsePv12VoltageMask 0x80
#define     GDW_CHUsePv12VoltageShift 7
#define GDW_CHUsePv12Current                    39      // 1 Bit, Bit 6
#define     GDW_CHUsePv12CurrentMask 0x40
#define     GDW_CHUsePv12CurrentShift 6
#define GDW_CHUsePv13Voltage                    39      // 1 Bit, Bit 5
#define     GDW_CHUsePv13VoltageMask 0x20
#define     GDW_CHUsePv13VoltageShift 5
#define GDW_CHUsePv13Current                    39      // 1 Bit, Bit 4
#define     GDW_CHUsePv13CurrentMask 0x10
#define     GDW_CHUsePv13CurrentShift 4
#define GDW_CHUsePv14Voltage                    39      // 1 Bit, Bit 3
#define     GDW_CHUsePv14VoltageMask 0x08
#define     GDW_CHUsePv14VoltageShift 3
#define GDW_CHUsePv14Current                    39      // 1 Bit, Bit 2
#define     GDW_CHUsePv14CurrentMask 0x04
#define     GDW_CHUsePv14CurrentShift 2
#define GDW_CHUsePv15Voltage                    39      // 1 Bit, Bit 1
#define     GDW_CHUsePv15VoltageMask 0x02
#define     GDW_CHUsePv15VoltageShift 1
#define GDW_CHUsePv15Current                    39      // 1 Bit, Bit 0
#define     GDW_CHUsePv15CurrentMask 0x01
#define     GDW_CHUsePv15CurrentShift 0
#define GDW_CHUsePv16Voltage                    40      // 1 Bit, Bit 7
#define     GDW_CHUsePv16VoltageMask 0x80
#define     GDW_CHUsePv16VoltageShift 7
#define GDW_CHUsePv16Current                    40      // 1 Bit, Bit 6
#define     GDW_CHUsePv16CurrentMask 0x40
#define     GDW_CHUsePv16CurrentShift 6
#define GDW_CHUseMppt1Power                     40      // 1 Bit, Bit 5
#define     GDW_CHUseMppt1PowerMask 0x20
#define     GDW_CHUseMppt1PowerShift 5
#define GDW_CHUseMppt2Power                     40      // 1 Bit, Bit 4
#define     GDW_CHUseMppt2PowerMask 0x10
#define     GDW_CHUseMppt2PowerShift 4
#define GDW_CHUseMppt3Power                     40      // 1 Bit, Bit 3
#define     GDW_CHUseMppt3PowerMask 0x08
#define     GDW_CHUseMppt3PowerShift 3
#define GDW_CHUseMppt4Power                     40      // 1 Bit, Bit 2
#define     GDW_CHUseMppt4PowerMask 0x04
#define     GDW_CHUseMppt4PowerShift 2
#define GDW_CHUseMppt5Power                     40      // 1 Bit, Bit 1
#define     GDW_CHUseMppt5PowerMask 0x02
#define     GDW_CHUseMppt5PowerShift 1
#define GDW_CHUseMppt6Power                     40      // 1 Bit, Bit 0
#define     GDW_CHUseMppt6PowerMask 0x01
#define     GDW_CHUseMppt6PowerShift 0
#define GDW_CHUseMppt7Power                     41      // 1 Bit, Bit 7
#define     GDW_CHUseMppt7PowerMask 0x80
#define     GDW_CHUseMppt7PowerShift 7
#define GDW_CHUseMppt8Power                     41      // 1 Bit, Bit 6
#define     GDW_CHUseMppt8PowerMask 0x40
#define     GDW_CHUseMppt8PowerShift 6
#define GDW_CHUseMppt1Current                   41      // 1 Bit, Bit 5
#define     GDW_CHUseMppt1CurrentMask 0x20
#define     GDW_CHUseMppt1CurrentShift 5
#define GDW_CHUseMppt2Current                   41      // 1 Bit, Bit 4
#define     GDW_CHUseMppt2CurrentMask 0x10
#define     GDW_CHUseMppt2CurrentShift 4
#define GDW_CHUseMppt3Current                   41      // 1 Bit, Bit 3
#define     GDW_CHUseMppt3CurrentMask 0x08
#define     GDW_CHUseMppt3CurrentShift 3
#define GDW_CHUseMppt4Current                   41      // 1 Bit, Bit 2
#define     GDW_CHUseMppt4CurrentMask 0x04
#define     GDW_CHUseMppt4CurrentShift 2
#define GDW_CHUseMppt5Current                   41      // 1 Bit, Bit 1
#define     GDW_CHUseMppt5CurrentMask 0x02
#define     GDW_CHUseMppt5CurrentShift 1
#define GDW_CHUseMppt6Current                   41      // 1 Bit, Bit 0
#define     GDW_CHUseMppt6CurrentMask 0x01
#define     GDW_CHUseMppt6CurrentShift 0
#define GDW_CHUseMppt7Current                   42      // 1 Bit, Bit 7
#define     GDW_CHUseMppt7CurrentMask 0x80
#define     GDW_CHUseMppt7CurrentShift 7
#define GDW_CHUseMppt8Current                   42      // 1 Bit, Bit 6
#define     GDW_CHUseMppt8CurrentMask 0x40
#define     GDW_CHUseMppt8CurrentShift 6
#define GDW_CHUseGridVoltageL1                  42      // 1 Bit, Bit 5
#define     GDW_CHUseGridVoltageL1Mask 0x20
#define     GDW_CHUseGridVoltageL1Shift 5
#define GDW_CHUseGridCurrentL1                  42      // 1 Bit, Bit 4
#define     GDW_CHUseGridCurrentL1Mask 0x10
#define     GDW_CHUseGridCurrentL1Shift 4
#define GDW_CHUseGridFrequencyL1                42      // 1 Bit, Bit 3
#define     GDW_CHUseGridFrequencyL1Mask 0x08
#define     GDW_CHUseGridFrequencyL1Shift 3
#define GDW_CHUseGridPowerL1                    42      // 1 Bit, Bit 2
#define     GDW_CHUseGridPowerL1Mask 0x04
#define     GDW_CHUseGridPowerL1Shift 2
#define GDW_CHUseGridVoltageL2                  42      // 1 Bit, Bit 1
#define     GDW_CHUseGridVoltageL2Mask 0x02
#define     GDW_CHUseGridVoltageL2Shift 1
#define GDW_CHUseGridCurrentL2                  42      // 1 Bit, Bit 0
#define     GDW_CHUseGridCurrentL2Mask 0x01
#define     GDW_CHUseGridCurrentL2Shift 0
#define GDW_CHUseGridFrequencyL2                43      // 1 Bit, Bit 7
#define     GDW_CHUseGridFrequencyL2Mask 0x80
#define     GDW_CHUseGridFrequencyL2Shift 7
#define GDW_CHUseGridPowerL2                    43      // 1 Bit, Bit 6
#define     GDW_CHUseGridPowerL2Mask 0x40
#define     GDW_CHUseGridPowerL2Shift 6
#define GDW_CHUseGridVoltageL3                  43      // 1 Bit, Bit 5
#define     GDW_CHUseGridVoltageL3Mask 0x20
#define     GDW_CHUseGridVoltageL3Shift 5
#define GDW_CHUseGridCurrentL3                  43      // 1 Bit, Bit 4
#define     GDW_CHUseGridCurrentL3Mask 0x10
#define     GDW_CHUseGridCurrentL3Shift 4
#define GDW_CHUseGridFrequencyL3                43      // 1 Bit, Bit 3
#define     GDW_CHUseGridFrequencyL3Mask 0x08
#define     GDW_CHUseGridFrequencyL3Shift 3
#define GDW_CHUseGridPowerL3                    43      // 1 Bit, Bit 2
#define     GDW_CHUseGridPowerL3Mask 0x04
#define     GDW_CHUseGridPowerL3Shift 2
#define GDW_CHUseInverterPower                  43      // 1 Bit, Bit 1
#define     GDW_CHUseInverterPowerMask 0x02
#define     GDW_CHUseInverterPowerShift 1
#define GDW_CHUseActivePower                    43      // 1 Bit, Bit 0
#define     GDW_CHUseActivePowerMask 0x01
#define     GDW_CHUseActivePowerShift 0
#define GDW_CHUseImportPower                    44      // 1 Bit, Bit 7
#define     GDW_CHUseImportPowerMask 0x80
#define     GDW_CHUseImportPowerShift 7
#define GDW_CHUseExportPower                    44      // 1 Bit, Bit 6
#define     GDW_CHUseExportPowerMask 0x40
#define     GDW_CHUseExportPowerShift 6
#define GDW_CHUseReactivePower                  44      // 1 Bit, Bit 5
#define     GDW_CHUseReactivePowerMask 0x20
#define     GDW_CHUseReactivePowerShift 5
#define GDW_CHUseApparentPower                  44      // 1 Bit, Bit 4
#define     GDW_CHUseApparentPowerMask 0x10
#define     GDW_CHUseApparentPowerShift 4
#define GDW_CHUseHouseConsumption               44      // 1 Bit, Bit 3
#define     GDW_CHUseHouseConsumptionMask 0x08
#define     GDW_CHUseHouseConsumptionShift 3
#define GDW_CHUseReactivePowerL1                44      // 1 Bit, Bit 2
#define     GDW_CHUseReactivePowerL1Mask 0x04
#define     GDW_CHUseReactivePowerL1Shift 2
#define GDW_CHUseReactivePowerL2                44      // 1 Bit, Bit 1
#define     GDW_CHUseReactivePowerL2Mask 0x02
#define     GDW_CHUseReactivePowerL2Shift 1
#define GDW_CHUseReactivePowerL3                44      // 1 Bit, Bit 0
#define     GDW_CHUseReactivePowerL3Mask 0x01
#define     GDW_CHUseReactivePowerL3Shift 0
#define GDW_CHUseApparentPowerL1                45      // 1 Bit, Bit 7
#define     GDW_CHUseApparentPowerL1Mask 0x80
#define     GDW_CHUseApparentPowerL1Shift 7
#define GDW_CHUseApparentPowerL2                45      // 1 Bit, Bit 6
#define     GDW_CHUseApparentPowerL2Mask 0x40
#define     GDW_CHUseApparentPowerL2Shift 6
#define GDW_CHUseApparentPowerL3                45      // 1 Bit, Bit 5
#define     GDW_CHUseApparentPowerL3Mask 0x20
#define     GDW_CHUseApparentPowerL3Shift 5
#define GDW_CHUseLineVoltageL1L2                45      // 1 Bit, Bit 4
#define     GDW_CHUseLineVoltageL1L2Mask 0x10
#define     GDW_CHUseLineVoltageL1L2Shift 4
#define GDW_CHUseLineVoltageL2L3                45      // 1 Bit, Bit 3
#define     GDW_CHUseLineVoltageL2L3Mask 0x08
#define     GDW_CHUseLineVoltageL2L3Shift 3
#define GDW_CHUseLineVoltageL3L1                45      // 1 Bit, Bit 2
#define     GDW_CHUseLineVoltageL3L1Mask 0x04
#define     GDW_CHUseLineVoltageL3L1Shift 2
#define GDW_CHUsePowerFactor                    45      // 1 Bit, Bit 1
#define     GDW_CHUsePowerFactorMask 0x02
#define     GDW_CHUsePowerFactorShift 1
#define GDW_CHUseBackupVoltageL1                45      // 1 Bit, Bit 0
#define     GDW_CHUseBackupVoltageL1Mask 0x01
#define     GDW_CHUseBackupVoltageL1Shift 0
#define GDW_CHUseBackupCurrentL1                46      // 1 Bit, Bit 7
#define     GDW_CHUseBackupCurrentL1Mask 0x80
#define     GDW_CHUseBackupCurrentL1Shift 7
#define GDW_CHUseBackupFrequencyL1              46      // 1 Bit, Bit 6
#define     GDW_CHUseBackupFrequencyL1Mask 0x40
#define     GDW_CHUseBackupFrequencyL1Shift 6
#define GDW_CHUseLoadModeL1                     46      // 1 Bit, Bit 5
#define     GDW_CHUseLoadModeL1Mask 0x20
#define     GDW_CHUseLoadModeL1Shift 5
#define GDW_CHUseBackupPowerL1                  46      // 1 Bit, Bit 4
#define     GDW_CHUseBackupPowerL1Mask 0x10
#define     GDW_CHUseBackupPowerL1Shift 4
#define GDW_CHUseBackupVoltageL2                46      // 1 Bit, Bit 3
#define     GDW_CHUseBackupVoltageL2Mask 0x08
#define     GDW_CHUseBackupVoltageL2Shift 3
#define GDW_CHUseBackupCurrentL2                46      // 1 Bit, Bit 2
#define     GDW_CHUseBackupCurrentL2Mask 0x04
#define     GDW_CHUseBackupCurrentL2Shift 2
#define GDW_CHUseBackupFrequencyL2              46      // 1 Bit, Bit 1
#define     GDW_CHUseBackupFrequencyL2Mask 0x02
#define     GDW_CHUseBackupFrequencyL2Shift 1
#define GDW_CHUseLoadModeL2                     46      // 1 Bit, Bit 0
#define     GDW_CHUseLoadModeL2Mask 0x01
#define     GDW_CHUseLoadModeL2Shift 0
#define GDW_CHUseBackupPowerL2                  47      // 1 Bit, Bit 7
#define     GDW_CHUseBackupPowerL2Mask 0x80
#define     GDW_CHUseBackupPowerL2Shift 7
#define GDW_CHUseBackupVoltageL3                47      // 1 Bit, Bit 6
#define     GDW_CHUseBackupVoltageL3Mask 0x40
#define     GDW_CHUseBackupVoltageL3Shift 6
#define GDW_CHUseBackupCurrentL3                47      // 1 Bit, Bit 5
#define     GDW_CHUseBackupCurrentL3Mask 0x20
#define     GDW_CHUseBackupCurrentL3Shift 5
#define GDW_CHUseBackupFrequencyL3              47      // 1 Bit, Bit 4
#define     GDW_CHUseBackupFrequencyL3Mask 0x10
#define     GDW_CHUseBackupFrequencyL3Shift 4
#define GDW_CHUseLoadModeL3                     47      // 1 Bit, Bit 3
#define     GDW_CHUseLoadModeL3Mask 0x08
#define     GDW_CHUseLoadModeL3Shift 3
#define GDW_CHUseBackupPowerL3                  47      // 1 Bit, Bit 2
#define     GDW_CHUseBackupPowerL3Mask 0x04
#define     GDW_CHUseBackupPowerL3Shift 2
#define GDW_CHUseLoadPowerL1                    47      // 1 Bit, Bit 1
#define     GDW_CHUseLoadPowerL1Mask 0x02
#define     GDW_CHUseLoadPowerL1Shift 1
#define GDW_CHUseLoadPowerL2                    47      // 1 Bit, Bit 0
#define     GDW_CHUseLoadPowerL2Mask 0x01
#define     GDW_CHUseLoadPowerL2Shift 0
#define GDW_CHUseLoadPowerL3                    48      // 1 Bit, Bit 7
#define     GDW_CHUseLoadPowerL3Mask 0x80
#define     GDW_CHUseLoadPowerL3Shift 7
#define GDW_CHUseBackupPowerTotal               48      // 1 Bit, Bit 6
#define     GDW_CHUseBackupPowerTotalMask 0x40
#define     GDW_CHUseBackupPowerTotalShift 6
#define GDW_CHUseLoadPowerTotal                 48      // 1 Bit, Bit 5
#define     GDW_CHUseLoadPowerTotalMask 0x20
#define     GDW_CHUseLoadPowerTotalShift 5
#define GDW_CHUseUpsLoad                        48      // 1 Bit, Bit 4
#define     GDW_CHUseUpsLoadMask 0x10
#define     GDW_CHUseUpsLoadShift 4
#define GDW_CHUseBatteryVoltage                 48      // 1 Bit, Bit 3
#define     GDW_CHUseBatteryVoltageMask 0x08
#define     GDW_CHUseBatteryVoltageShift 3
#define GDW_CHUseBatteryCurrent                 48      // 1 Bit, Bit 2
#define     GDW_CHUseBatteryCurrentMask 0x04
#define     GDW_CHUseBatteryCurrentShift 2
#define GDW_CHUseBatteryPower                   48      // 1 Bit, Bit 1
#define     GDW_CHUseBatteryPowerMask 0x02
#define     GDW_CHUseBatteryPowerShift 1
#define GDW_CHUseBatteryMode                    48      // 1 Bit, Bit 0
#define     GDW_CHUseBatteryModeMask 0x01
#define     GDW_CHUseBatteryModeShift 0
#define GDW_CHUseBatterySoc                     49      // 1 Bit, Bit 7
#define     GDW_CHUseBatterySocMask 0x80
#define     GDW_CHUseBatterySocShift 7
#define GDW_CHUseBatterySoh                     49      // 1 Bit, Bit 6
#define     GDW_CHUseBatterySohMask 0x40
#define     GDW_CHUseBatterySohShift 6
#define GDW_CHUseBatteryTemperature             49      // 1 Bit, Bit 5
#define     GDW_CHUseBatteryTemperatureMask 0x20
#define     GDW_CHUseBatteryTemperatureShift 5
#define GDW_CHUseBatteryChargeLimit             49      // 1 Bit, Bit 4
#define     GDW_CHUseBatteryChargeLimitMask 0x10
#define     GDW_CHUseBatteryChargeLimitShift 4
#define GDW_CHUseBatteryDischargeLimit          49      // 1 Bit, Bit 3
#define     GDW_CHUseBatteryDischargeLimitMask 0x08
#define     GDW_CHUseBatteryDischargeLimitShift 3
#define GDW_CHUseBatteryBms                     49      // 1 Bit, Bit 2
#define     GDW_CHUseBatteryBmsMask 0x04
#define     GDW_CHUseBatteryBmsShift 2
#define GDW_CHUseBatteryIndex                   49      // 1 Bit, Bit 1
#define     GDW_CHUseBatteryIndexMask 0x02
#define     GDW_CHUseBatteryIndexShift 1
#define GDW_CHUseBatteryStatus                  49      // 1 Bit, Bit 0
#define     GDW_CHUseBatteryStatusMask 0x01
#define     GDW_CHUseBatteryStatusShift 0
#define GDW_CHUseBatteryModules                 50      // 1 Bit, Bit 7
#define     GDW_CHUseBatteryModulesMask 0x80
#define     GDW_CHUseBatteryModulesShift 7
#define GDW_CHUseBatteryProtocol                50      // 1 Bit, Bit 6
#define     GDW_CHUseBatteryProtocolMask 0x40
#define     GDW_CHUseBatteryProtocolShift 6
#define GDW_CHUseBatteryError                   50      // 1 Bit, Bit 5
#define     GDW_CHUseBatteryErrorMask 0x20
#define     GDW_CHUseBatteryErrorShift 5
#define GDW_CHUseBatteryWarning                 50      // 1 Bit, Bit 4
#define     GDW_CHUseBatteryWarningMask 0x10
#define     GDW_CHUseBatteryWarningShift 4
#define GDW_CHUseBatterySwVersion               50      // 1 Bit, Bit 3
#define     GDW_CHUseBatterySwVersionMask 0x08
#define     GDW_CHUseBatterySwVersionShift 3
#define GDW_CHUseBatteryHwVersion               50      // 1 Bit, Bit 2
#define     GDW_CHUseBatteryHwVersionMask 0x04
#define     GDW_CHUseBatteryHwVersionShift 2
#define GDW_CHUseBatteryMaxCellTempId           50      // 1 Bit, Bit 1
#define     GDW_CHUseBatteryMaxCellTempIdMask 0x02
#define     GDW_CHUseBatteryMaxCellTempIdShift 1
#define GDW_CHUseBatteryMinCellTempId           50      // 1 Bit, Bit 0
#define     GDW_CHUseBatteryMinCellTempIdMask 0x01
#define     GDW_CHUseBatteryMinCellTempIdShift 0
#define GDW_CHUseBatteryMaxCellVoltId           51      // 1 Bit, Bit 7
#define     GDW_CHUseBatteryMaxCellVoltIdMask 0x80
#define     GDW_CHUseBatteryMaxCellVoltIdShift 7
#define GDW_CHUseBatteryMinCellVoltId           51      // 1 Bit, Bit 6
#define     GDW_CHUseBatteryMinCellVoltIdMask 0x40
#define     GDW_CHUseBatteryMinCellVoltIdShift 6
#define GDW_CHUseBatteryMaxCellTemp             51      // 1 Bit, Bit 5
#define     GDW_CHUseBatteryMaxCellTempMask 0x20
#define     GDW_CHUseBatteryMaxCellTempShift 5
#define GDW_CHUseBatteryMinCellTemp             51      // 1 Bit, Bit 4
#define     GDW_CHUseBatteryMinCellTempMask 0x10
#define     GDW_CHUseBatteryMinCellTempShift 4
#define GDW_CHUseBatteryMaxCellVoltage          51      // 1 Bit, Bit 3
#define     GDW_CHUseBatteryMaxCellVoltageMask 0x08
#define     GDW_CHUseBatteryMaxCellVoltageShift 3
#define GDW_CHUseBatteryMinCellVoltage          51      // 1 Bit, Bit 2
#define     GDW_CHUseBatteryMinCellVoltageMask 0x04
#define     GDW_CHUseBatteryMinCellVoltageShift 2
#define GDW_CHUseBatteryCapacity                51      // 1 Bit, Bit 1
#define     GDW_CHUseBatteryCapacityMask 0x02
#define     GDW_CHUseBatteryCapacityShift 1
#define GDW_CHUseBattery2Voltage                51      // 1 Bit, Bit 0
#define     GDW_CHUseBattery2VoltageMask 0x01
#define     GDW_CHUseBattery2VoltageShift 0
#define GDW_CHUseBattery2Current                52      // 1 Bit, Bit 7
#define     GDW_CHUseBattery2CurrentMask 0x80
#define     GDW_CHUseBattery2CurrentShift 7
#define GDW_CHUseBattery2Power                  52      // 1 Bit, Bit 6
#define     GDW_CHUseBattery2PowerMask 0x40
#define     GDW_CHUseBattery2PowerShift 6
#define GDW_CHUseBattery2Mode                   52      // 1 Bit, Bit 5
#define     GDW_CHUseBattery2ModeMask 0x20
#define     GDW_CHUseBattery2ModeShift 5
#define GDW_CHUseBattery2Status                 52      // 1 Bit, Bit 4
#define     GDW_CHUseBattery2StatusMask 0x10
#define     GDW_CHUseBattery2StatusShift 4
#define GDW_CHUseBattery2Temperature            52      // 1 Bit, Bit 3
#define     GDW_CHUseBattery2TemperatureMask 0x08
#define     GDW_CHUseBattery2TemperatureShift 3
#define GDW_CHUseBattery2ChargeLimit            52      // 1 Bit, Bit 2
#define     GDW_CHUseBattery2ChargeLimitMask 0x04
#define     GDW_CHUseBattery2ChargeLimitShift 2
#define GDW_CHUseBattery2DischargeLimit         52      // 1 Bit, Bit 1
#define     GDW_CHUseBattery2DischargeLimitMask 0x02
#define     GDW_CHUseBattery2DischargeLimitShift 1
#define GDW_CHUseBattery2Soc                    52      // 1 Bit, Bit 0
#define     GDW_CHUseBattery2SocMask 0x01
#define     GDW_CHUseBattery2SocShift 0
#define GDW_CHUseBattery2Soh                    53      // 1 Bit, Bit 7
#define     GDW_CHUseBattery2SohMask 0x80
#define     GDW_CHUseBattery2SohShift 7
#define GDW_CHUseBattery2Modules                53      // 1 Bit, Bit 6
#define     GDW_CHUseBattery2ModulesMask 0x40
#define     GDW_CHUseBattery2ModulesShift 6
#define GDW_CHUseBattery2Protocol               53      // 1 Bit, Bit 5
#define     GDW_CHUseBattery2ProtocolMask 0x20
#define     GDW_CHUseBattery2ProtocolShift 5
#define GDW_CHUseBattery2Error                  53      // 1 Bit, Bit 4
#define     GDW_CHUseBattery2ErrorMask 0x10
#define     GDW_CHUseBattery2ErrorShift 4
#define GDW_CHUseBattery2Warning                53      // 1 Bit, Bit 3
#define     GDW_CHUseBattery2WarningMask 0x08
#define     GDW_CHUseBattery2WarningShift 3
#define GDW_CHUseBattery2SwVersion              53      // 1 Bit, Bit 2
#define     GDW_CHUseBattery2SwVersionMask 0x04
#define     GDW_CHUseBattery2SwVersionShift 2
#define GDW_CHUseBattery2HwVersion              53      // 1 Bit, Bit 1
#define     GDW_CHUseBattery2HwVersionMask 0x02
#define     GDW_CHUseBattery2HwVersionShift 1
#define GDW_CHUseBattery2MaxCellTempId          53      // 1 Bit, Bit 0
#define     GDW_CHUseBattery2MaxCellTempIdMask 0x01
#define     GDW_CHUseBattery2MaxCellTempIdShift 0
#define GDW_CHUseBattery2MinCellTempId          54      // 1 Bit, Bit 7
#define     GDW_CHUseBattery2MinCellTempIdMask 0x80
#define     GDW_CHUseBattery2MinCellTempIdShift 7
#define GDW_CHUseBattery2MaxCellVoltId          54      // 1 Bit, Bit 6
#define     GDW_CHUseBattery2MaxCellVoltIdMask 0x40
#define     GDW_CHUseBattery2MaxCellVoltIdShift 6
#define GDW_CHUseBattery2MinCellVoltId          54      // 1 Bit, Bit 5
#define     GDW_CHUseBattery2MinCellVoltIdMask 0x20
#define     GDW_CHUseBattery2MinCellVoltIdShift 5
#define GDW_CHUseBattery2MaxCellTemp            54      // 1 Bit, Bit 4
#define     GDW_CHUseBattery2MaxCellTempMask 0x10
#define     GDW_CHUseBattery2MaxCellTempShift 4
#define GDW_CHUseBattery2MinCellTemp            54      // 1 Bit, Bit 3
#define     GDW_CHUseBattery2MinCellTempMask 0x08
#define     GDW_CHUseBattery2MinCellTempShift 3
#define GDW_CHUseBattery2MaxCellVoltage         54      // 1 Bit, Bit 2
#define     GDW_CHUseBattery2MaxCellVoltageMask 0x04
#define     GDW_CHUseBattery2MaxCellVoltageShift 2
#define GDW_CHUseBattery2MinCellVoltage         54      // 1 Bit, Bit 1
#define     GDW_CHUseBattery2MinCellVoltageMask 0x02
#define     GDW_CHUseBattery2MinCellVoltageShift 1
#define GDW_CHUseEnergyTotal                    54      // 1 Bit, Bit 0
#define     GDW_CHUseEnergyTotalMask 0x01
#define     GDW_CHUseEnergyTotalShift 0
#define GDW_CHUseEnergyToday                    55      // 1 Bit, Bit 7
#define     GDW_CHUseEnergyTodayMask 0x80
#define     GDW_CHUseEnergyTodayShift 7
#define GDW_CHUseMeterExportTotal               55      // 1 Bit, Bit 6
#define     GDW_CHUseMeterExportTotalMask 0x40
#define     GDW_CHUseMeterExportTotalShift 6
#define GDW_CHUseMeterImportTotal               55      // 1 Bit, Bit 5
#define     GDW_CHUseMeterImportTotalMask 0x20
#define     GDW_CHUseMeterImportTotalShift 5
#define GDW_CHUseExportTotal                    55      // 1 Bit, Bit 4
#define     GDW_CHUseExportTotalMask 0x10
#define     GDW_CHUseExportTotalShift 4
#define GDW_CHUseExportToday                    55      // 1 Bit, Bit 3
#define     GDW_CHUseExportTodayMask 0x08
#define     GDW_CHUseExportTodayShift 3
#define GDW_CHUseImportTotal                    55      // 1 Bit, Bit 2
#define     GDW_CHUseImportTotalMask 0x04
#define     GDW_CHUseImportTotalShift 2
#define GDW_CHUseImportToday                    55      // 1 Bit, Bit 1
#define     GDW_CHUseImportTodayMask 0x02
#define     GDW_CHUseImportTodayShift 1
#define GDW_CHUseLoadTotal                      55      // 1 Bit, Bit 0
#define     GDW_CHUseLoadTotalMask 0x01
#define     GDW_CHUseLoadTotalShift 0
#define GDW_CHUseLoadToday                      56      // 1 Bit, Bit 7
#define     GDW_CHUseLoadTodayMask 0x80
#define     GDW_CHUseLoadTodayShift 7
#define GDW_CHUseBatteryChargeTotal             56      // 1 Bit, Bit 6
#define     GDW_CHUseBatteryChargeTotalMask 0x40
#define     GDW_CHUseBatteryChargeTotalShift 6
#define GDW_CHUseBatteryChargeToday             56      // 1 Bit, Bit 5
#define     GDW_CHUseBatteryChargeTodayMask 0x20
#define     GDW_CHUseBatteryChargeTodayShift 5
#define GDW_CHUseBatteryDischargeTotal          56      // 1 Bit, Bit 4
#define     GDW_CHUseBatteryDischargeTotalMask 0x10
#define     GDW_CHUseBatteryDischargeTotalShift 4
#define GDW_CHUseBatteryDischargeToday          56      // 1 Bit, Bit 3
#define     GDW_CHUseBatteryDischargeTodayMask 0x08
#define     GDW_CHUseBatteryDischargeTodayShift 3
#define GDW_CHUseMeterCommode                   56      // 1 Bit, Bit 2
#define     GDW_CHUseMeterCommodeMask 0x04
#define     GDW_CHUseMeterCommodeShift 2
#define GDW_CHUseMeterManufacturer              56      // 1 Bit, Bit 1
#define     GDW_CHUseMeterManufacturerMask 0x02
#define     GDW_CHUseMeterManufacturerShift 1
#define GDW_CHUseMeterTestStatus                56      // 1 Bit, Bit 0
#define     GDW_CHUseMeterTestStatusMask 0x01
#define     GDW_CHUseMeterTestStatusShift 0
#define GDW_CHUseMeterTypeCode                  57      // 1 Bit, Bit 7
#define     GDW_CHUseMeterTypeCodeMask 0x80
#define     GDW_CHUseMeterTypeCodeShift 7
#define GDW_CHUseMeterSwVersion                 57      // 1 Bit, Bit 6
#define     GDW_CHUseMeterSwVersionMask 0x40
#define     GDW_CHUseMeterSwVersionShift 6
#define GDW_CHUseMeterPowerL1                   57      // 1 Bit, Bit 5
#define     GDW_CHUseMeterPowerL1Mask 0x20
#define     GDW_CHUseMeterPowerL1Shift 5
#define GDW_CHUseMeterPowerL2                   57      // 1 Bit, Bit 4
#define     GDW_CHUseMeterPowerL2Mask 0x10
#define     GDW_CHUseMeterPowerL2Shift 4
#define GDW_CHUseMeterPowerL3                   57      // 1 Bit, Bit 3
#define     GDW_CHUseMeterPowerL3Mask 0x08
#define     GDW_CHUseMeterPowerL3Shift 3
#define GDW_CHUseMeterPowerTotal                57      // 1 Bit, Bit 2
#define     GDW_CHUseMeterPowerTotalMask 0x04
#define     GDW_CHUseMeterPowerTotalShift 2
#define GDW_CHUseMeterPower16L1                 57      // 1 Bit, Bit 1
#define     GDW_CHUseMeterPower16L1Mask 0x02
#define     GDW_CHUseMeterPower16L1Shift 1
#define GDW_CHUseMeterPower16L2                 57      // 1 Bit, Bit 0
#define     GDW_CHUseMeterPower16L2Mask 0x01
#define     GDW_CHUseMeterPower16L2Shift 0
#define GDW_CHUseMeterPower16L3                 58      // 1 Bit, Bit 7
#define     GDW_CHUseMeterPower16L3Mask 0x80
#define     GDW_CHUseMeterPower16L3Shift 7
#define GDW_CHUseMeterPower16Total              58      // 1 Bit, Bit 6
#define     GDW_CHUseMeterPower16TotalMask 0x40
#define     GDW_CHUseMeterPower16TotalShift 6
#define GDW_CHUseMeterReactiveL1                58      // 1 Bit, Bit 5
#define     GDW_CHUseMeterReactiveL1Mask 0x20
#define     GDW_CHUseMeterReactiveL1Shift 5
#define GDW_CHUseMeterReactiveL2                58      // 1 Bit, Bit 4
#define     GDW_CHUseMeterReactiveL2Mask 0x10
#define     GDW_CHUseMeterReactiveL2Shift 4
#define GDW_CHUseMeterReactiveL3                58      // 1 Bit, Bit 3
#define     GDW_CHUseMeterReactiveL3Mask 0x08
#define     GDW_CHUseMeterReactiveL3Shift 3
#define GDW_CHUseMeterReactiveTotal             58      // 1 Bit, Bit 2
#define     GDW_CHUseMeterReactiveTotalMask 0x04
#define     GDW_CHUseMeterReactiveTotalShift 2
#define GDW_CHUseMeterReactive16Total           58      // 1 Bit, Bit 1
#define     GDW_CHUseMeterReactive16TotalMask 0x02
#define     GDW_CHUseMeterReactive16TotalShift 1
#define GDW_CHUseMeterApparentL1                58      // 1 Bit, Bit 0
#define     GDW_CHUseMeterApparentL1Mask 0x01
#define     GDW_CHUseMeterApparentL1Shift 0
#define GDW_CHUseMeterApparentL2                59      // 1 Bit, Bit 7
#define     GDW_CHUseMeterApparentL2Mask 0x80
#define     GDW_CHUseMeterApparentL2Shift 7
#define GDW_CHUseMeterApparentL3                59      // 1 Bit, Bit 6
#define     GDW_CHUseMeterApparentL3Mask 0x40
#define     GDW_CHUseMeterApparentL3Shift 6
#define GDW_CHUseMeterApparentTotal             59      // 1 Bit, Bit 5
#define     GDW_CHUseMeterApparentTotalMask 0x20
#define     GDW_CHUseMeterApparentTotalShift 5
#define GDW_CHUseMeterPowerFactorL1             59      // 1 Bit, Bit 4
#define     GDW_CHUseMeterPowerFactorL1Mask 0x10
#define     GDW_CHUseMeterPowerFactorL1Shift 4
#define GDW_CHUseMeterPowerFactorL2             59      // 1 Bit, Bit 3
#define     GDW_CHUseMeterPowerFactorL2Mask 0x08
#define     GDW_CHUseMeterPowerFactorL2Shift 3
#define GDW_CHUseMeterPowerFactorL3             59      // 1 Bit, Bit 2
#define     GDW_CHUseMeterPowerFactorL3Mask 0x04
#define     GDW_CHUseMeterPowerFactorL3Shift 2
#define GDW_CHUseMeterPowerFactor               59      // 1 Bit, Bit 1
#define     GDW_CHUseMeterPowerFactorMask 0x02
#define     GDW_CHUseMeterPowerFactorShift 1
#define GDW_CHUseMeterFrequency                 59      // 1 Bit, Bit 0
#define     GDW_CHUseMeterFrequencyMask 0x01
#define     GDW_CHUseMeterFrequencyShift 0
#define GDW_CHUseMeterVoltageL1                 60      // 1 Bit, Bit 7
#define     GDW_CHUseMeterVoltageL1Mask 0x80
#define     GDW_CHUseMeterVoltageL1Shift 7
#define GDW_CHUseMeterVoltageL2                 60      // 1 Bit, Bit 6
#define     GDW_CHUseMeterVoltageL2Mask 0x40
#define     GDW_CHUseMeterVoltageL2Shift 6
#define GDW_CHUseMeterVoltageL3                 60      // 1 Bit, Bit 5
#define     GDW_CHUseMeterVoltageL3Mask 0x20
#define     GDW_CHUseMeterVoltageL3Shift 5
#define GDW_CHUseMeterCurrentL1                 60      // 1 Bit, Bit 4
#define     GDW_CHUseMeterCurrentL1Mask 0x10
#define     GDW_CHUseMeterCurrentL1Shift 4
#define GDW_CHUseMeterCurrentL2                 60      // 1 Bit, Bit 3
#define     GDW_CHUseMeterCurrentL2Mask 0x08
#define     GDW_CHUseMeterCurrentL2Shift 3
#define GDW_CHUseMeterCurrentL3                 60      // 1 Bit, Bit 2
#define     GDW_CHUseMeterCurrentL3Mask 0x04
#define     GDW_CHUseMeterCurrentL3Shift 2
#define GDW_CHUseMeter2Power                    60      // 1 Bit, Bit 1
#define     GDW_CHUseMeter2PowerMask 0x02
#define     GDW_CHUseMeter2PowerShift 1
#define GDW_CHUseMeter2ExportTotal              60      // 1 Bit, Bit 0
#define     GDW_CHUseMeter2ExportTotalMask 0x01
#define     GDW_CHUseMeter2ExportTotalShift 0
#define GDW_CHUseMeter2ImportTotal              61      // 1 Bit, Bit 7
#define     GDW_CHUseMeter2ImportTotalMask 0x80
#define     GDW_CHUseMeter2ImportTotalShift 7
#define GDW_CHUseMeter2CommStatus               61      // 1 Bit, Bit 6
#define     GDW_CHUseMeter2CommStatusMask 0x40
#define     GDW_CHUseMeter2CommStatusShift 6
#define GDW_CHUseMeterExportL1                  61      // 1 Bit, Bit 5
#define     GDW_CHUseMeterExportL1Mask 0x20
#define     GDW_CHUseMeterExportL1Shift 5
#define GDW_CHUseMeterExportL2                  61      // 1 Bit, Bit 4
#define     GDW_CHUseMeterExportL2Mask 0x10
#define     GDW_CHUseMeterExportL2Shift 4
#define GDW_CHUseMeterExportL3                  61      // 1 Bit, Bit 3
#define     GDW_CHUseMeterExportL3Mask 0x08
#define     GDW_CHUseMeterExportL3Shift 3
#define GDW_CHUseMeterExportTotal64             61      // 1 Bit, Bit 2
#define     GDW_CHUseMeterExportTotal64Mask 0x04
#define     GDW_CHUseMeterExportTotal64Shift 2
#define GDW_CHUseMeterImportL1                  61      // 1 Bit, Bit 1
#define     GDW_CHUseMeterImportL1Mask 0x02
#define     GDW_CHUseMeterImportL1Shift 1
#define GDW_CHUseMeterImportL2                  61      // 1 Bit, Bit 0
#define     GDW_CHUseMeterImportL2Mask 0x01
#define     GDW_CHUseMeterImportL2Shift 0
#define GDW_CHUseMeterImportL3                  62      // 1 Bit, Bit 7
#define     GDW_CHUseMeterImportL3Mask 0x80
#define     GDW_CHUseMeterImportL3Shift 7
#define GDW_CHUseMeterImportTotal64             62      // 1 Bit, Bit 6
#define     GDW_CHUseMeterImportTotal64Mask 0x40
#define     GDW_CHUseMeterImportTotal64Shift 6
#define GDW_CHUseBms1Version                    62      // 1 Bit, Bit 5
#define     GDW_CHUseBms1VersionMask 0x20
#define     GDW_CHUseBms1VersionShift 5
#define GDW_CHUseBms1Modules                    62      // 1 Bit, Bit 4
#define     GDW_CHUseBms1ModulesMask 0x10
#define     GDW_CHUseBms1ModulesShift 4
#define GDW_CHUseBms1ChargeVoltageMax           62      // 1 Bit, Bit 3
#define     GDW_CHUseBms1ChargeVoltageMaxMask 0x08
#define     GDW_CHUseBms1ChargeVoltageMaxShift 3
#define GDW_CHUseBms1ChargeCurrentMax           62      // 1 Bit, Bit 2
#define     GDW_CHUseBms1ChargeCurrentMaxMask 0x04
#define     GDW_CHUseBms1ChargeCurrentMaxShift 2
#define GDW_CHUseBms1DischargeVoltageMin        62      // 1 Bit, Bit 1
#define     GDW_CHUseBms1DischargeVoltageMinMask 0x02
#define     GDW_CHUseBms1DischargeVoltageMinShift 1
#define GDW_CHUseBms1DischargeCurrentMax        62      // 1 Bit, Bit 0
#define     GDW_CHUseBms1DischargeCurrentMaxMask 0x01
#define     GDW_CHUseBms1DischargeCurrentMaxShift 0
#define GDW_CHUseBms1Voltage                    63      // 1 Bit, Bit 7
#define     GDW_CHUseBms1VoltageMask 0x80
#define     GDW_CHUseBms1VoltageShift 7
#define GDW_CHUseBms1Current                    63      // 1 Bit, Bit 6
#define     GDW_CHUseBms1CurrentMask 0x40
#define     GDW_CHUseBms1CurrentShift 6
#define GDW_CHUseBms1Soc                        63      // 1 Bit, Bit 5
#define     GDW_CHUseBms1SocMask 0x20
#define     GDW_CHUseBms1SocShift 5
#define GDW_CHUseBms1Soh                        63      // 1 Bit, Bit 4
#define     GDW_CHUseBms1SohMask 0x10
#define     GDW_CHUseBms1SohShift 4
#define GDW_CHUseBms1Temperature                63      // 1 Bit, Bit 3
#define     GDW_CHUseBms1TemperatureMask 0x08
#define     GDW_CHUseBms1TemperatureShift 3
#define GDW_CHUseBms1WarningCode                63      // 1 Bit, Bit 2
#define     GDW_CHUseBms1WarningCodeMask 0x04
#define     GDW_CHUseBms1WarningCodeShift 2
#define GDW_CHUseBms1AlarmCode                  63      // 1 Bit, Bit 1
#define     GDW_CHUseBms1AlarmCodeMask 0x02
#define     GDW_CHUseBms1AlarmCodeShift 1
#define GDW_CHUseBms1Status                     63      // 1 Bit, Bit 0
#define     GDW_CHUseBms1StatusMask 0x01
#define     GDW_CHUseBms1StatusShift 0
#define GDW_CHUseBms1CommLossDisable            64      // 1 Bit, Bit 7
#define     GDW_CHUseBms1CommLossDisableMask 0x80
#define     GDW_CHUseBms1CommLossDisableShift 7
#define GDW_CHUseBms1StringRateVoltage          64      // 1 Bit, Bit 6
#define     GDW_CHUseBms1StringRateVoltageMask 0x40
#define     GDW_CHUseBms1StringRateVoltageShift 6
#define GDW_CHUseBms2Version                    64      // 1 Bit, Bit 5
#define     GDW_CHUseBms2VersionMask 0x20
#define     GDW_CHUseBms2VersionShift 5
#define GDW_CHUseBms2Modules                    64      // 1 Bit, Bit 4
#define     GDW_CHUseBms2ModulesMask 0x10
#define     GDW_CHUseBms2ModulesShift 4
#define GDW_CHUseBms2ChargeVoltageMax           64      // 1 Bit, Bit 3
#define     GDW_CHUseBms2ChargeVoltageMaxMask 0x08
#define     GDW_CHUseBms2ChargeVoltageMaxShift 3
#define GDW_CHUseBms2ChargeCurrentMax           64      // 1 Bit, Bit 2
#define     GDW_CHUseBms2ChargeCurrentMaxMask 0x04
#define     GDW_CHUseBms2ChargeCurrentMaxShift 2
#define GDW_CHUseBms2DischargeVoltageMin        64      // 1 Bit, Bit 1
#define     GDW_CHUseBms2DischargeVoltageMinMask 0x02
#define     GDW_CHUseBms2DischargeVoltageMinShift 1
#define GDW_CHUseBms2DischargeCurrentMax        64      // 1 Bit, Bit 0
#define     GDW_CHUseBms2DischargeCurrentMaxMask 0x01
#define     GDW_CHUseBms2DischargeCurrentMaxShift 0
#define GDW_CHUseBms2Voltage                    65      // 1 Bit, Bit 7
#define     GDW_CHUseBms2VoltageMask 0x80
#define     GDW_CHUseBms2VoltageShift 7
#define GDW_CHUseBms2Current                    65      // 1 Bit, Bit 6
#define     GDW_CHUseBms2CurrentMask 0x40
#define     GDW_CHUseBms2CurrentShift 6
#define GDW_CHUseBms2Soc                        65      // 1 Bit, Bit 5
#define     GDW_CHUseBms2SocMask 0x20
#define     GDW_CHUseBms2SocShift 5
#define GDW_CHUseBms2Soh                        65      // 1 Bit, Bit 4
#define     GDW_CHUseBms2SohMask 0x10
#define     GDW_CHUseBms2SohShift 4
#define GDW_CHUseBms2Temperature                65      // 1 Bit, Bit 3
#define     GDW_CHUseBms2TemperatureMask 0x08
#define     GDW_CHUseBms2TemperatureShift 3
#define GDW_CHUseBms2WarningCode                65      // 1 Bit, Bit 2
#define     GDW_CHUseBms2WarningCodeMask 0x04
#define     GDW_CHUseBms2WarningCodeShift 2
#define GDW_CHUseBms2AlarmCode                  65      // 1 Bit, Bit 1
#define     GDW_CHUseBms2AlarmCodeMask 0x02
#define     GDW_CHUseBms2AlarmCodeShift 1
#define GDW_CHUseBms2Status                     65      // 1 Bit, Bit 0
#define     GDW_CHUseBms2StatusMask 0x01
#define     GDW_CHUseBms2StatusShift 0
#define GDW_CHUseBms2CommLossDisable            66      // 1 Bit, Bit 7
#define     GDW_CHUseBms2CommLossDisableMask 0x80
#define     GDW_CHUseBms2CommLossDisableShift 7
#define GDW_CHUseBms2StringRateVoltage          66      // 1 Bit, Bit 6
#define     GDW_CHUseBms2StringRateVoltageMask 0x40
#define     GDW_CHUseBms2StringRateVoltageShift 6
#define GDW_CHUseOperationMode                  69      // 1 Bit, Bit 3
#define     GDW_CHUseOperationModeMask 0x08
#define     GDW_CHUseOperationModeShift 3
#define GDW_CHUseEmsMode                        69      // 1 Bit, Bit 2
#define     GDW_CHUseEmsModeMask 0x04
#define     GDW_CHUseEmsModeShift 2
#define GDW_CHUseEmsPowerLimit                  69      // 1 Bit, Bit 1
#define     GDW_CHUseEmsPowerLimitMask 0x02
#define     GDW_CHUseEmsPowerLimitShift 1
#define GDW_CHUseExportLimitEnable              69      // 1 Bit, Bit 0
#define     GDW_CHUseExportLimitEnableMask 0x01
#define     GDW_CHUseExportLimitEnableShift 0
#define GDW_CHUseExportLimit                    70      // 1 Bit, Bit 7
#define     GDW_CHUseExportLimitMask 0x80
#define     GDW_CHUseExportLimitShift 7
#define GDW_CHUseExportLimitPercent             70      // 1 Bit, Bit 6
#define     GDW_CHUseExportLimitPercentMask 0x40
#define     GDW_CHUseExportLimitPercentShift 6
#define GDW_CHUseDodOnGrid                      70      // 1 Bit, Bit 5
#define     GDW_CHUseDodOnGridMask 0x20
#define     GDW_CHUseDodOnGridShift 5
#define GDW_CHUseDodOffGrid                     70      // 1 Bit, Bit 4
#define     GDW_CHUseDodOffGridMask 0x10
#define     GDW_CHUseDodOffGridShift 4
#define GDW_CHUseSocProtection                  70      // 1 Bit, Bit 3
#define     GDW_CHUseSocProtectionMask 0x08
#define     GDW_CHUseSocProtectionShift 3
#define GDW_CHUseSocUpperLimit                  70      // 1 Bit, Bit 2
#define     GDW_CHUseSocUpperLimitMask 0x04
#define     GDW_CHUseSocUpperLimitShift 2
#define GDW_CHUseEcoModePower                   70      // 1 Bit, Bit 1
#define     GDW_CHUseEcoModePowerMask 0x02
#define     GDW_CHUseEcoModePowerShift 1
#define GDW_CHUseEcoModeSoc                     70      // 1 Bit, Bit 0
#define     GDW_CHUseEcoModeSocMask 0x01
#define     GDW_CHUseEcoModeSocShift 0
#define GDW_CHUseFastCharging                   71      // 1 Bit, Bit 7
#define     GDW_CHUseFastChargingMask 0x80
#define     GDW_CHUseFastChargingShift 7
#define GDW_CHUseFastChargingSoc                71      // 1 Bit, Bit 6
#define     GDW_CHUseFastChargingSocMask 0x40
#define     GDW_CHUseFastChargingSocShift 6
#define GDW_CHUseFastChargingPower              71      // 1 Bit, Bit 5
#define     GDW_CHUseFastChargingPowerMask 0x20
#define     GDW_CHUseFastChargingPowerShift 5
#define GDW_CHUseBackupSupply                   71      // 1 Bit, Bit 4
#define     GDW_CHUseBackupSupplyMask 0x10
#define     GDW_CHUseBackupSupplyShift 4
#define GDW_CHUseDodHolding                     71      // 1 Bit, Bit 3
#define     GDW_CHUseDodHoldingMask 0x08
#define     GDW_CHUseDodHoldingShift 3
#define GDW_CHUseLoadControl                    71      // 1 Bit, Bit 2
#define     GDW_CHUseLoadControlMask 0x04
#define     GDW_CHUseLoadControlShift 2
#define GDW_CHUseSyncClock                      71      // 1 Bit, Bit 1
#define     GDW_CHUseSyncClockMask 0x02
#define     GDW_CHUseSyncClockShift 1
#define GDW_CHUseStartInverter                  71      // 1 Bit, Bit 0
#define     GDW_CHUseStartInverterMask 0x01
#define     GDW_CHUseStartInverterShift 0
#define GDW_CHUseStopInverter                   72      // 1 Bit, Bit 7
#define     GDW_CHUseStopInverterMask 0x80
#define     GDW_CHUseStopInverterShift 7

// Wechselrichtertyp
#define ParamGDW_CHType                              (knx.paramByte(GDW_ParamCalcIndex(GDW_CHType)))
// Suspendiert
#define ParamGDW_CHSuspended                         ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHSuspended)) & GDW_CHSuspendedMask))
// IP-Adresse
#define ParamGDW_CHIp                                (knx.paramData(GDW_ParamCalcIndex(GDW_CHIp)))
#define ParamGDW_CHIpStr                             (knx.paramString(GDW_ParamCalcIndex(GDW_CHIp), GDW_CHIpLength))
// Port
#define ParamGDW_CHPort                              (knx.paramWord(GDW_ParamCalcIndex(GDW_CHPort)))
// Protokoll
#define ParamGDW_CHProtocol                          (knx.paramByte(GDW_ParamCalcIndex(GDW_CHProtocol)))
// Modbus-Adresse
#define ParamGDW_CHAddress                           (knx.paramByte(GDW_ParamCalcIndex(GDW_CHAddress)))
// Abfrageintervall
#define ParamGDW_CHPollInterval                      (knx.paramWord(GDW_ParamCalcIndex(GDW_CHPollInterval)))
// Zeitbasis
#define ParamGDW_CHSendDelayBase                     ((knx.paramByte(GDW_ParamCalcIndex(GDW_CHSendDelayBase)) & GDW_CHSendDelayBaseMask) >> GDW_CHSendDelayBaseShift)
// zyklisch senden alle (0 = nicht)
#define ParamGDW_CHSendDelayTime                     (knx.paramWord(GDW_ParamCalcIndex(GDW_CHSendDelayTime)) & GDW_CHSendDelayTimeMask)
// zyklisch senden alle (0 = nicht) (in Millisekunden)
#define ParamGDW_CHSendDelayTimeMS                   (paramDelay(knx.paramWord(GDW_ParamCalcIndex(GDW_CHSendDelayTime))))
// bei Änderung um (0 = jede Änderung)
#define ParamGDW_CHSendChangePercent                 (knx.paramByte(GDW_ParamCalcIndex(GDW_CHSendChangePercent)))
// Erreichbar
#define ParamGDW_CHUseReachable                      ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseReachable)) & GDW_CHUseReachableMask))
// Arbeitsmodus
#define ParamGDW_CHUseWorkMode                       ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseWorkMode)) & GDW_CHUseWorkModeMask))
// Fehlercode
#define ParamGDW_CHUseErrorCodes                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseErrorCodes)) & GDW_CHUseErrorCodesMask))
// Warnungscode
#define ParamGDW_CHUseWarningCode                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseWarningCode)) & GDW_CHUseWarningCodeMask))
// Ländereinstellung
#define ParamGDW_CHUseSafetyCountry                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseSafetyCountry)) & GDW_CHUseSafetyCountryMask))
// Funktionsbits
#define ParamGDW_CHUseFunctionBit                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseFunctionBit)) & GDW_CHUseFunctionBitMask))
// Betriebsstunden
#define ParamGDW_CHUseHoursTotal                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseHoursTotal)) & GDW_CHUseHoursTotalMask))
// Gerätezeit
#define ParamGDW_CHUseTimestamp                      ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseTimestamp)) & GDW_CHUseTimestampMask))
// Temperatur Wechselrichter
#define ParamGDW_CHUseTemperature                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseTemperature)) & GDW_CHUseTemperatureMask))
// Busspannung
#define ParamGDW_CHUseBusVoltage                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBusVoltage)) & GDW_CHUseBusVoltageMask))
// N-Busspannung
#define ParamGDW_CHUseNBusVoltage                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseNBusVoltage)) & GDW_CHUseNBusVoltageMask))
// Netzrichtung
#define ParamGDW_CHUseGridInOut                      ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseGridInOut)) & GDW_CHUseGridInOutMask))
// Signalstärke
#define ParamGDW_CHUseRssi                           ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseRssi)) & GDW_CHUseRssiMask))
// Zähler Kommunikationsstatus
#define ParamGDW_CHUseMeterCommStatus                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterCommStatus)) & GDW_CHUseMeterCommStatusMask))
// Netzstatus
#define ParamGDW_CHUseGridMode                       ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseGridMode)) & GDW_CHUseGridModeMask))
// Betriebsart
#define ParamGDW_CHUseOperationCode                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseOperationCode)) & GDW_CHUseOperationCodeMask))
// Diagnosestatus
#define ParamGDW_CHUseDiagStatus                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseDiagStatus)) & GDW_CHUseDiagStatusMask))
// Temperatur Luft
#define ParamGDW_CHUseTempAir                        ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseTempAir)) & GDW_CHUseTempAirMask))
// Temperatur Modul
#define ParamGDW_CHUseTempModule                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseTempModule)) & GDW_CHUseTempModuleMask))
// Temperatur Kühlkörper
#define ParamGDW_CHUseTempHeatsink                   ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseTempHeatsink)) & GDW_CHUseTempHeatsinkMask))
// Leistungsreduzierung
#define ParamGDW_CHUseDeratingMode                   ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseDeratingMode)) & GDW_CHUseDeratingModeMask))
// Ableitstrom
#define ParamGDW_CHUseLeakageCurrent                 ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseLeakageCurrent)) & GDW_CHUseLeakageCurrentMask))
// PV-Leistung gesamt
#define ParamGDW_CHUsePvPower                        ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePvPower)) & GDW_CHUsePvPowerMask))
// PV1 Spannung
#define ParamGDW_CHUsePv1Voltage                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv1Voltage)) & GDW_CHUsePv1VoltageMask))
// PV1 Strom
#define ParamGDW_CHUsePv1Current                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv1Current)) & GDW_CHUsePv1CurrentMask))
// PV1 Leistung
#define ParamGDW_CHUsePv1Power                       ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv1Power)) & GDW_CHUsePv1PowerMask))
// PV2 Spannung
#define ParamGDW_CHUsePv2Voltage                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv2Voltage)) & GDW_CHUsePv2VoltageMask))
// PV2 Strom
#define ParamGDW_CHUsePv2Current                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv2Current)) & GDW_CHUsePv2CurrentMask))
// PV2 Leistung
#define ParamGDW_CHUsePv2Power                       ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv2Power)) & GDW_CHUsePv2PowerMask))
// PV3 Spannung
#define ParamGDW_CHUsePv3Voltage                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv3Voltage)) & GDW_CHUsePv3VoltageMask))
// PV3 Strom
#define ParamGDW_CHUsePv3Current                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv3Current)) & GDW_CHUsePv3CurrentMask))
// PV3 Leistung
#define ParamGDW_CHUsePv3Power                       ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv3Power)) & GDW_CHUsePv3PowerMask))
// PV4 Spannung
#define ParamGDW_CHUsePv4Voltage                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv4Voltage)) & GDW_CHUsePv4VoltageMask))
// PV4 Strom
#define ParamGDW_CHUsePv4Current                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv4Current)) & GDW_CHUsePv4CurrentMask))
// PV4 Leistung
#define ParamGDW_CHUsePv4Power                       ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv4Power)) & GDW_CHUsePv4PowerMask))
// PV1 Modus
#define ParamGDW_CHUsePv1Mode                        ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv1Mode)) & GDW_CHUsePv1ModeMask))
// PV2 Modus
#define ParamGDW_CHUsePv2Mode                        ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv2Mode)) & GDW_CHUsePv2ModeMask))
// PV3 Modus
#define ParamGDW_CHUsePv3Mode                        ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv3Mode)) & GDW_CHUsePv3ModeMask))
// PV4 Modus
#define ParamGDW_CHUsePv4Mode                        ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv4Mode)) & GDW_CHUsePv4ModeMask))
// Eingangsleistung gesamt
#define ParamGDW_CHUseTotalInputPower                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseTotalInputPower)) & GDW_CHUseTotalInputPowerMask))
// PV-Leistung gesamt (MPPT-Block)
#define ParamGDW_CHUsePvPowerTotalExt                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePvPowerTotalExt)) & GDW_CHUsePvPowerTotalExtMask))
// Anzahl PV-Kanäle
#define ParamGDW_CHUsePvChannel                      ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePvChannel)) & GDW_CHUsePvChannelMask))
// PV5 Spannung
#define ParamGDW_CHUsePv5Voltage                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv5Voltage)) & GDW_CHUsePv5VoltageMask))
// PV5 Strom
#define ParamGDW_CHUsePv5Current                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv5Current)) & GDW_CHUsePv5CurrentMask))
// PV6 Spannung
#define ParamGDW_CHUsePv6Voltage                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv6Voltage)) & GDW_CHUsePv6VoltageMask))
// PV6 Strom
#define ParamGDW_CHUsePv6Current                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv6Current)) & GDW_CHUsePv6CurrentMask))
// PV7 Spannung
#define ParamGDW_CHUsePv7Voltage                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv7Voltage)) & GDW_CHUsePv7VoltageMask))
// PV7 Strom
#define ParamGDW_CHUsePv7Current                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv7Current)) & GDW_CHUsePv7CurrentMask))
// PV8 Spannung
#define ParamGDW_CHUsePv8Voltage                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv8Voltage)) & GDW_CHUsePv8VoltageMask))
// PV8 Strom
#define ParamGDW_CHUsePv8Current                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv8Current)) & GDW_CHUsePv8CurrentMask))
// PV9 Spannung
#define ParamGDW_CHUsePv9Voltage                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv9Voltage)) & GDW_CHUsePv9VoltageMask))
// PV9 Strom
#define ParamGDW_CHUsePv9Current                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv9Current)) & GDW_CHUsePv9CurrentMask))
// PV10 Spannung
#define ParamGDW_CHUsePv10Voltage                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv10Voltage)) & GDW_CHUsePv10VoltageMask))
// PV10 Strom
#define ParamGDW_CHUsePv10Current                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv10Current)) & GDW_CHUsePv10CurrentMask))
// PV11 Spannung
#define ParamGDW_CHUsePv11Voltage                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv11Voltage)) & GDW_CHUsePv11VoltageMask))
// PV11 Strom
#define ParamGDW_CHUsePv11Current                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv11Current)) & GDW_CHUsePv11CurrentMask))
// PV12 Spannung
#define ParamGDW_CHUsePv12Voltage                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv12Voltage)) & GDW_CHUsePv12VoltageMask))
// PV12 Strom
#define ParamGDW_CHUsePv12Current                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv12Current)) & GDW_CHUsePv12CurrentMask))
// PV13 Spannung
#define ParamGDW_CHUsePv13Voltage                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv13Voltage)) & GDW_CHUsePv13VoltageMask))
// PV13 Strom
#define ParamGDW_CHUsePv13Current                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv13Current)) & GDW_CHUsePv13CurrentMask))
// PV14 Spannung
#define ParamGDW_CHUsePv14Voltage                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv14Voltage)) & GDW_CHUsePv14VoltageMask))
// PV14 Strom
#define ParamGDW_CHUsePv14Current                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv14Current)) & GDW_CHUsePv14CurrentMask))
// PV15 Spannung
#define ParamGDW_CHUsePv15Voltage                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv15Voltage)) & GDW_CHUsePv15VoltageMask))
// PV15 Strom
#define ParamGDW_CHUsePv15Current                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv15Current)) & GDW_CHUsePv15CurrentMask))
// PV16 Spannung
#define ParamGDW_CHUsePv16Voltage                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv16Voltage)) & GDW_CHUsePv16VoltageMask))
// PV16 Strom
#define ParamGDW_CHUsePv16Current                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePv16Current)) & GDW_CHUsePv16CurrentMask))
// MPPT1 Leistung
#define ParamGDW_CHUseMppt1Power                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMppt1Power)) & GDW_CHUseMppt1PowerMask))
// MPPT2 Leistung
#define ParamGDW_CHUseMppt2Power                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMppt2Power)) & GDW_CHUseMppt2PowerMask))
// MPPT3 Leistung
#define ParamGDW_CHUseMppt3Power                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMppt3Power)) & GDW_CHUseMppt3PowerMask))
// MPPT4 Leistung
#define ParamGDW_CHUseMppt4Power                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMppt4Power)) & GDW_CHUseMppt4PowerMask))
// MPPT5 Leistung
#define ParamGDW_CHUseMppt5Power                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMppt5Power)) & GDW_CHUseMppt5PowerMask))
// MPPT6 Leistung
#define ParamGDW_CHUseMppt6Power                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMppt6Power)) & GDW_CHUseMppt6PowerMask))
// MPPT7 Leistung
#define ParamGDW_CHUseMppt7Power                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMppt7Power)) & GDW_CHUseMppt7PowerMask))
// MPPT8 Leistung
#define ParamGDW_CHUseMppt8Power                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMppt8Power)) & GDW_CHUseMppt8PowerMask))
// MPPT1 Strom
#define ParamGDW_CHUseMppt1Current                   ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMppt1Current)) & GDW_CHUseMppt1CurrentMask))
// MPPT2 Strom
#define ParamGDW_CHUseMppt2Current                   ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMppt2Current)) & GDW_CHUseMppt2CurrentMask))
// MPPT3 Strom
#define ParamGDW_CHUseMppt3Current                   ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMppt3Current)) & GDW_CHUseMppt3CurrentMask))
// MPPT4 Strom
#define ParamGDW_CHUseMppt4Current                   ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMppt4Current)) & GDW_CHUseMppt4CurrentMask))
// MPPT5 Strom
#define ParamGDW_CHUseMppt5Current                   ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMppt5Current)) & GDW_CHUseMppt5CurrentMask))
// MPPT6 Strom
#define ParamGDW_CHUseMppt6Current                   ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMppt6Current)) & GDW_CHUseMppt6CurrentMask))
// MPPT7 Strom
#define ParamGDW_CHUseMppt7Current                   ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMppt7Current)) & GDW_CHUseMppt7CurrentMask))
// MPPT8 Strom
#define ParamGDW_CHUseMppt8Current                   ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMppt8Current)) & GDW_CHUseMppt8CurrentMask))
// Netzspannung L1
#define ParamGDW_CHUseGridVoltageL1                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseGridVoltageL1)) & GDW_CHUseGridVoltageL1Mask))
// Netzstrom L1
#define ParamGDW_CHUseGridCurrentL1                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseGridCurrentL1)) & GDW_CHUseGridCurrentL1Mask))
// Netzfrequenz L1
#define ParamGDW_CHUseGridFrequencyL1                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseGridFrequencyL1)) & GDW_CHUseGridFrequencyL1Mask))
// Leistung L1
#define ParamGDW_CHUseGridPowerL1                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseGridPowerL1)) & GDW_CHUseGridPowerL1Mask))
// Netzspannung L2
#define ParamGDW_CHUseGridVoltageL2                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseGridVoltageL2)) & GDW_CHUseGridVoltageL2Mask))
// Netzstrom L2
#define ParamGDW_CHUseGridCurrentL2                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseGridCurrentL2)) & GDW_CHUseGridCurrentL2Mask))
// Netzfrequenz L2
#define ParamGDW_CHUseGridFrequencyL2                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseGridFrequencyL2)) & GDW_CHUseGridFrequencyL2Mask))
// Leistung L2
#define ParamGDW_CHUseGridPowerL2                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseGridPowerL2)) & GDW_CHUseGridPowerL2Mask))
// Netzspannung L3
#define ParamGDW_CHUseGridVoltageL3                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseGridVoltageL3)) & GDW_CHUseGridVoltageL3Mask))
// Netzstrom L3
#define ParamGDW_CHUseGridCurrentL3                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseGridCurrentL3)) & GDW_CHUseGridCurrentL3Mask))
// Netzfrequenz L3
#define ParamGDW_CHUseGridFrequencyL3                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseGridFrequencyL3)) & GDW_CHUseGridFrequencyL3Mask))
// Leistung L3
#define ParamGDW_CHUseGridPowerL3                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseGridPowerL3)) & GDW_CHUseGridPowerL3Mask))
// Wechselrichterleistung
#define ParamGDW_CHUseInverterPower                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseInverterPower)) & GDW_CHUseInverterPowerMask))
// Netzleistung (+ Einspeisung)
#define ParamGDW_CHUseActivePower                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseActivePower)) & GDW_CHUseActivePowerMask))
// Netzbezug Leistung
#define ParamGDW_CHUseImportPower                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseImportPower)) & GDW_CHUseImportPowerMask))
// Einspeisung Leistung
#define ParamGDW_CHUseExportPower                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseExportPower)) & GDW_CHUseExportPowerMask))
// Blindleistung (var)
#define ParamGDW_CHUseReactivePower                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseReactivePower)) & GDW_CHUseReactivePowerMask))
// Scheinleistung (VA)
#define ParamGDW_CHUseApparentPower                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseApparentPower)) & GDW_CHUseApparentPowerMask))
// Hausverbrauch
#define ParamGDW_CHUseHouseConsumption               ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseHouseConsumption)) & GDW_CHUseHouseConsumptionMask))
// Blindleistung L1 (var)
#define ParamGDW_CHUseReactivePowerL1                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseReactivePowerL1)) & GDW_CHUseReactivePowerL1Mask))
// Blindleistung L2 (var)
#define ParamGDW_CHUseReactivePowerL2                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseReactivePowerL2)) & GDW_CHUseReactivePowerL2Mask))
// Blindleistung L3 (var)
#define ParamGDW_CHUseReactivePowerL3                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseReactivePowerL3)) & GDW_CHUseReactivePowerL3Mask))
// Scheinleistung L1 (VA)
#define ParamGDW_CHUseApparentPowerL1                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseApparentPowerL1)) & GDW_CHUseApparentPowerL1Mask))
// Scheinleistung L2 (VA)
#define ParamGDW_CHUseApparentPowerL2                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseApparentPowerL2)) & GDW_CHUseApparentPowerL2Mask))
// Scheinleistung L3 (VA)
#define ParamGDW_CHUseApparentPowerL3                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseApparentPowerL3)) & GDW_CHUseApparentPowerL3Mask))
// Außenleiterspannung L1-L2
#define ParamGDW_CHUseLineVoltageL1L2                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseLineVoltageL1L2)) & GDW_CHUseLineVoltageL1L2Mask))
// Außenleiterspannung L2-L3
#define ParamGDW_CHUseLineVoltageL2L3                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseLineVoltageL2L3)) & GDW_CHUseLineVoltageL2L3Mask))
// Außenleiterspannung L3-L1
#define ParamGDW_CHUseLineVoltageL3L1                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseLineVoltageL3L1)) & GDW_CHUseLineVoltageL3L1Mask))
// Leistungsfaktor
#define ParamGDW_CHUsePowerFactor                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUsePowerFactor)) & GDW_CHUsePowerFactorMask))
// Backup L1 Spannung
#define ParamGDW_CHUseBackupVoltageL1                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBackupVoltageL1)) & GDW_CHUseBackupVoltageL1Mask))
// Backup L1 Strom
#define ParamGDW_CHUseBackupCurrentL1                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBackupCurrentL1)) & GDW_CHUseBackupCurrentL1Mask))
// Backup L1 Frequenz
#define ParamGDW_CHUseBackupFrequencyL1              ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBackupFrequencyL1)) & GDW_CHUseBackupFrequencyL1Mask))
// Lastmodus L1
#define ParamGDW_CHUseLoadModeL1                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseLoadModeL1)) & GDW_CHUseLoadModeL1Mask))
// Backup L1 Leistung
#define ParamGDW_CHUseBackupPowerL1                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBackupPowerL1)) & GDW_CHUseBackupPowerL1Mask))
// Backup L2 Spannung
#define ParamGDW_CHUseBackupVoltageL2                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBackupVoltageL2)) & GDW_CHUseBackupVoltageL2Mask))
// Backup L2 Strom
#define ParamGDW_CHUseBackupCurrentL2                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBackupCurrentL2)) & GDW_CHUseBackupCurrentL2Mask))
// Backup L2 Frequenz
#define ParamGDW_CHUseBackupFrequencyL2              ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBackupFrequencyL2)) & GDW_CHUseBackupFrequencyL2Mask))
// Lastmodus L2
#define ParamGDW_CHUseLoadModeL2                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseLoadModeL2)) & GDW_CHUseLoadModeL2Mask))
// Backup L2 Leistung
#define ParamGDW_CHUseBackupPowerL2                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBackupPowerL2)) & GDW_CHUseBackupPowerL2Mask))
// Backup L3 Spannung
#define ParamGDW_CHUseBackupVoltageL3                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBackupVoltageL3)) & GDW_CHUseBackupVoltageL3Mask))
// Backup L3 Strom
#define ParamGDW_CHUseBackupCurrentL3                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBackupCurrentL3)) & GDW_CHUseBackupCurrentL3Mask))
// Backup L3 Frequenz
#define ParamGDW_CHUseBackupFrequencyL3              ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBackupFrequencyL3)) & GDW_CHUseBackupFrequencyL3Mask))
// Lastmodus L3
#define ParamGDW_CHUseLoadModeL3                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseLoadModeL3)) & GDW_CHUseLoadModeL3Mask))
// Backup L3 Leistung
#define ParamGDW_CHUseBackupPowerL3                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBackupPowerL3)) & GDW_CHUseBackupPowerL3Mask))
// Last L1
#define ParamGDW_CHUseLoadPowerL1                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseLoadPowerL1)) & GDW_CHUseLoadPowerL1Mask))
// Last L2
#define ParamGDW_CHUseLoadPowerL2                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseLoadPowerL2)) & GDW_CHUseLoadPowerL2Mask))
// Last L3
#define ParamGDW_CHUseLoadPowerL3                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseLoadPowerL3)) & GDW_CHUseLoadPowerL3Mask))
// Backup-Last gesamt
#define ParamGDW_CHUseBackupPowerTotal               ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBackupPowerTotal)) & GDW_CHUseBackupPowerTotalMask))
// Last gesamt
#define ParamGDW_CHUseLoadPowerTotal                 ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseLoadPowerTotal)) & GDW_CHUseLoadPowerTotalMask))
// USV-Auslastung
#define ParamGDW_CHUseUpsLoad                        ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseUpsLoad)) & GDW_CHUseUpsLoadMask))
// Batterie Spannung
#define ParamGDW_CHUseBatteryVoltage                 ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryVoltage)) & GDW_CHUseBatteryVoltageMask))
// Batterie Strom
#define ParamGDW_CHUseBatteryCurrent                 ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryCurrent)) & GDW_CHUseBatteryCurrentMask))
// Batterie Leistung (+ Entladen)
#define ParamGDW_CHUseBatteryPower                   ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryPower)) & GDW_CHUseBatteryPowerMask))
// Batterie Modus
#define ParamGDW_CHUseBatteryMode                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryMode)) & GDW_CHUseBatteryModeMask))
// Batterie Ladezustand
#define ParamGDW_CHUseBatterySoc                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatterySoc)) & GDW_CHUseBatterySocMask))
// Batterie Gesundheitszustand
#define ParamGDW_CHUseBatterySoh                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatterySoh)) & GDW_CHUseBatterySohMask))
// Batterie Temperatur
#define ParamGDW_CHUseBatteryTemperature             ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryTemperature)) & GDW_CHUseBatteryTemperatureMask))
// Batterie Ladestromgrenze
#define ParamGDW_CHUseBatteryChargeLimit             ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryChargeLimit)) & GDW_CHUseBatteryChargeLimitMask))
// Batterie Entladestromgrenze
#define ParamGDW_CHUseBatteryDischargeLimit          ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryDischargeLimit)) & GDW_CHUseBatteryDischargeLimitMask))
// Batterie BMS
#define ParamGDW_CHUseBatteryBms                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryBms)) & GDW_CHUseBatteryBmsMask))
// Batterie Index
#define ParamGDW_CHUseBatteryIndex                   ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryIndex)) & GDW_CHUseBatteryIndexMask))
// Batterie Status
#define ParamGDW_CHUseBatteryStatus                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryStatus)) & GDW_CHUseBatteryStatusMask))
// Batterie Modulanzahl
#define ParamGDW_CHUseBatteryModules                 ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryModules)) & GDW_CHUseBatteryModulesMask))
// Batterie Protokoll
#define ParamGDW_CHUseBatteryProtocol                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryProtocol)) & GDW_CHUseBatteryProtocolMask))
// Batterie Fehler
#define ParamGDW_CHUseBatteryError                   ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryError)) & GDW_CHUseBatteryErrorMask))
// Batterie Warnung
#define ParamGDW_CHUseBatteryWarning                 ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryWarning)) & GDW_CHUseBatteryWarningMask))
// Batterie Softwareversion
#define ParamGDW_CHUseBatterySwVersion               ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatterySwVersion)) & GDW_CHUseBatterySwVersionMask))
// Batterie Hardwareversion
#define ParamGDW_CHUseBatteryHwVersion               ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryHwVersion)) & GDW_CHUseBatteryHwVersionMask))
// Batterie Zelle max. Temperatur (Nr.)
#define ParamGDW_CHUseBatteryMaxCellTempId           ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryMaxCellTempId)) & GDW_CHUseBatteryMaxCellTempIdMask))
// Batterie Zelle min. Temperatur (Nr.)
#define ParamGDW_CHUseBatteryMinCellTempId           ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryMinCellTempId)) & GDW_CHUseBatteryMinCellTempIdMask))
// Batterie Zelle max. Spannung (Nr.)
#define ParamGDW_CHUseBatteryMaxCellVoltId           ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryMaxCellVoltId)) & GDW_CHUseBatteryMaxCellVoltIdMask))
// Batterie Zelle min. Spannung (Nr.)
#define ParamGDW_CHUseBatteryMinCellVoltId           ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryMinCellVoltId)) & GDW_CHUseBatteryMinCellVoltIdMask))
// Batterie Zelltemperatur max.
#define ParamGDW_CHUseBatteryMaxCellTemp             ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryMaxCellTemp)) & GDW_CHUseBatteryMaxCellTempMask))
// Batterie Zelltemperatur min.
#define ParamGDW_CHUseBatteryMinCellTemp             ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryMinCellTemp)) & GDW_CHUseBatteryMinCellTempMask))
// Batterie Zellspannung max.
#define ParamGDW_CHUseBatteryMaxCellVoltage          ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryMaxCellVoltage)) & GDW_CHUseBatteryMaxCellVoltageMask))
// Batterie Zellspannung min.
#define ParamGDW_CHUseBatteryMinCellVoltage          ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryMinCellVoltage)) & GDW_CHUseBatteryMinCellVoltageMask))
// Batterie Kapazität (Ah)
#define ParamGDW_CHUseBatteryCapacity                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryCapacity)) & GDW_CHUseBatteryCapacityMask))
// Batterie 2 Spannung
#define ParamGDW_CHUseBattery2Voltage                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2Voltage)) & GDW_CHUseBattery2VoltageMask))
// Batterie 2 Strom
#define ParamGDW_CHUseBattery2Current                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2Current)) & GDW_CHUseBattery2CurrentMask))
// Batterie 2 Leistung (+ Entladen)
#define ParamGDW_CHUseBattery2Power                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2Power)) & GDW_CHUseBattery2PowerMask))
// Batterie 2 Modus
#define ParamGDW_CHUseBattery2Mode                   ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2Mode)) & GDW_CHUseBattery2ModeMask))
// Batterie 2 Status
#define ParamGDW_CHUseBattery2Status                 ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2Status)) & GDW_CHUseBattery2StatusMask))
// Batterie 2 Temperatur
#define ParamGDW_CHUseBattery2Temperature            ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2Temperature)) & GDW_CHUseBattery2TemperatureMask))
// Batterie 2 Ladestromgrenze
#define ParamGDW_CHUseBattery2ChargeLimit            ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2ChargeLimit)) & GDW_CHUseBattery2ChargeLimitMask))
// Batterie 2 Entladestromgrenze
#define ParamGDW_CHUseBattery2DischargeLimit         ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2DischargeLimit)) & GDW_CHUseBattery2DischargeLimitMask))
// Batterie 2 Ladezustand
#define ParamGDW_CHUseBattery2Soc                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2Soc)) & GDW_CHUseBattery2SocMask))
// Batterie 2 Gesundheitszustand
#define ParamGDW_CHUseBattery2Soh                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2Soh)) & GDW_CHUseBattery2SohMask))
// Batterie 2 Modulanzahl
#define ParamGDW_CHUseBattery2Modules                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2Modules)) & GDW_CHUseBattery2ModulesMask))
// Batterie 2 Protokoll
#define ParamGDW_CHUseBattery2Protocol               ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2Protocol)) & GDW_CHUseBattery2ProtocolMask))
// Batterie 2 Fehler
#define ParamGDW_CHUseBattery2Error                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2Error)) & GDW_CHUseBattery2ErrorMask))
// Batterie 2 Warnung
#define ParamGDW_CHUseBattery2Warning                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2Warning)) & GDW_CHUseBattery2WarningMask))
// Batterie 2 Softwareversion
#define ParamGDW_CHUseBattery2SwVersion              ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2SwVersion)) & GDW_CHUseBattery2SwVersionMask))
// Batterie 2 Hardwareversion
#define ParamGDW_CHUseBattery2HwVersion              ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2HwVersion)) & GDW_CHUseBattery2HwVersionMask))
// Batterie 2 Zelle max. Temperatur (Nr.)
#define ParamGDW_CHUseBattery2MaxCellTempId          ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2MaxCellTempId)) & GDW_CHUseBattery2MaxCellTempIdMask))
// Batterie 2 Zelle min. Temperatur (Nr.)
#define ParamGDW_CHUseBattery2MinCellTempId          ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2MinCellTempId)) & GDW_CHUseBattery2MinCellTempIdMask))
// Batterie 2 Zelle max. Spannung (Nr.)
#define ParamGDW_CHUseBattery2MaxCellVoltId          ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2MaxCellVoltId)) & GDW_CHUseBattery2MaxCellVoltIdMask))
// Batterie 2 Zelle min. Spannung (Nr.)
#define ParamGDW_CHUseBattery2MinCellVoltId          ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2MinCellVoltId)) & GDW_CHUseBattery2MinCellVoltIdMask))
// Batterie 2 Zelltemperatur max.
#define ParamGDW_CHUseBattery2MaxCellTemp            ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2MaxCellTemp)) & GDW_CHUseBattery2MaxCellTempMask))
// Batterie 2 Zelltemperatur min.
#define ParamGDW_CHUseBattery2MinCellTemp            ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2MinCellTemp)) & GDW_CHUseBattery2MinCellTempMask))
// Batterie 2 Zellspannung max.
#define ParamGDW_CHUseBattery2MaxCellVoltage         ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2MaxCellVoltage)) & GDW_CHUseBattery2MaxCellVoltageMask))
// Batterie 2 Zellspannung min.
#define ParamGDW_CHUseBattery2MinCellVoltage         ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBattery2MinCellVoltage)) & GDW_CHUseBattery2MinCellVoltageMask))
// PV-Ertrag gesamt
#define ParamGDW_CHUseEnergyTotal                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseEnergyTotal)) & GDW_CHUseEnergyTotalMask))
// PV-Ertrag heute
#define ParamGDW_CHUseEnergyToday                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseEnergyToday)) & GDW_CHUseEnergyTodayMask))
// Zähler Einspeisung gesamt
#define ParamGDW_CHUseMeterExportTotal               ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterExportTotal)) & GDW_CHUseMeterExportTotalMask))
// Zähler Netzbezug gesamt
#define ParamGDW_CHUseMeterImportTotal               ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterImportTotal)) & GDW_CHUseMeterImportTotalMask))
// Einspeisung gesamt
#define ParamGDW_CHUseExportTotal                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseExportTotal)) & GDW_CHUseExportTotalMask))
// Einspeisung heute
#define ParamGDW_CHUseExportToday                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseExportToday)) & GDW_CHUseExportTodayMask))
// Netzbezug gesamt
#define ParamGDW_CHUseImportTotal                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseImportTotal)) & GDW_CHUseImportTotalMask))
// Netzbezug heute
#define ParamGDW_CHUseImportToday                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseImportToday)) & GDW_CHUseImportTodayMask))
// Verbrauch gesamt
#define ParamGDW_CHUseLoadTotal                      ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseLoadTotal)) & GDW_CHUseLoadTotalMask))
// Verbrauch heute
#define ParamGDW_CHUseLoadToday                      ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseLoadToday)) & GDW_CHUseLoadTodayMask))
// Batterie geladen gesamt
#define ParamGDW_CHUseBatteryChargeTotal             ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryChargeTotal)) & GDW_CHUseBatteryChargeTotalMask))
// Batterie geladen heute
#define ParamGDW_CHUseBatteryChargeToday             ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryChargeToday)) & GDW_CHUseBatteryChargeTodayMask))
// Batterie entladen gesamt
#define ParamGDW_CHUseBatteryDischargeTotal          ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryDischargeTotal)) & GDW_CHUseBatteryDischargeTotalMask))
// Batterie entladen heute
#define ParamGDW_CHUseBatteryDischargeToday          ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBatteryDischargeToday)) & GDW_CHUseBatteryDischargeTodayMask))
// Zähler Kommunikationsart
#define ParamGDW_CHUseMeterCommode                   ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterCommode)) & GDW_CHUseMeterCommodeMask))
// Zähler Herstellercode
#define ParamGDW_CHUseMeterManufacturer              ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterManufacturer)) & GDW_CHUseMeterManufacturerMask))
// Zähler Prüfstatus
#define ParamGDW_CHUseMeterTestStatus                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterTestStatus)) & GDW_CHUseMeterTestStatusMask))
// Zähler Typ
#define ParamGDW_CHUseMeterTypeCode                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterTypeCode)) & GDW_CHUseMeterTypeCodeMask))
// Zähler Softwareversion
#define ParamGDW_CHUseMeterSwVersion                 ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterSwVersion)) & GDW_CHUseMeterSwVersionMask))
// Zähler Wirkleistung L1
#define ParamGDW_CHUseMeterPowerL1                   ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterPowerL1)) & GDW_CHUseMeterPowerL1Mask))
// Zähler Wirkleistung L2
#define ParamGDW_CHUseMeterPowerL2                   ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterPowerL2)) & GDW_CHUseMeterPowerL2Mask))
// Zähler Wirkleistung L3
#define ParamGDW_CHUseMeterPowerL3                   ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterPowerL3)) & GDW_CHUseMeterPowerL3Mask))
// Zähler Wirkleistung gesamt
#define ParamGDW_CHUseMeterPowerTotal                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterPowerTotal)) & GDW_CHUseMeterPowerTotalMask))
// Zähler Wirkleistung L1 (16 Bit)
#define ParamGDW_CHUseMeterPower16L1                 ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterPower16L1)) & GDW_CHUseMeterPower16L1Mask))
// Zähler Wirkleistung L2 (16 Bit)
#define ParamGDW_CHUseMeterPower16L2                 ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterPower16L2)) & GDW_CHUseMeterPower16L2Mask))
// Zähler Wirkleistung L3 (16 Bit)
#define ParamGDW_CHUseMeterPower16L3                 ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterPower16L3)) & GDW_CHUseMeterPower16L3Mask))
// Zähler Wirkleistung gesamt (16 Bit)
#define ParamGDW_CHUseMeterPower16Total              ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterPower16Total)) & GDW_CHUseMeterPower16TotalMask))
// Zähler Blindleistung L1 (var)
#define ParamGDW_CHUseMeterReactiveL1                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterReactiveL1)) & GDW_CHUseMeterReactiveL1Mask))
// Zähler Blindleistung L2 (var)
#define ParamGDW_CHUseMeterReactiveL2                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterReactiveL2)) & GDW_CHUseMeterReactiveL2Mask))
// Zähler Blindleistung L3 (var)
#define ParamGDW_CHUseMeterReactiveL3                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterReactiveL3)) & GDW_CHUseMeterReactiveL3Mask))
// Zähler Blindleistung gesamt (var)
#define ParamGDW_CHUseMeterReactiveTotal             ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterReactiveTotal)) & GDW_CHUseMeterReactiveTotalMask))
// Zähler Blindleistung gesamt (16 Bit, var)
#define ParamGDW_CHUseMeterReactive16Total           ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterReactive16Total)) & GDW_CHUseMeterReactive16TotalMask))
// Zähler Scheinleistung L1 (VA)
#define ParamGDW_CHUseMeterApparentL1                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterApparentL1)) & GDW_CHUseMeterApparentL1Mask))
// Zähler Scheinleistung L2 (VA)
#define ParamGDW_CHUseMeterApparentL2                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterApparentL2)) & GDW_CHUseMeterApparentL2Mask))
// Zähler Scheinleistung L3 (VA)
#define ParamGDW_CHUseMeterApparentL3                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterApparentL3)) & GDW_CHUseMeterApparentL3Mask))
// Zähler Scheinleistung gesamt (VA)
#define ParamGDW_CHUseMeterApparentTotal             ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterApparentTotal)) & GDW_CHUseMeterApparentTotalMask))
// Zähler Leistungsfaktor L1
#define ParamGDW_CHUseMeterPowerFactorL1             ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterPowerFactorL1)) & GDW_CHUseMeterPowerFactorL1Mask))
// Zähler Leistungsfaktor L2
#define ParamGDW_CHUseMeterPowerFactorL2             ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterPowerFactorL2)) & GDW_CHUseMeterPowerFactorL2Mask))
// Zähler Leistungsfaktor L3
#define ParamGDW_CHUseMeterPowerFactorL3             ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterPowerFactorL3)) & GDW_CHUseMeterPowerFactorL3Mask))
// Zähler Leistungsfaktor
#define ParamGDW_CHUseMeterPowerFactor               ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterPowerFactor)) & GDW_CHUseMeterPowerFactorMask))
// Zähler Frequenz
#define ParamGDW_CHUseMeterFrequency                 ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterFrequency)) & GDW_CHUseMeterFrequencyMask))
// Zähler Spannung L1
#define ParamGDW_CHUseMeterVoltageL1                 ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterVoltageL1)) & GDW_CHUseMeterVoltageL1Mask))
// Zähler Spannung L2
#define ParamGDW_CHUseMeterVoltageL2                 ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterVoltageL2)) & GDW_CHUseMeterVoltageL2Mask))
// Zähler Spannung L3
#define ParamGDW_CHUseMeterVoltageL3                 ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterVoltageL3)) & GDW_CHUseMeterVoltageL3Mask))
// Zähler Strom L1
#define ParamGDW_CHUseMeterCurrentL1                 ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterCurrentL1)) & GDW_CHUseMeterCurrentL1Mask))
// Zähler Strom L2
#define ParamGDW_CHUseMeterCurrentL2                 ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterCurrentL2)) & GDW_CHUseMeterCurrentL2Mask))
// Zähler Strom L3
#define ParamGDW_CHUseMeterCurrentL3                 ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterCurrentL3)) & GDW_CHUseMeterCurrentL3Mask))
// Zähler 2 Wirkleistung
#define ParamGDW_CHUseMeter2Power                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeter2Power)) & GDW_CHUseMeter2PowerMask))
// Zähler 2 Einspeisung gesamt
#define ParamGDW_CHUseMeter2ExportTotal              ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeter2ExportTotal)) & GDW_CHUseMeter2ExportTotalMask))
// Zähler 2 Netzbezug gesamt
#define ParamGDW_CHUseMeter2ImportTotal              ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeter2ImportTotal)) & GDW_CHUseMeter2ImportTotalMask))
// Zähler 2 Kommunikationsstatus
#define ParamGDW_CHUseMeter2CommStatus               ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeter2CommStatus)) & GDW_CHUseMeter2CommStatusMask))
// Zähler Einspeisung L1
#define ParamGDW_CHUseMeterExportL1                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterExportL1)) & GDW_CHUseMeterExportL1Mask))
// Zähler Einspeisung L2
#define ParamGDW_CHUseMeterExportL2                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterExportL2)) & GDW_CHUseMeterExportL2Mask))
// Zähler Einspeisung L3
#define ParamGDW_CHUseMeterExportL3                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterExportL3)) & GDW_CHUseMeterExportL3Mask))
// Zähler Einspeisung gesamt (64 Bit)
#define ParamGDW_CHUseMeterExportTotal64             ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterExportTotal64)) & GDW_CHUseMeterExportTotal64Mask))
// Zähler Netzbezug L1
#define ParamGDW_CHUseMeterImportL1                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterImportL1)) & GDW_CHUseMeterImportL1Mask))
// Zähler Netzbezug L2
#define ParamGDW_CHUseMeterImportL2                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterImportL2)) & GDW_CHUseMeterImportL2Mask))
// Zähler Netzbezug L3
#define ParamGDW_CHUseMeterImportL3                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterImportL3)) & GDW_CHUseMeterImportL3Mask))
// Zähler Netzbezug gesamt (64 Bit)
#define ParamGDW_CHUseMeterImportTotal64             ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseMeterImportTotal64)) & GDW_CHUseMeterImportTotal64Mask))
// BMS 1 Version
#define ParamGDW_CHUseBms1Version                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms1Version)) & GDW_CHUseBms1VersionMask))
// BMS 1 Modulanzahl
#define ParamGDW_CHUseBms1Modules                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms1Modules)) & GDW_CHUseBms1ModulesMask))
// BMS 1 Ladespannung max.
#define ParamGDW_CHUseBms1ChargeVoltageMax           ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms1ChargeVoltageMax)) & GDW_CHUseBms1ChargeVoltageMaxMask))
// BMS 1 Ladestrom max.
#define ParamGDW_CHUseBms1ChargeCurrentMax           ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms1ChargeCurrentMax)) & GDW_CHUseBms1ChargeCurrentMaxMask))
// BMS 1 Entladespannung min.
#define ParamGDW_CHUseBms1DischargeVoltageMin        ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms1DischargeVoltageMin)) & GDW_CHUseBms1DischargeVoltageMinMask))
// BMS 1 Entladestrom max.
#define ParamGDW_CHUseBms1DischargeCurrentMax        ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms1DischargeCurrentMax)) & GDW_CHUseBms1DischargeCurrentMaxMask))
// BMS 1 Spannung
#define ParamGDW_CHUseBms1Voltage                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms1Voltage)) & GDW_CHUseBms1VoltageMask))
// BMS 1 Strom
#define ParamGDW_CHUseBms1Current                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms1Current)) & GDW_CHUseBms1CurrentMask))
// BMS 1 Ladezustand
#define ParamGDW_CHUseBms1Soc                        ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms1Soc)) & GDW_CHUseBms1SocMask))
// BMS 1 Gesundheitszustand
#define ParamGDW_CHUseBms1Soh                        ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms1Soh)) & GDW_CHUseBms1SohMask))
// BMS 1 Temperatur
#define ParamGDW_CHUseBms1Temperature                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms1Temperature)) & GDW_CHUseBms1TemperatureMask))
// BMS 1 Warnungscode
#define ParamGDW_CHUseBms1WarningCode                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms1WarningCode)) & GDW_CHUseBms1WarningCodeMask))
// BMS 1 Alarmcode
#define ParamGDW_CHUseBms1AlarmCode                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms1AlarmCode)) & GDW_CHUseBms1AlarmCodeMask))
// BMS 1 Status
#define ParamGDW_CHUseBms1Status                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms1Status)) & GDW_CHUseBms1StatusMask))
// BMS 1 Kommunikationsverlust ignorieren
#define ParamGDW_CHUseBms1CommLossDisable            ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms1CommLossDisable)) & GDW_CHUseBms1CommLossDisableMask))
// BMS 1 Strang-Nennspannung
#define ParamGDW_CHUseBms1StringRateVoltage          ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms1StringRateVoltage)) & GDW_CHUseBms1StringRateVoltageMask))
// BMS 2 Version
#define ParamGDW_CHUseBms2Version                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms2Version)) & GDW_CHUseBms2VersionMask))
// BMS 2 Modulanzahl
#define ParamGDW_CHUseBms2Modules                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms2Modules)) & GDW_CHUseBms2ModulesMask))
// BMS 2 Ladespannung max.
#define ParamGDW_CHUseBms2ChargeVoltageMax           ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms2ChargeVoltageMax)) & GDW_CHUseBms2ChargeVoltageMaxMask))
// BMS 2 Ladestrom max.
#define ParamGDW_CHUseBms2ChargeCurrentMax           ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms2ChargeCurrentMax)) & GDW_CHUseBms2ChargeCurrentMaxMask))
// BMS 2 Entladespannung min.
#define ParamGDW_CHUseBms2DischargeVoltageMin        ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms2DischargeVoltageMin)) & GDW_CHUseBms2DischargeVoltageMinMask))
// BMS 2 Entladestrom max.
#define ParamGDW_CHUseBms2DischargeCurrentMax        ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms2DischargeCurrentMax)) & GDW_CHUseBms2DischargeCurrentMaxMask))
// BMS 2 Spannung
#define ParamGDW_CHUseBms2Voltage                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms2Voltage)) & GDW_CHUseBms2VoltageMask))
// BMS 2 Strom
#define ParamGDW_CHUseBms2Current                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms2Current)) & GDW_CHUseBms2CurrentMask))
// BMS 2 Ladezustand
#define ParamGDW_CHUseBms2Soc                        ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms2Soc)) & GDW_CHUseBms2SocMask))
// BMS 2 Gesundheitszustand
#define ParamGDW_CHUseBms2Soh                        ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms2Soh)) & GDW_CHUseBms2SohMask))
// BMS 2 Temperatur
#define ParamGDW_CHUseBms2Temperature                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms2Temperature)) & GDW_CHUseBms2TemperatureMask))
// BMS 2 Warnungscode
#define ParamGDW_CHUseBms2WarningCode                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms2WarningCode)) & GDW_CHUseBms2WarningCodeMask))
// BMS 2 Alarmcode
#define ParamGDW_CHUseBms2AlarmCode                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms2AlarmCode)) & GDW_CHUseBms2AlarmCodeMask))
// BMS 2 Status
#define ParamGDW_CHUseBms2Status                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms2Status)) & GDW_CHUseBms2StatusMask))
// BMS 2 Kommunikationsverlust ignorieren
#define ParamGDW_CHUseBms2CommLossDisable            ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms2CommLossDisable)) & GDW_CHUseBms2CommLossDisableMask))
// BMS 2 Strang-Nennspannung
#define ParamGDW_CHUseBms2StringRateVoltage          ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBms2StringRateVoltage)) & GDW_CHUseBms2StringRateVoltageMask))
// Betriebsmodus
#define ParamGDW_CHUseOperationMode                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseOperationMode)) & GDW_CHUseOperationModeMask))
// EMS-Modus
#define ParamGDW_CHUseEmsMode                        ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseEmsMode)) & GDW_CHUseEmsModeMask))
// EMS-Leistung
#define ParamGDW_CHUseEmsPowerLimit                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseEmsPowerLimit)) & GDW_CHUseEmsPowerLimitMask))
// Einspeisebegrenzung aktiv
#define ParamGDW_CHUseExportLimitEnable              ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseExportLimitEnable)) & GDW_CHUseExportLimitEnableMask))
// Einspeisebegrenzung
#define ParamGDW_CHUseExportLimit                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseExportLimit)) & GDW_CHUseExportLimitMask))
// Einspeisebegrenzung (%)
#define ParamGDW_CHUseExportLimitPercent             ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseExportLimitPercent)) & GDW_CHUseExportLimitPercentMask))
// Entladetiefe Netzbetrieb
#define ParamGDW_CHUseDodOnGrid                      ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseDodOnGrid)) & GDW_CHUseDodOnGridMask))
// Entladetiefe Inselbetrieb
#define ParamGDW_CHUseDodOffGrid                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseDodOffGrid)) & GDW_CHUseDodOffGridMask))
// SoC-Schutz
#define ParamGDW_CHUseSocProtection                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseSocProtection)) & GDW_CHUseSocProtectionMask))
// SoC-Obergrenze
#define ParamGDW_CHUseSocUpperLimit                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseSocUpperLimit)) & GDW_CHUseSocUpperLimitMask))
// Eco-Leistung
#define ParamGDW_CHUseEcoModePower                   ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseEcoModePower)) & GDW_CHUseEcoModePowerMask))
// Eco-Ziel-SoC
#define ParamGDW_CHUseEcoModeSoc                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseEcoModeSoc)) & GDW_CHUseEcoModeSocMask))
// Schnellladen
#define ParamGDW_CHUseFastCharging                   ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseFastCharging)) & GDW_CHUseFastChargingMask))
// Schnellladen Ziel-SoC
#define ParamGDW_CHUseFastChargingSoc                ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseFastChargingSoc)) & GDW_CHUseFastChargingSocMask))
// Schnellladen Leistung
#define ParamGDW_CHUseFastChargingPower              ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseFastChargingPower)) & GDW_CHUseFastChargingPowerMask))
// Backup-Versorgung
#define ParamGDW_CHUseBackupSupply                   ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseBackupSupply)) & GDW_CHUseBackupSupplyMask))
// Entladetiefe halten
#define ParamGDW_CHUseDodHolding                     ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseDodHolding)) & GDW_CHUseDodHoldingMask))
// Lastregelung
#define ParamGDW_CHUseLoadControl                    ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseLoadControl)) & GDW_CHUseLoadControlMask))
// Uhr synchronisieren
#define ParamGDW_CHUseSyncClock                      ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseSyncClock)) & GDW_CHUseSyncClockMask))
// Wechselrichter starten
#define ParamGDW_CHUseStartInverter                  ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseStartInverter)) & GDW_CHUseStartInverterMask))
// Wechselrichter stoppen
#define ParamGDW_CHUseStopInverter                   ((bool)(knx.paramByte(GDW_ParamCalcIndex(GDW_CHUseStopInverter)) & GDW_CHUseStopInverterMask))

// deprecated
#define GDW_KoOffset 1310

// Communication objects per channel (multiple occurrence)
#define GDW_KoBlockOffset 1310
#define GDW_KoBlockSize 341

#define GDW_KoCalcNumber(index) (index + GDW_KoBlockOffset + _channelIndex * GDW_KoBlockSize)
#define GDW_KoCalcIndex(number) ((number >= GDW_KoCalcNumber(0) && number < GDW_KoCalcNumber(GDW_KoBlockSize)) ? (number - GDW_KoBlockOffset) % GDW_KoBlockSize : -1)
#define GDW_KoCalcChannel(number) ((number >= GDW_KoBlockOffset && number < GDW_KoBlockOffset + GDW_ChannelCount * GDW_KoBlockSize) ? (number - GDW_KoBlockOffset) / GDW_KoBlockSize : -1)

#define GDW_KoCHReachable 0
#define GDW_KoCHWorkMode 1
#define GDW_KoCHErrorCodes 2
#define GDW_KoCHWarningCode 3
#define GDW_KoCHSafetyCountry 4
#define GDW_KoCHFunctionBit 5
#define GDW_KoCHHoursTotal 6
#define GDW_KoCHTimestamp 7
#define GDW_KoCHTemperature 8
#define GDW_KoCHBusVoltage 9
#define GDW_KoCHNBusVoltage 10
#define GDW_KoCHGridInOut 11
#define GDW_KoCHRssi 12
#define GDW_KoCHMeterCommStatus 13
#define GDW_KoCHGridMode 14
#define GDW_KoCHOperationCode 15
#define GDW_KoCHDiagStatus 16
#define GDW_KoCHTempAir 17
#define GDW_KoCHTempModule 18
#define GDW_KoCHTempHeatsink 19
#define GDW_KoCHDeratingMode 20
#define GDW_KoCHLeakageCurrent 21
#define GDW_KoCHPvPower 22
#define GDW_KoCHPv1Voltage 23
#define GDW_KoCHPv1Current 24
#define GDW_KoCHPv1Power 25
#define GDW_KoCHPv2Voltage 26
#define GDW_KoCHPv2Current 27
#define GDW_KoCHPv2Power 28
#define GDW_KoCHPv3Voltage 29
#define GDW_KoCHPv3Current 30
#define GDW_KoCHPv3Power 31
#define GDW_KoCHPv4Voltage 32
#define GDW_KoCHPv4Current 33
#define GDW_KoCHPv4Power 34
#define GDW_KoCHPv1Mode 35
#define GDW_KoCHPv2Mode 36
#define GDW_KoCHPv3Mode 37
#define GDW_KoCHPv4Mode 38
#define GDW_KoCHTotalInputPower 39
#define GDW_KoCHPvPowerTotalExt 40
#define GDW_KoCHPvChannel 41
#define GDW_KoCHPv5Voltage 42
#define GDW_KoCHPv5Current 43
#define GDW_KoCHPv6Voltage 44
#define GDW_KoCHPv6Current 45
#define GDW_KoCHPv7Voltage 46
#define GDW_KoCHPv7Current 47
#define GDW_KoCHPv8Voltage 48
#define GDW_KoCHPv8Current 49
#define GDW_KoCHPv9Voltage 50
#define GDW_KoCHPv9Current 51
#define GDW_KoCHPv10Voltage 52
#define GDW_KoCHPv10Current 53
#define GDW_KoCHPv11Voltage 54
#define GDW_KoCHPv11Current 55
#define GDW_KoCHPv12Voltage 56
#define GDW_KoCHPv12Current 57
#define GDW_KoCHPv13Voltage 58
#define GDW_KoCHPv13Current 59
#define GDW_KoCHPv14Voltage 60
#define GDW_KoCHPv14Current 61
#define GDW_KoCHPv15Voltage 62
#define GDW_KoCHPv15Current 63
#define GDW_KoCHPv16Voltage 64
#define GDW_KoCHPv16Current 65
#define GDW_KoCHMppt1Power 66
#define GDW_KoCHMppt2Power 67
#define GDW_KoCHMppt3Power 68
#define GDW_KoCHMppt4Power 69
#define GDW_KoCHMppt5Power 70
#define GDW_KoCHMppt6Power 71
#define GDW_KoCHMppt7Power 72
#define GDW_KoCHMppt8Power 73
#define GDW_KoCHMppt1Current 74
#define GDW_KoCHMppt2Current 75
#define GDW_KoCHMppt3Current 76
#define GDW_KoCHMppt4Current 77
#define GDW_KoCHMppt5Current 78
#define GDW_KoCHMppt6Current 79
#define GDW_KoCHMppt7Current 80
#define GDW_KoCHMppt8Current 81
#define GDW_KoCHGridVoltageL1 82
#define GDW_KoCHGridCurrentL1 83
#define GDW_KoCHGridFrequencyL1 84
#define GDW_KoCHGridPowerL1 85
#define GDW_KoCHGridVoltageL2 86
#define GDW_KoCHGridCurrentL2 87
#define GDW_KoCHGridFrequencyL2 88
#define GDW_KoCHGridPowerL2 89
#define GDW_KoCHGridVoltageL3 90
#define GDW_KoCHGridCurrentL3 91
#define GDW_KoCHGridFrequencyL3 92
#define GDW_KoCHGridPowerL3 93
#define GDW_KoCHInverterPower 94
#define GDW_KoCHActivePower 95
#define GDW_KoCHImportPower 96
#define GDW_KoCHExportPower 97
#define GDW_KoCHReactivePower 98
#define GDW_KoCHApparentPower 99
#define GDW_KoCHHouseConsumption 100
#define GDW_KoCHReactivePowerL1 101
#define GDW_KoCHReactivePowerL2 102
#define GDW_KoCHReactivePowerL3 103
#define GDW_KoCHApparentPowerL1 104
#define GDW_KoCHApparentPowerL2 105
#define GDW_KoCHApparentPowerL3 106
#define GDW_KoCHLineVoltageL1L2 107
#define GDW_KoCHLineVoltageL2L3 108
#define GDW_KoCHLineVoltageL3L1 109
#define GDW_KoCHPowerFactor 110
#define GDW_KoCHBackupVoltageL1 111
#define GDW_KoCHBackupCurrentL1 112
#define GDW_KoCHBackupFrequencyL1 113
#define GDW_KoCHLoadModeL1 114
#define GDW_KoCHBackupPowerL1 115
#define GDW_KoCHBackupVoltageL2 116
#define GDW_KoCHBackupCurrentL2 117
#define GDW_KoCHBackupFrequencyL2 118
#define GDW_KoCHLoadModeL2 119
#define GDW_KoCHBackupPowerL2 120
#define GDW_KoCHBackupVoltageL3 121
#define GDW_KoCHBackupCurrentL3 122
#define GDW_KoCHBackupFrequencyL3 123
#define GDW_KoCHLoadModeL3 124
#define GDW_KoCHBackupPowerL3 125
#define GDW_KoCHLoadPowerL1 126
#define GDW_KoCHLoadPowerL2 127
#define GDW_KoCHLoadPowerL3 128
#define GDW_KoCHBackupPowerTotal 129
#define GDW_KoCHLoadPowerTotal 130
#define GDW_KoCHUpsLoad 131
#define GDW_KoCHBatteryVoltage 132
#define GDW_KoCHBatteryCurrent 133
#define GDW_KoCHBatteryPower 134
#define GDW_KoCHBatteryMode 135
#define GDW_KoCHBatterySoc 136
#define GDW_KoCHBatterySoh 137
#define GDW_KoCHBatteryTemperature 138
#define GDW_KoCHBatteryChargeLimit 139
#define GDW_KoCHBatteryDischargeLimit 140
#define GDW_KoCHBatteryBms 141
#define GDW_KoCHBatteryIndex 142
#define GDW_KoCHBatteryStatus 143
#define GDW_KoCHBatteryModules 144
#define GDW_KoCHBatteryProtocol 145
#define GDW_KoCHBatteryError 146
#define GDW_KoCHBatteryWarning 147
#define GDW_KoCHBatterySwVersion 148
#define GDW_KoCHBatteryHwVersion 149
#define GDW_KoCHBatteryMaxCellTempId 150
#define GDW_KoCHBatteryMinCellTempId 151
#define GDW_KoCHBatteryMaxCellVoltId 152
#define GDW_KoCHBatteryMinCellVoltId 153
#define GDW_KoCHBatteryMaxCellTemp 154
#define GDW_KoCHBatteryMinCellTemp 155
#define GDW_KoCHBatteryMaxCellVoltage 156
#define GDW_KoCHBatteryMinCellVoltage 157
#define GDW_KoCHBatteryCapacity 158
#define GDW_KoCHBattery2Voltage 159
#define GDW_KoCHBattery2Current 160
#define GDW_KoCHBattery2Power 161
#define GDW_KoCHBattery2Mode 162
#define GDW_KoCHBattery2Status 163
#define GDW_KoCHBattery2Temperature 164
#define GDW_KoCHBattery2ChargeLimit 165
#define GDW_KoCHBattery2DischargeLimit 166
#define GDW_KoCHBattery2Soc 167
#define GDW_KoCHBattery2Soh 168
#define GDW_KoCHBattery2Modules 169
#define GDW_KoCHBattery2Protocol 170
#define GDW_KoCHBattery2Error 171
#define GDW_KoCHBattery2Warning 172
#define GDW_KoCHBattery2SwVersion 173
#define GDW_KoCHBattery2HwVersion 174
#define GDW_KoCHBattery2MaxCellTempId 175
#define GDW_KoCHBattery2MinCellTempId 176
#define GDW_KoCHBattery2MaxCellVoltId 177
#define GDW_KoCHBattery2MinCellVoltId 178
#define GDW_KoCHBattery2MaxCellTemp 179
#define GDW_KoCHBattery2MinCellTemp 180
#define GDW_KoCHBattery2MaxCellVoltage 181
#define GDW_KoCHBattery2MinCellVoltage 182
#define GDW_KoCHEnergyTotal 183
#define GDW_KoCHEnergyToday 184
#define GDW_KoCHMeterExportTotal 185
#define GDW_KoCHMeterImportTotal 186
#define GDW_KoCHExportTotal 187
#define GDW_KoCHExportToday 188
#define GDW_KoCHImportTotal 189
#define GDW_KoCHImportToday 190
#define GDW_KoCHLoadTotal 191
#define GDW_KoCHLoadToday 192
#define GDW_KoCHBatteryChargeTotal 193
#define GDW_KoCHBatteryChargeToday 194
#define GDW_KoCHBatteryDischargeTotal 195
#define GDW_KoCHBatteryDischargeToday 196
#define GDW_KoCHMeterCommode 197
#define GDW_KoCHMeterManufacturer 198
#define GDW_KoCHMeterTestStatus 199
#define GDW_KoCHMeterTypeCode 200
#define GDW_KoCHMeterSwVersion 201
#define GDW_KoCHMeterPowerL1 202
#define GDW_KoCHMeterPowerL2 203
#define GDW_KoCHMeterPowerL3 204
#define GDW_KoCHMeterPowerTotal 205
#define GDW_KoCHMeterPower16L1 206
#define GDW_KoCHMeterPower16L2 207
#define GDW_KoCHMeterPower16L3 208
#define GDW_KoCHMeterPower16Total 209
#define GDW_KoCHMeterReactiveL1 210
#define GDW_KoCHMeterReactiveL2 211
#define GDW_KoCHMeterReactiveL3 212
#define GDW_KoCHMeterReactiveTotal 213
#define GDW_KoCHMeterReactive16Total 214
#define GDW_KoCHMeterApparentL1 215
#define GDW_KoCHMeterApparentL2 216
#define GDW_KoCHMeterApparentL3 217
#define GDW_KoCHMeterApparentTotal 218
#define GDW_KoCHMeterPowerFactorL1 219
#define GDW_KoCHMeterPowerFactorL2 220
#define GDW_KoCHMeterPowerFactorL3 221
#define GDW_KoCHMeterPowerFactor 222
#define GDW_KoCHMeterFrequency 223
#define GDW_KoCHMeterVoltageL1 224
#define GDW_KoCHMeterVoltageL2 225
#define GDW_KoCHMeterVoltageL3 226
#define GDW_KoCHMeterCurrentL1 227
#define GDW_KoCHMeterCurrentL2 228
#define GDW_KoCHMeterCurrentL3 229
#define GDW_KoCHMeter2Power 230
#define GDW_KoCHMeter2ExportTotal 231
#define GDW_KoCHMeter2ImportTotal 232
#define GDW_KoCHMeter2CommStatus 233
#define GDW_KoCHMeterExportL1 234
#define GDW_KoCHMeterExportL2 235
#define GDW_KoCHMeterExportL3 236
#define GDW_KoCHMeterExportTotal64 237
#define GDW_KoCHMeterImportL1 238
#define GDW_KoCHMeterImportL2 239
#define GDW_KoCHMeterImportL3 240
#define GDW_KoCHMeterImportTotal64 241
#define GDW_KoCHBms1Version 242
#define GDW_KoCHBms1Modules 243
#define GDW_KoCHBms1ChargeVoltageMax 244
#define GDW_KoCHBms1ChargeCurrentMax 245
#define GDW_KoCHBms1DischargeVoltageMin 246
#define GDW_KoCHBms1DischargeCurrentMax 247
#define GDW_KoCHBms1Voltage 248
#define GDW_KoCHBms1Current 249
#define GDW_KoCHBms1Soc 250
#define GDW_KoCHBms1Soh 251
#define GDW_KoCHBms1Temperature 252
#define GDW_KoCHBms1WarningCode 253
#define GDW_KoCHBms1AlarmCode 254
#define GDW_KoCHBms1Status 255
#define GDW_KoCHBms1CommLossDisable 256
#define GDW_KoCHBms1StringRateVoltage 257
#define GDW_KoCHBms2Version 258
#define GDW_KoCHBms2Modules 259
#define GDW_KoCHBms2ChargeVoltageMax 260
#define GDW_KoCHBms2ChargeCurrentMax 261
#define GDW_KoCHBms2DischargeVoltageMin 262
#define GDW_KoCHBms2DischargeCurrentMax 263
#define GDW_KoCHBms2Voltage 264
#define GDW_KoCHBms2Current 265
#define GDW_KoCHBms2Soc 266
#define GDW_KoCHBms2Soh 267
#define GDW_KoCHBms2Temperature 268
#define GDW_KoCHBms2WarningCode 269
#define GDW_KoCHBms2AlarmCode 270
#define GDW_KoCHBms2Status 271
#define GDW_KoCHBms2CommLossDisable 272
#define GDW_KoCHBms2StringRateVoltage 273
#define GDW_KoCHOperationMode 300
#define GDW_KoCHOperationModeStatus 301
#define GDW_KoCHEmsMode 302
#define GDW_KoCHEmsModeStatus 303
#define GDW_KoCHEmsPowerLimit 304
#define GDW_KoCHEmsPowerLimitStatus 305
#define GDW_KoCHExportLimitEnable 306
#define GDW_KoCHExportLimitEnableStatus 307
#define GDW_KoCHExportLimit 308
#define GDW_KoCHExportLimitStatus 309
#define GDW_KoCHExportLimitPercent 310
#define GDW_KoCHExportLimitPercentStatus 311
#define GDW_KoCHDodOnGrid 312
#define GDW_KoCHDodOnGridStatus 313
#define GDW_KoCHDodOffGrid 314
#define GDW_KoCHDodOffGridStatus 315
#define GDW_KoCHSocProtection 316
#define GDW_KoCHSocProtectionStatus 317
#define GDW_KoCHSocUpperLimit 318
#define GDW_KoCHSocUpperLimitStatus 319
#define GDW_KoCHEcoModePower 320
#define GDW_KoCHEcoModePowerStatus 321
#define GDW_KoCHEcoModeSoc 322
#define GDW_KoCHEcoModeSocStatus 323
#define GDW_KoCHFastCharging 324
#define GDW_KoCHFastChargingStatus 325
#define GDW_KoCHFastChargingSoc 326
#define GDW_KoCHFastChargingSocStatus 327
#define GDW_KoCHFastChargingPower 328
#define GDW_KoCHFastChargingPowerStatus 329
#define GDW_KoCHBackupSupply 330
#define GDW_KoCHBackupSupplyStatus 331
#define GDW_KoCHDodHolding 332
#define GDW_KoCHDodHoldingStatus 333
#define GDW_KoCHLoadControl 334
#define GDW_KoCHLoadControlStatus 335
#define GDW_KoCHSyncClock 336
#define GDW_KoCHStartInverter 338
#define GDW_KoCHStopInverter 340

// Erreichbar
#define KoGDW_CHReachable                         (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHReachable)))
// Arbeitsmodus
#define KoGDW_CHWorkMode                          (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHWorkMode)))
// Fehlercode
#define KoGDW_CHErrorCodes                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHErrorCodes)))
// Warnungscode
#define KoGDW_CHWarningCode                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHWarningCode)))
// Ländereinstellung
#define KoGDW_CHSafetyCountry                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHSafetyCountry)))
// Funktionsbits
#define KoGDW_CHFunctionBit                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHFunctionBit)))
// Betriebsstunden
#define KoGDW_CHHoursTotal                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHHoursTotal)))
// Gerätezeit
#define KoGDW_CHTimestamp                         (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHTimestamp)))
// Temperatur Wechselrichter
#define KoGDW_CHTemperature                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHTemperature)))
// Busspannung
#define KoGDW_CHBusVoltage                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBusVoltage)))
// N-Busspannung
#define KoGDW_CHNBusVoltage                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHNBusVoltage)))
// Netzrichtung
#define KoGDW_CHGridInOut                         (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHGridInOut)))
// Signalstärke
#define KoGDW_CHRssi                              (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHRssi)))
// Zähler Kommunikationsstatus
#define KoGDW_CHMeterCommStatus                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterCommStatus)))
// Netzstatus
#define KoGDW_CHGridMode                          (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHGridMode)))
// Betriebsart
#define KoGDW_CHOperationCode                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHOperationCode)))
// Diagnosestatus
#define KoGDW_CHDiagStatus                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHDiagStatus)))
// Temperatur Luft
#define KoGDW_CHTempAir                           (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHTempAir)))
// Temperatur Modul
#define KoGDW_CHTempModule                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHTempModule)))
// Temperatur Kühlkörper
#define KoGDW_CHTempHeatsink                      (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHTempHeatsink)))
// Leistungsreduzierung
#define KoGDW_CHDeratingMode                      (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHDeratingMode)))
// Ableitstrom
#define KoGDW_CHLeakageCurrent                    (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHLeakageCurrent)))
// PV-Leistung gesamt
#define KoGDW_CHPvPower                           (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPvPower)))
// PV1 Spannung
#define KoGDW_CHPv1Voltage                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv1Voltage)))
// PV1 Strom
#define KoGDW_CHPv1Current                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv1Current)))
// PV1 Leistung
#define KoGDW_CHPv1Power                          (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv1Power)))
// PV2 Spannung
#define KoGDW_CHPv2Voltage                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv2Voltage)))
// PV2 Strom
#define KoGDW_CHPv2Current                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv2Current)))
// PV2 Leistung
#define KoGDW_CHPv2Power                          (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv2Power)))
// PV3 Spannung
#define KoGDW_CHPv3Voltage                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv3Voltage)))
// PV3 Strom
#define KoGDW_CHPv3Current                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv3Current)))
// PV3 Leistung
#define KoGDW_CHPv3Power                          (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv3Power)))
// PV4 Spannung
#define KoGDW_CHPv4Voltage                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv4Voltage)))
// PV4 Strom
#define KoGDW_CHPv4Current                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv4Current)))
// PV4 Leistung
#define KoGDW_CHPv4Power                          (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv4Power)))
// PV1 Modus
#define KoGDW_CHPv1Mode                           (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv1Mode)))
// PV2 Modus
#define KoGDW_CHPv2Mode                           (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv2Mode)))
// PV3 Modus
#define KoGDW_CHPv3Mode                           (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv3Mode)))
// PV4 Modus
#define KoGDW_CHPv4Mode                           (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv4Mode)))
// Eingangsleistung gesamt
#define KoGDW_CHTotalInputPower                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHTotalInputPower)))
// PV-Leistung gesamt (MPPT-Block)
#define KoGDW_CHPvPowerTotalExt                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPvPowerTotalExt)))
// Anzahl PV-Kanäle
#define KoGDW_CHPvChannel                         (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPvChannel)))
// PV5 Spannung
#define KoGDW_CHPv5Voltage                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv5Voltage)))
// PV5 Strom
#define KoGDW_CHPv5Current                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv5Current)))
// PV6 Spannung
#define KoGDW_CHPv6Voltage                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv6Voltage)))
// PV6 Strom
#define KoGDW_CHPv6Current                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv6Current)))
// PV7 Spannung
#define KoGDW_CHPv7Voltage                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv7Voltage)))
// PV7 Strom
#define KoGDW_CHPv7Current                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv7Current)))
// PV8 Spannung
#define KoGDW_CHPv8Voltage                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv8Voltage)))
// PV8 Strom
#define KoGDW_CHPv8Current                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv8Current)))
// PV9 Spannung
#define KoGDW_CHPv9Voltage                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv9Voltage)))
// PV9 Strom
#define KoGDW_CHPv9Current                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv9Current)))
// PV10 Spannung
#define KoGDW_CHPv10Voltage                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv10Voltage)))
// PV10 Strom
#define KoGDW_CHPv10Current                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv10Current)))
// PV11 Spannung
#define KoGDW_CHPv11Voltage                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv11Voltage)))
// PV11 Strom
#define KoGDW_CHPv11Current                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv11Current)))
// PV12 Spannung
#define KoGDW_CHPv12Voltage                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv12Voltage)))
// PV12 Strom
#define KoGDW_CHPv12Current                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv12Current)))
// PV13 Spannung
#define KoGDW_CHPv13Voltage                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv13Voltage)))
// PV13 Strom
#define KoGDW_CHPv13Current                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv13Current)))
// PV14 Spannung
#define KoGDW_CHPv14Voltage                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv14Voltage)))
// PV14 Strom
#define KoGDW_CHPv14Current                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv14Current)))
// PV15 Spannung
#define KoGDW_CHPv15Voltage                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv15Voltage)))
// PV15 Strom
#define KoGDW_CHPv15Current                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv15Current)))
// PV16 Spannung
#define KoGDW_CHPv16Voltage                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv16Voltage)))
// PV16 Strom
#define KoGDW_CHPv16Current                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPv16Current)))
// MPPT1 Leistung
#define KoGDW_CHMppt1Power                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMppt1Power)))
// MPPT2 Leistung
#define KoGDW_CHMppt2Power                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMppt2Power)))
// MPPT3 Leistung
#define KoGDW_CHMppt3Power                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMppt3Power)))
// MPPT4 Leistung
#define KoGDW_CHMppt4Power                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMppt4Power)))
// MPPT5 Leistung
#define KoGDW_CHMppt5Power                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMppt5Power)))
// MPPT6 Leistung
#define KoGDW_CHMppt6Power                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMppt6Power)))
// MPPT7 Leistung
#define KoGDW_CHMppt7Power                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMppt7Power)))
// MPPT8 Leistung
#define KoGDW_CHMppt8Power                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMppt8Power)))
// MPPT1 Strom
#define KoGDW_CHMppt1Current                      (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMppt1Current)))
// MPPT2 Strom
#define KoGDW_CHMppt2Current                      (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMppt2Current)))
// MPPT3 Strom
#define KoGDW_CHMppt3Current                      (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMppt3Current)))
// MPPT4 Strom
#define KoGDW_CHMppt4Current                      (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMppt4Current)))
// MPPT5 Strom
#define KoGDW_CHMppt5Current                      (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMppt5Current)))
// MPPT6 Strom
#define KoGDW_CHMppt6Current                      (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMppt6Current)))
// MPPT7 Strom
#define KoGDW_CHMppt7Current                      (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMppt7Current)))
// MPPT8 Strom
#define KoGDW_CHMppt8Current                      (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMppt8Current)))
// Netzspannung L1
#define KoGDW_CHGridVoltageL1                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHGridVoltageL1)))
// Netzstrom L1
#define KoGDW_CHGridCurrentL1                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHGridCurrentL1)))
// Netzfrequenz L1
#define KoGDW_CHGridFrequencyL1                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHGridFrequencyL1)))
// Leistung L1
#define KoGDW_CHGridPowerL1                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHGridPowerL1)))
// Netzspannung L2
#define KoGDW_CHGridVoltageL2                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHGridVoltageL2)))
// Netzstrom L2
#define KoGDW_CHGridCurrentL2                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHGridCurrentL2)))
// Netzfrequenz L2
#define KoGDW_CHGridFrequencyL2                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHGridFrequencyL2)))
// Leistung L2
#define KoGDW_CHGridPowerL2                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHGridPowerL2)))
// Netzspannung L3
#define KoGDW_CHGridVoltageL3                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHGridVoltageL3)))
// Netzstrom L3
#define KoGDW_CHGridCurrentL3                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHGridCurrentL3)))
// Netzfrequenz L3
#define KoGDW_CHGridFrequencyL3                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHGridFrequencyL3)))
// Leistung L3
#define KoGDW_CHGridPowerL3                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHGridPowerL3)))
// Wechselrichterleistung
#define KoGDW_CHInverterPower                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHInverterPower)))
// Netzleistung (+ Einspeisung)
#define KoGDW_CHActivePower                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHActivePower)))
// Netzbezug Leistung
#define KoGDW_CHImportPower                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHImportPower)))
// Einspeisung Leistung
#define KoGDW_CHExportPower                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHExportPower)))
// Blindleistung (var)
#define KoGDW_CHReactivePower                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHReactivePower)))
// Scheinleistung (VA)
#define KoGDW_CHApparentPower                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHApparentPower)))
// Hausverbrauch
#define KoGDW_CHHouseConsumption                  (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHHouseConsumption)))
// Blindleistung L1 (var)
#define KoGDW_CHReactivePowerL1                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHReactivePowerL1)))
// Blindleistung L2 (var)
#define KoGDW_CHReactivePowerL2                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHReactivePowerL2)))
// Blindleistung L3 (var)
#define KoGDW_CHReactivePowerL3                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHReactivePowerL3)))
// Scheinleistung L1 (VA)
#define KoGDW_CHApparentPowerL1                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHApparentPowerL1)))
// Scheinleistung L2 (VA)
#define KoGDW_CHApparentPowerL2                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHApparentPowerL2)))
// Scheinleistung L3 (VA)
#define KoGDW_CHApparentPowerL3                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHApparentPowerL3)))
// Außenleiterspannung L1-L2
#define KoGDW_CHLineVoltageL1L2                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHLineVoltageL1L2)))
// Außenleiterspannung L2-L3
#define KoGDW_CHLineVoltageL2L3                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHLineVoltageL2L3)))
// Außenleiterspannung L3-L1
#define KoGDW_CHLineVoltageL3L1                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHLineVoltageL3L1)))
// Leistungsfaktor
#define KoGDW_CHPowerFactor                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHPowerFactor)))
// Backup L1 Spannung
#define KoGDW_CHBackupVoltageL1                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBackupVoltageL1)))
// Backup L1 Strom
#define KoGDW_CHBackupCurrentL1                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBackupCurrentL1)))
// Backup L1 Frequenz
#define KoGDW_CHBackupFrequencyL1                 (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBackupFrequencyL1)))
// Lastmodus L1
#define KoGDW_CHLoadModeL1                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHLoadModeL1)))
// Backup L1 Leistung
#define KoGDW_CHBackupPowerL1                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBackupPowerL1)))
// Backup L2 Spannung
#define KoGDW_CHBackupVoltageL2                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBackupVoltageL2)))
// Backup L2 Strom
#define KoGDW_CHBackupCurrentL2                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBackupCurrentL2)))
// Backup L2 Frequenz
#define KoGDW_CHBackupFrequencyL2                 (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBackupFrequencyL2)))
// Lastmodus L2
#define KoGDW_CHLoadModeL2                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHLoadModeL2)))
// Backup L2 Leistung
#define KoGDW_CHBackupPowerL2                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBackupPowerL2)))
// Backup L3 Spannung
#define KoGDW_CHBackupVoltageL3                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBackupVoltageL3)))
// Backup L3 Strom
#define KoGDW_CHBackupCurrentL3                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBackupCurrentL3)))
// Backup L3 Frequenz
#define KoGDW_CHBackupFrequencyL3                 (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBackupFrequencyL3)))
// Lastmodus L3
#define KoGDW_CHLoadModeL3                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHLoadModeL3)))
// Backup L3 Leistung
#define KoGDW_CHBackupPowerL3                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBackupPowerL3)))
// Last L1
#define KoGDW_CHLoadPowerL1                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHLoadPowerL1)))
// Last L2
#define KoGDW_CHLoadPowerL2                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHLoadPowerL2)))
// Last L3
#define KoGDW_CHLoadPowerL3                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHLoadPowerL3)))
// Backup-Last gesamt
#define KoGDW_CHBackupPowerTotal                  (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBackupPowerTotal)))
// Last gesamt
#define KoGDW_CHLoadPowerTotal                    (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHLoadPowerTotal)))
// USV-Auslastung
#define KoGDW_CHUpsLoad                           (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHUpsLoad)))
// Batterie Spannung
#define KoGDW_CHBatteryVoltage                    (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryVoltage)))
// Batterie Strom
#define KoGDW_CHBatteryCurrent                    (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryCurrent)))
// Batterie Leistung (+ Entladen)
#define KoGDW_CHBatteryPower                      (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryPower)))
// Batterie Modus
#define KoGDW_CHBatteryMode                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryMode)))
// Batterie Ladezustand
#define KoGDW_CHBatterySoc                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatterySoc)))
// Batterie Gesundheitszustand
#define KoGDW_CHBatterySoh                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatterySoh)))
// Batterie Temperatur
#define KoGDW_CHBatteryTemperature                (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryTemperature)))
// Batterie Ladestromgrenze
#define KoGDW_CHBatteryChargeLimit                (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryChargeLimit)))
// Batterie Entladestromgrenze
#define KoGDW_CHBatteryDischargeLimit             (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryDischargeLimit)))
// Batterie BMS
#define KoGDW_CHBatteryBms                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryBms)))
// Batterie Index
#define KoGDW_CHBatteryIndex                      (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryIndex)))
// Batterie Status
#define KoGDW_CHBatteryStatus                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryStatus)))
// Batterie Modulanzahl
#define KoGDW_CHBatteryModules                    (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryModules)))
// Batterie Protokoll
#define KoGDW_CHBatteryProtocol                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryProtocol)))
// Batterie Fehler
#define KoGDW_CHBatteryError                      (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryError)))
// Batterie Warnung
#define KoGDW_CHBatteryWarning                    (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryWarning)))
// Batterie Softwareversion
#define KoGDW_CHBatterySwVersion                  (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatterySwVersion)))
// Batterie Hardwareversion
#define KoGDW_CHBatteryHwVersion                  (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryHwVersion)))
// Batterie Zelle max. Temperatur (Nr.)
#define KoGDW_CHBatteryMaxCellTempId              (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryMaxCellTempId)))
// Batterie Zelle min. Temperatur (Nr.)
#define KoGDW_CHBatteryMinCellTempId              (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryMinCellTempId)))
// Batterie Zelle max. Spannung (Nr.)
#define KoGDW_CHBatteryMaxCellVoltId              (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryMaxCellVoltId)))
// Batterie Zelle min. Spannung (Nr.)
#define KoGDW_CHBatteryMinCellVoltId              (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryMinCellVoltId)))
// Batterie Zelltemperatur max.
#define KoGDW_CHBatteryMaxCellTemp                (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryMaxCellTemp)))
// Batterie Zelltemperatur min.
#define KoGDW_CHBatteryMinCellTemp                (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryMinCellTemp)))
// Batterie Zellspannung max.
#define KoGDW_CHBatteryMaxCellVoltage             (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryMaxCellVoltage)))
// Batterie Zellspannung min.
#define KoGDW_CHBatteryMinCellVoltage             (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryMinCellVoltage)))
// Batterie Kapazität (Ah)
#define KoGDW_CHBatteryCapacity                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryCapacity)))
// Batterie 2 Spannung
#define KoGDW_CHBattery2Voltage                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2Voltage)))
// Batterie 2 Strom
#define KoGDW_CHBattery2Current                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2Current)))
// Batterie 2 Leistung (+ Entladen)
#define KoGDW_CHBattery2Power                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2Power)))
// Batterie 2 Modus
#define KoGDW_CHBattery2Mode                      (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2Mode)))
// Batterie 2 Status
#define KoGDW_CHBattery2Status                    (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2Status)))
// Batterie 2 Temperatur
#define KoGDW_CHBattery2Temperature               (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2Temperature)))
// Batterie 2 Ladestromgrenze
#define KoGDW_CHBattery2ChargeLimit               (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2ChargeLimit)))
// Batterie 2 Entladestromgrenze
#define KoGDW_CHBattery2DischargeLimit            (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2DischargeLimit)))
// Batterie 2 Ladezustand
#define KoGDW_CHBattery2Soc                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2Soc)))
// Batterie 2 Gesundheitszustand
#define KoGDW_CHBattery2Soh                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2Soh)))
// Batterie 2 Modulanzahl
#define KoGDW_CHBattery2Modules                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2Modules)))
// Batterie 2 Protokoll
#define KoGDW_CHBattery2Protocol                  (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2Protocol)))
// Batterie 2 Fehler
#define KoGDW_CHBattery2Error                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2Error)))
// Batterie 2 Warnung
#define KoGDW_CHBattery2Warning                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2Warning)))
// Batterie 2 Softwareversion
#define KoGDW_CHBattery2SwVersion                 (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2SwVersion)))
// Batterie 2 Hardwareversion
#define KoGDW_CHBattery2HwVersion                 (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2HwVersion)))
// Batterie 2 Zelle max. Temperatur (Nr.)
#define KoGDW_CHBattery2MaxCellTempId             (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2MaxCellTempId)))
// Batterie 2 Zelle min. Temperatur (Nr.)
#define KoGDW_CHBattery2MinCellTempId             (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2MinCellTempId)))
// Batterie 2 Zelle max. Spannung (Nr.)
#define KoGDW_CHBattery2MaxCellVoltId             (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2MaxCellVoltId)))
// Batterie 2 Zelle min. Spannung (Nr.)
#define KoGDW_CHBattery2MinCellVoltId             (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2MinCellVoltId)))
// Batterie 2 Zelltemperatur max.
#define KoGDW_CHBattery2MaxCellTemp               (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2MaxCellTemp)))
// Batterie 2 Zelltemperatur min.
#define KoGDW_CHBattery2MinCellTemp               (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2MinCellTemp)))
// Batterie 2 Zellspannung max.
#define KoGDW_CHBattery2MaxCellVoltage            (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2MaxCellVoltage)))
// Batterie 2 Zellspannung min.
#define KoGDW_CHBattery2MinCellVoltage            (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBattery2MinCellVoltage)))
// PV-Ertrag gesamt
#define KoGDW_CHEnergyTotal                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHEnergyTotal)))
// PV-Ertrag heute
#define KoGDW_CHEnergyToday                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHEnergyToday)))
// Zähler Einspeisung gesamt
#define KoGDW_CHMeterExportTotal                  (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterExportTotal)))
// Zähler Netzbezug gesamt
#define KoGDW_CHMeterImportTotal                  (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterImportTotal)))
// Einspeisung gesamt
#define KoGDW_CHExportTotal                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHExportTotal)))
// Einspeisung heute
#define KoGDW_CHExportToday                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHExportToday)))
// Netzbezug gesamt
#define KoGDW_CHImportTotal                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHImportTotal)))
// Netzbezug heute
#define KoGDW_CHImportToday                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHImportToday)))
// Verbrauch gesamt
#define KoGDW_CHLoadTotal                         (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHLoadTotal)))
// Verbrauch heute
#define KoGDW_CHLoadToday                         (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHLoadToday)))
// Batterie geladen gesamt
#define KoGDW_CHBatteryChargeTotal                (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryChargeTotal)))
// Batterie geladen heute
#define KoGDW_CHBatteryChargeToday                (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryChargeToday)))
// Batterie entladen gesamt
#define KoGDW_CHBatteryDischargeTotal             (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryDischargeTotal)))
// Batterie entladen heute
#define KoGDW_CHBatteryDischargeToday             (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBatteryDischargeToday)))
// Zähler Kommunikationsart
#define KoGDW_CHMeterCommode                      (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterCommode)))
// Zähler Herstellercode
#define KoGDW_CHMeterManufacturer                 (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterManufacturer)))
// Zähler Prüfstatus
#define KoGDW_CHMeterTestStatus                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterTestStatus)))
// Zähler Typ
#define KoGDW_CHMeterTypeCode                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterTypeCode)))
// Zähler Softwareversion
#define KoGDW_CHMeterSwVersion                    (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterSwVersion)))
// Zähler Wirkleistung L1
#define KoGDW_CHMeterPowerL1                      (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterPowerL1)))
// Zähler Wirkleistung L2
#define KoGDW_CHMeterPowerL2                      (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterPowerL2)))
// Zähler Wirkleistung L3
#define KoGDW_CHMeterPowerL3                      (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterPowerL3)))
// Zähler Wirkleistung gesamt
#define KoGDW_CHMeterPowerTotal                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterPowerTotal)))
// Zähler Wirkleistung L1 (16 Bit)
#define KoGDW_CHMeterPower16L1                    (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterPower16L1)))
// Zähler Wirkleistung L2 (16 Bit)
#define KoGDW_CHMeterPower16L2                    (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterPower16L2)))
// Zähler Wirkleistung L3 (16 Bit)
#define KoGDW_CHMeterPower16L3                    (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterPower16L3)))
// Zähler Wirkleistung gesamt (16 Bit)
#define KoGDW_CHMeterPower16Total                 (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterPower16Total)))
// Zähler Blindleistung L1 (var)
#define KoGDW_CHMeterReactiveL1                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterReactiveL1)))
// Zähler Blindleistung L2 (var)
#define KoGDW_CHMeterReactiveL2                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterReactiveL2)))
// Zähler Blindleistung L3 (var)
#define KoGDW_CHMeterReactiveL3                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterReactiveL3)))
// Zähler Blindleistung gesamt (var)
#define KoGDW_CHMeterReactiveTotal                (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterReactiveTotal)))
// Zähler Blindleistung gesamt (16 Bit, var)
#define KoGDW_CHMeterReactive16Total              (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterReactive16Total)))
// Zähler Scheinleistung L1 (VA)
#define KoGDW_CHMeterApparentL1                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterApparentL1)))
// Zähler Scheinleistung L2 (VA)
#define KoGDW_CHMeterApparentL2                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterApparentL2)))
// Zähler Scheinleistung L3 (VA)
#define KoGDW_CHMeterApparentL3                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterApparentL3)))
// Zähler Scheinleistung gesamt (VA)
#define KoGDW_CHMeterApparentTotal                (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterApparentTotal)))
// Zähler Leistungsfaktor L1
#define KoGDW_CHMeterPowerFactorL1                (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterPowerFactorL1)))
// Zähler Leistungsfaktor L2
#define KoGDW_CHMeterPowerFactorL2                (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterPowerFactorL2)))
// Zähler Leistungsfaktor L3
#define KoGDW_CHMeterPowerFactorL3                (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterPowerFactorL3)))
// Zähler Leistungsfaktor
#define KoGDW_CHMeterPowerFactor                  (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterPowerFactor)))
// Zähler Frequenz
#define KoGDW_CHMeterFrequency                    (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterFrequency)))
// Zähler Spannung L1
#define KoGDW_CHMeterVoltageL1                    (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterVoltageL1)))
// Zähler Spannung L2
#define KoGDW_CHMeterVoltageL2                    (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterVoltageL2)))
// Zähler Spannung L3
#define KoGDW_CHMeterVoltageL3                    (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterVoltageL3)))
// Zähler Strom L1
#define KoGDW_CHMeterCurrentL1                    (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterCurrentL1)))
// Zähler Strom L2
#define KoGDW_CHMeterCurrentL2                    (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterCurrentL2)))
// Zähler Strom L3
#define KoGDW_CHMeterCurrentL3                    (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterCurrentL3)))
// Zähler 2 Wirkleistung
#define KoGDW_CHMeter2Power                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeter2Power)))
// Zähler 2 Einspeisung gesamt
#define KoGDW_CHMeter2ExportTotal                 (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeter2ExportTotal)))
// Zähler 2 Netzbezug gesamt
#define KoGDW_CHMeter2ImportTotal                 (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeter2ImportTotal)))
// Zähler 2 Kommunikationsstatus
#define KoGDW_CHMeter2CommStatus                  (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeter2CommStatus)))
// Zähler Einspeisung L1
#define KoGDW_CHMeterExportL1                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterExportL1)))
// Zähler Einspeisung L2
#define KoGDW_CHMeterExportL2                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterExportL2)))
// Zähler Einspeisung L3
#define KoGDW_CHMeterExportL3                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterExportL3)))
// Zähler Einspeisung gesamt (64 Bit)
#define KoGDW_CHMeterExportTotal64                (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterExportTotal64)))
// Zähler Netzbezug L1
#define KoGDW_CHMeterImportL1                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterImportL1)))
// Zähler Netzbezug L2
#define KoGDW_CHMeterImportL2                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterImportL2)))
// Zähler Netzbezug L3
#define KoGDW_CHMeterImportL3                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterImportL3)))
// Zähler Netzbezug gesamt (64 Bit)
#define KoGDW_CHMeterImportTotal64                (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHMeterImportTotal64)))
// BMS 1 Version
#define KoGDW_CHBms1Version                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms1Version)))
// BMS 1 Modulanzahl
#define KoGDW_CHBms1Modules                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms1Modules)))
// BMS 1 Ladespannung max.
#define KoGDW_CHBms1ChargeVoltageMax              (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms1ChargeVoltageMax)))
// BMS 1 Ladestrom max.
#define KoGDW_CHBms1ChargeCurrentMax              (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms1ChargeCurrentMax)))
// BMS 1 Entladespannung min.
#define KoGDW_CHBms1DischargeVoltageMin           (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms1DischargeVoltageMin)))
// BMS 1 Entladestrom max.
#define KoGDW_CHBms1DischargeCurrentMax           (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms1DischargeCurrentMax)))
// BMS 1 Spannung
#define KoGDW_CHBms1Voltage                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms1Voltage)))
// BMS 1 Strom
#define KoGDW_CHBms1Current                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms1Current)))
// BMS 1 Ladezustand
#define KoGDW_CHBms1Soc                           (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms1Soc)))
// BMS 1 Gesundheitszustand
#define KoGDW_CHBms1Soh                           (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms1Soh)))
// BMS 1 Temperatur
#define KoGDW_CHBms1Temperature                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms1Temperature)))
// BMS 1 Warnungscode
#define KoGDW_CHBms1WarningCode                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms1WarningCode)))
// BMS 1 Alarmcode
#define KoGDW_CHBms1AlarmCode                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms1AlarmCode)))
// BMS 1 Status
#define KoGDW_CHBms1Status                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms1Status)))
// BMS 1 Kommunikationsverlust ignorieren
#define KoGDW_CHBms1CommLossDisable               (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms1CommLossDisable)))
// BMS 1 Strang-Nennspannung
#define KoGDW_CHBms1StringRateVoltage             (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms1StringRateVoltage)))
// BMS 2 Version
#define KoGDW_CHBms2Version                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms2Version)))
// BMS 2 Modulanzahl
#define KoGDW_CHBms2Modules                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms2Modules)))
// BMS 2 Ladespannung max.
#define KoGDW_CHBms2ChargeVoltageMax              (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms2ChargeVoltageMax)))
// BMS 2 Ladestrom max.
#define KoGDW_CHBms2ChargeCurrentMax              (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms2ChargeCurrentMax)))
// BMS 2 Entladespannung min.
#define KoGDW_CHBms2DischargeVoltageMin           (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms2DischargeVoltageMin)))
// BMS 2 Entladestrom max.
#define KoGDW_CHBms2DischargeCurrentMax           (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms2DischargeCurrentMax)))
// BMS 2 Spannung
#define KoGDW_CHBms2Voltage                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms2Voltage)))
// BMS 2 Strom
#define KoGDW_CHBms2Current                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms2Current)))
// BMS 2 Ladezustand
#define KoGDW_CHBms2Soc                           (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms2Soc)))
// BMS 2 Gesundheitszustand
#define KoGDW_CHBms2Soh                           (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms2Soh)))
// BMS 2 Temperatur
#define KoGDW_CHBms2Temperature                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms2Temperature)))
// BMS 2 Warnungscode
#define KoGDW_CHBms2WarningCode                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms2WarningCode)))
// BMS 2 Alarmcode
#define KoGDW_CHBms2AlarmCode                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms2AlarmCode)))
// BMS 2 Status
#define KoGDW_CHBms2Status                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms2Status)))
// BMS 2 Kommunikationsverlust ignorieren
#define KoGDW_CHBms2CommLossDisable               (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms2CommLossDisable)))
// BMS 2 Strang-Nennspannung
#define KoGDW_CHBms2StringRateVoltage             (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBms2StringRateVoltage)))
// Betriebsmodus
#define KoGDW_CHOperationMode                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHOperationMode)))
// Status Betriebsmodus
#define KoGDW_CHOperationModeStatus               (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHOperationModeStatus)))
// EMS-Modus
#define KoGDW_CHEmsMode                           (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHEmsMode)))
// Status EMS-Modus
#define KoGDW_CHEmsModeStatus                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHEmsModeStatus)))
// EMS-Leistung
#define KoGDW_CHEmsPowerLimit                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHEmsPowerLimit)))
// Status EMS-Leistung
#define KoGDW_CHEmsPowerLimitStatus               (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHEmsPowerLimitStatus)))
// Einspeisebegrenzung aktiv
#define KoGDW_CHExportLimitEnable                 (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHExportLimitEnable)))
// Status Einspeisebegrenzung aktiv
#define KoGDW_CHExportLimitEnableStatus           (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHExportLimitEnableStatus)))
// Einspeisebegrenzung
#define KoGDW_CHExportLimit                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHExportLimit)))
// Status Einspeisebegrenzung
#define KoGDW_CHExportLimitStatus                 (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHExportLimitStatus)))
// Einspeisebegrenzung (%)
#define KoGDW_CHExportLimitPercent                (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHExportLimitPercent)))
// Status Einspeisebegrenzung (%)
#define KoGDW_CHExportLimitPercentStatus          (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHExportLimitPercentStatus)))
// Entladetiefe Netzbetrieb
#define KoGDW_CHDodOnGrid                         (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHDodOnGrid)))
// Status Entladetiefe Netzbetrieb
#define KoGDW_CHDodOnGridStatus                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHDodOnGridStatus)))
// Entladetiefe Inselbetrieb
#define KoGDW_CHDodOffGrid                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHDodOffGrid)))
// Status Entladetiefe Inselbetrieb
#define KoGDW_CHDodOffGridStatus                  (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHDodOffGridStatus)))
// SoC-Schutz
#define KoGDW_CHSocProtection                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHSocProtection)))
// Status SoC-Schutz
#define KoGDW_CHSocProtectionStatus               (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHSocProtectionStatus)))
// SoC-Obergrenze
#define KoGDW_CHSocUpperLimit                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHSocUpperLimit)))
// Status SoC-Obergrenze
#define KoGDW_CHSocUpperLimitStatus               (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHSocUpperLimitStatus)))
// Eco-Leistung
#define KoGDW_CHEcoModePower                      (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHEcoModePower)))
// Status Eco-Leistung
#define KoGDW_CHEcoModePowerStatus                (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHEcoModePowerStatus)))
// Eco-Ziel-SoC
#define KoGDW_CHEcoModeSoc                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHEcoModeSoc)))
// Status Eco-Ziel-SoC
#define KoGDW_CHEcoModeSocStatus                  (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHEcoModeSocStatus)))
// Schnellladen
#define KoGDW_CHFastCharging                      (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHFastCharging)))
// Status Schnellladen
#define KoGDW_CHFastChargingStatus                (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHFastChargingStatus)))
// Schnellladen Ziel-SoC
#define KoGDW_CHFastChargingSoc                   (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHFastChargingSoc)))
// Status Schnellladen Ziel-SoC
#define KoGDW_CHFastChargingSocStatus             (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHFastChargingSocStatus)))
// Schnellladen Leistung
#define KoGDW_CHFastChargingPower                 (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHFastChargingPower)))
// Status Schnellladen Leistung
#define KoGDW_CHFastChargingPowerStatus           (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHFastChargingPowerStatus)))
// Backup-Versorgung
#define KoGDW_CHBackupSupply                      (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBackupSupply)))
// Status Backup-Versorgung
#define KoGDW_CHBackupSupplyStatus                (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHBackupSupplyStatus)))
// Entladetiefe halten
#define KoGDW_CHDodHolding                        (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHDodHolding)))
// Status Entladetiefe halten
#define KoGDW_CHDodHoldingStatus                  (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHDodHoldingStatus)))
// Lastregelung
#define KoGDW_CHLoadControl                       (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHLoadControl)))
// Status Lastregelung
#define KoGDW_CHLoadControlStatus                 (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHLoadControlStatus)))
// Uhr synchronisieren
#define KoGDW_CHSyncClock                         (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHSyncClock)))
// Wechselrichter starten
#define KoGDW_CHStartInverter                     (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHStartInverter)))
// Wechselrichter stoppen
#define KoGDW_CHStopInverter                      (knx.getGroupObject(GDW_KoCalcNumber(GDW_KoCHStopInverter)))

#define LOG_VisibleChannels                     6955      // uint8_t
#define LOG_VacationKo                          6956      // 1 Bit, Bit 7
#define     LOG_VacationKoMask 0x80
#define     LOG_VacationKoShift 7
#define LOG_HolidayKo                           6956      // 1 Bit, Bit 6
#define     LOG_HolidayKoMask 0x40
#define     LOG_HolidayKoShift 6
#define LOG_VacationRead                        6956      // 1 Bit, Bit 5
#define     LOG_VacationReadMask 0x20
#define     LOG_VacationReadShift 5
#define LOG_HolidaySend                         6956      // 1 Bit, Bit 4
#define     LOG_HolidaySendMask 0x10
#define     LOG_HolidaySendShift 4
#define LOG_Neujahr                             6957      // 1 Bit, Bit 7
#define     LOG_NeujahrMask 0x80
#define     LOG_NeujahrShift 7
#define LOG_DreiKoenige                         6957      // 1 Bit, Bit 6
#define     LOG_DreiKoenigeMask 0x40
#define     LOG_DreiKoenigeShift 6
#define LOG_Weiberfastnacht                     6957      // 1 Bit, Bit 5
#define     LOG_WeiberfastnachtMask 0x20
#define     LOG_WeiberfastnachtShift 5
#define LOG_Rosenmontag                         6957      // 1 Bit, Bit 4
#define     LOG_RosenmontagMask 0x10
#define     LOG_RosenmontagShift 4
#define LOG_Fastnachtsdienstag                  6957      // 1 Bit, Bit 3
#define     LOG_FastnachtsdienstagMask 0x08
#define     LOG_FastnachtsdienstagShift 3
#define LOG_Aschermittwoch                      6957      // 1 Bit, Bit 2
#define     LOG_AschermittwochMask 0x04
#define     LOG_AschermittwochShift 2
#define LOG_Frauentag                           6957      // 1 Bit, Bit 1
#define     LOG_FrauentagMask 0x02
#define     LOG_FrauentagShift 1
#define LOG_Gruendonnerstag                     6957      // 1 Bit, Bit 0
#define     LOG_GruendonnerstagMask 0x01
#define     LOG_GruendonnerstagShift 0
#define LOG_Karfreitag                          6958      // 1 Bit, Bit 7
#define     LOG_KarfreitagMask 0x80
#define     LOG_KarfreitagShift 7
#define LOG_Ostersonntag                        6958      // 1 Bit, Bit 6
#define     LOG_OstersonntagMask 0x40
#define     LOG_OstersonntagShift 6
#define LOG_Ostermontag                         6958      // 1 Bit, Bit 5
#define     LOG_OstermontagMask 0x20
#define     LOG_OstermontagShift 5
#define LOG_TagDerArbeit                        6958      // 1 Bit, Bit 4
#define     LOG_TagDerArbeitMask 0x10
#define     LOG_TagDerArbeitShift 4
#define LOG_Himmelfahrt                         6958      // 1 Bit, Bit 3
#define     LOG_HimmelfahrtMask 0x08
#define     LOG_HimmelfahrtShift 3
#define LOG_Pfingstsonntag                      6958      // 1 Bit, Bit 2
#define     LOG_PfingstsonntagMask 0x04
#define     LOG_PfingstsonntagShift 2
#define LOG_Pfingstmontag                       6958      // 1 Bit, Bit 1
#define     LOG_PfingstmontagMask 0x02
#define     LOG_PfingstmontagShift 1
#define LOG_Fronleichnam                        6958      // 1 Bit, Bit 0
#define     LOG_FronleichnamMask 0x01
#define     LOG_FronleichnamShift 0
#define LOG_Friedensfest                        6959      // 1 Bit, Bit 7
#define     LOG_FriedensfestMask 0x80
#define     LOG_FriedensfestShift 7
#define LOG_MariaHimmelfahrt                    6959      // 1 Bit, Bit 6
#define     LOG_MariaHimmelfahrtMask 0x40
#define     LOG_MariaHimmelfahrtShift 6
#define LOG_DeutscheEinheit                     6959      // 1 Bit, Bit 5
#define     LOG_DeutscheEinheitMask 0x20
#define     LOG_DeutscheEinheitShift 5
#define LOG_Reformationstag                     6959      // 1 Bit, Bit 4
#define     LOG_ReformationstagMask 0x10
#define     LOG_ReformationstagShift 4
#define LOG_Allerheiligen                       6959      // 1 Bit, Bit 3
#define     LOG_AllerheiligenMask 0x08
#define     LOG_AllerheiligenShift 3
#define LOG_BussBettag                          6959      // 1 Bit, Bit 2
#define     LOG_BussBettagMask 0x04
#define     LOG_BussBettagShift 2
#define LOG_Advent1                             6959      // 1 Bit, Bit 1
#define     LOG_Advent1Mask 0x02
#define     LOG_Advent1Shift 1
#define LOG_Advent2                             6959      // 1 Bit, Bit 0
#define     LOG_Advent2Mask 0x01
#define     LOG_Advent2Shift 0
#define LOG_Advent3                             6960      // 1 Bit, Bit 7
#define     LOG_Advent3Mask 0x80
#define     LOG_Advent3Shift 7
#define LOG_Advent4                             6960      // 1 Bit, Bit 6
#define     LOG_Advent4Mask 0x40
#define     LOG_Advent4Shift 6
#define LOG_Heiligabend                         6960      // 1 Bit, Bit 5
#define     LOG_HeiligabendMask 0x20
#define     LOG_HeiligabendShift 5
#define LOG_Weihnachtstag1                      6960      // 1 Bit, Bit 4
#define     LOG_Weihnachtstag1Mask 0x10
#define     LOG_Weihnachtstag1Shift 4
#define LOG_Weihnachtstag2                      6960      // 1 Bit, Bit 3
#define     LOG_Weihnachtstag2Mask 0x08
#define     LOG_Weihnachtstag2Shift 3
#define LOG_Silvester                           6960      // 1 Bit, Bit 2
#define     LOG_SilvesterMask 0x04
#define     LOG_SilvesterShift 2
#define LOG_Nationalfeiertag                    6960      // 1 Bit, Bit 1
#define     LOG_NationalfeiertagMask 0x02
#define     LOG_NationalfeiertagShift 1
#define LOG_MariaEmpfaengnis                    6960      // 1 Bit, Bit 0
#define     LOG_MariaEmpfaengnisMask 0x01
#define     LOG_MariaEmpfaengnisShift 0
#define LOG_NationalfeiertagSchweiz             6961      // 1 Bit, Bit 7
#define     LOG_NationalfeiertagSchweizMask 0x80
#define     LOG_NationalfeiertagSchweizShift 7
#define LOG_Totensonntag                        6961      // 1 Bit, Bit 6
#define     LOG_TotensonntagMask 0x40
#define     LOG_TotensonntagShift 6
#define LOG_Weltkindertag                       6961      // 1 Bit, Bit 5
#define     LOG_WeltkindertagMask 0x20
#define     LOG_WeltkindertagShift 5
#define LOG_UserFormula1                        6962      // char*, 99 Byte
#define     LOG_UserFormula1Length 99
#define LOG_UserFormula1Active                  7061      // 1 Bit, Bit 7
#define     LOG_UserFormula1ActiveMask 0x80
#define     LOG_UserFormula1ActiveShift 7
#define LOG_UserFormula2                        7062      // char*, 99 Byte
#define     LOG_UserFormula2Length 99
#define LOG_UserFormula2Active                  7161      // 1 Bit, Bit 7
#define     LOG_UserFormula2ActiveMask 0x80
#define     LOG_UserFormula2ActiveShift 7
#define LOG_UserFormula3                        7162      // char*, 99 Byte
#define     LOG_UserFormula3Length 99
#define LOG_UserFormula3Active                  7261      // 1 Bit, Bit 7
#define     LOG_UserFormula3ActiveMask 0x80
#define     LOG_UserFormula3ActiveShift 7
#define LOG_UserFormula4                        7262      // char*, 99 Byte
#define     LOG_UserFormula4Length 99
#define LOG_UserFormula4Active                  7361      // 1 Bit, Bit 7
#define     LOG_UserFormula4ActiveMask 0x80
#define     LOG_UserFormula4ActiveShift 7
#define LOG_UserFormula5                        7362      // char*, 99 Byte
#define     LOG_UserFormula5Length 99
#define LOG_UserFormula5Active                  7461      // 1 Bit, Bit 7
#define     LOG_UserFormula5ActiveMask 0x80
#define     LOG_UserFormula5ActiveShift 7
#define LOG_UserFormula6                        7462      // char*, 99 Byte
#define     LOG_UserFormula6Length 99
#define LOG_UserFormula6Active                  7561      // 1 Bit, Bit 7
#define     LOG_UserFormula6ActiveMask 0x80
#define     LOG_UserFormula6ActiveShift 7
#define LOG_UserFormula7                        7562      // char*, 99 Byte
#define     LOG_UserFormula7Length 99
#define LOG_UserFormula7Active                  7661      // 1 Bit, Bit 7
#define     LOG_UserFormula7ActiveMask 0x80
#define     LOG_UserFormula7ActiveShift 7
#define LOG_UserFormula8                        7662      // char*, 99 Byte
#define     LOG_UserFormula8Length 99
#define LOG_UserFormula8Active                  7761      // 1 Bit, Bit 7
#define     LOG_UserFormula8ActiveMask 0x80
#define     LOG_UserFormula8ActiveShift 7
#define LOG_UserFormula9                        7762      // char*, 99 Byte
#define     LOG_UserFormula9Length 99
#define LOG_UserFormula9Active                  7861      // 1 Bit, Bit 7
#define     LOG_UserFormula9ActiveMask 0x80
#define     LOG_UserFormula9ActiveShift 7
#define LOG_UserFormula10                       7862      // char*, 99 Byte
#define     LOG_UserFormula10Length 99
#define LOG_UserFormula10Active                 7961      // 1 Bit, Bit 7
#define     LOG_UserFormula10ActiveMask 0x80
#define     LOG_UserFormula10ActiveShift 7
#define LOG_UserFormula11                       7962      // char*, 99 Byte
#define     LOG_UserFormula11Length 99
#define LOG_UserFormula11Active                 8061      // 1 Bit, Bit 7
#define     LOG_UserFormula11ActiveMask 0x80
#define     LOG_UserFormula11ActiveShift 7
#define LOG_UserFormula12                       8062      // char*, 99 Byte
#define     LOG_UserFormula12Length 99
#define LOG_UserFormula12Active                 8161      // 1 Bit, Bit 7
#define     LOG_UserFormula12ActiveMask 0x80
#define     LOG_UserFormula12ActiveShift 7
#define LOG_UserFormula13                       8162      // char*, 99 Byte
#define     LOG_UserFormula13Length 99
#define LOG_UserFormula13Active                 8261      // 1 Bit, Bit 7
#define     LOG_UserFormula13ActiveMask 0x80
#define     LOG_UserFormula13ActiveShift 7
#define LOG_UserFormula14                       8262      // char*, 99 Byte
#define     LOG_UserFormula14Length 99
#define LOG_UserFormula14Active                 8361      // 1 Bit, Bit 7
#define     LOG_UserFormula14ActiveMask 0x80
#define     LOG_UserFormula14ActiveShift 7
#define LOG_UserFormula15                       8362      // char*, 99 Byte
#define     LOG_UserFormula15Length 99
#define LOG_UserFormula15Active                 8461      // 1 Bit, Bit 7
#define     LOG_UserFormula15ActiveMask 0x80
#define     LOG_UserFormula15ActiveShift 7
#define LOG_UserFormula16                       8462      // char*, 99 Byte
#define     LOG_UserFormula16Length 99
#define LOG_UserFormula16Active                 8561      // 1 Bit, Bit 7
#define     LOG_UserFormula16ActiveMask 0x80
#define     LOG_UserFormula16ActiveShift 7
#define LOG_UserFormula17                       8562      // char*, 99 Byte
#define     LOG_UserFormula17Length 99
#define LOG_UserFormula17Active                 8661      // 1 Bit, Bit 7
#define     LOG_UserFormula17ActiveMask 0x80
#define     LOG_UserFormula17ActiveShift 7
#define LOG_UserFormula18                       8662      // char*, 99 Byte
#define     LOG_UserFormula18Length 99
#define LOG_UserFormula18Active                 8761      // 1 Bit, Bit 7
#define     LOG_UserFormula18ActiveMask 0x80
#define     LOG_UserFormula18ActiveShift 7
#define LOG_UserFormula19                       8762      // char*, 99 Byte
#define     LOG_UserFormula19Length 99
#define LOG_UserFormula19Active                 8861      // 1 Bit, Bit 7
#define     LOG_UserFormula19ActiveMask 0x80
#define     LOG_UserFormula19ActiveShift 7
#define LOG_UserFormula20                       8862      // char*, 99 Byte
#define     LOG_UserFormula20Length 99
#define LOG_UserFormula20Active                 8961      // 1 Bit, Bit 7
#define     LOG_UserFormula20ActiveMask 0x80
#define     LOG_UserFormula20ActiveShift 7
#define LOG_UserFormula21                       8962      // char*, 99 Byte
#define     LOG_UserFormula21Length 99
#define LOG_UserFormula21Active                 9061      // 1 Bit, Bit 7
#define     LOG_UserFormula21ActiveMask 0x80
#define     LOG_UserFormula21ActiveShift 7
#define LOG_UserFormula22                       9062      // char*, 99 Byte
#define     LOG_UserFormula22Length 99
#define LOG_UserFormula22Active                 9161      // 1 Bit, Bit 7
#define     LOG_UserFormula22ActiveMask 0x80
#define     LOG_UserFormula22ActiveShift 7
#define LOG_UserFormula23                       9162      // char*, 99 Byte
#define     LOG_UserFormula23Length 99
#define LOG_UserFormula23Active                 9261      // 1 Bit, Bit 7
#define     LOG_UserFormula23ActiveMask 0x80
#define     LOG_UserFormula23ActiveShift 7
#define LOG_UserFormula24                       9262      // char*, 99 Byte
#define     LOG_UserFormula24Length 99
#define LOG_UserFormula24Active                 9361      // 1 Bit, Bit 7
#define     LOG_UserFormula24ActiveMask 0x80
#define     LOG_UserFormula24ActiveShift 7
#define LOG_UserFormula25                       9362      // char*, 99 Byte
#define     LOG_UserFormula25Length 99
#define LOG_UserFormula25Active                 9461      // 1 Bit, Bit 7
#define     LOG_UserFormula25ActiveMask 0x80
#define     LOG_UserFormula25ActiveShift 7
#define LOG_UserFormula26                       9462      // char*, 99 Byte
#define     LOG_UserFormula26Length 99
#define LOG_UserFormula26Active                 9561      // 1 Bit, Bit 7
#define     LOG_UserFormula26ActiveMask 0x80
#define     LOG_UserFormula26ActiveShift 7
#define LOG_UserFormula27                       9562      // char*, 99 Byte
#define     LOG_UserFormula27Length 99
#define LOG_UserFormula27Active                 9661      // 1 Bit, Bit 7
#define     LOG_UserFormula27ActiveMask 0x80
#define     LOG_UserFormula27ActiveShift 7
#define LOG_UserFormula28                       9662      // char*, 99 Byte
#define     LOG_UserFormula28Length 99
#define LOG_UserFormula28Active                 9761      // 1 Bit, Bit 7
#define     LOG_UserFormula28ActiveMask 0x80
#define     LOG_UserFormula28ActiveShift 7
#define LOG_UserFormula29                       9762      // char*, 99 Byte
#define     LOG_UserFormula29Length 99
#define LOG_UserFormula29Active                 9861      // 1 Bit, Bit 7
#define     LOG_UserFormula29ActiveMask 0x80
#define     LOG_UserFormula29ActiveShift 7
#define LOG_UserFormula30                       9862      // char*, 99 Byte
#define     LOG_UserFormula30Length 99
#define LOG_UserFormula30Active                 9961      // 1 Bit, Bit 7
#define     LOG_UserFormula30ActiveMask 0x80
#define     LOG_UserFormula30ActiveShift 7

// Verfügbare Kanäle
#define ParamLOG_VisibleChannels                     (knx.paramByte(LOG_VisibleChannels))
// Urlaubsbehandlung aktivieren?
#define ParamLOG_VacationKo                          ((bool)(knx.paramByte(LOG_VacationKo) & LOG_VacationKoMask))
// Feiertage auf dem Bus verfügbar machen?
#define ParamLOG_HolidayKo                           ((bool)(knx.paramByte(LOG_HolidayKo) & LOG_HolidayKoMask))
// Nach Neustart Urlaubsinfo lesen?
#define ParamLOG_VacationRead                        ((bool)(knx.paramByte(LOG_VacationRead) & LOG_VacationReadMask))
// Nach Neuberechnung Feiertagsinfo senden?
#define ParamLOG_HolidaySend                         ((bool)(knx.paramByte(LOG_HolidaySend) & LOG_HolidaySendMask))
// 1. Neujahr
#define ParamLOG_Neujahr                             ((bool)(knx.paramByte(LOG_Neujahr) & LOG_NeujahrMask))
// 2. Heilige Drei Könige
#define ParamLOG_DreiKoenige                         ((bool)(knx.paramByte(LOG_DreiKoenige) & LOG_DreiKoenigeMask))
// 3. Weiberfastnacht
#define ParamLOG_Weiberfastnacht                     ((bool)(knx.paramByte(LOG_Weiberfastnacht) & LOG_WeiberfastnachtMask))
// 4. Rosenmontag
#define ParamLOG_Rosenmontag                         ((bool)(knx.paramByte(LOG_Rosenmontag) & LOG_RosenmontagMask))
// 5. Fastnachtsdienstag
#define ParamLOG_Fastnachtsdienstag                  ((bool)(knx.paramByte(LOG_Fastnachtsdienstag) & LOG_FastnachtsdienstagMask))
// 6. Aschermittwoch
#define ParamLOG_Aschermittwoch                      ((bool)(knx.paramByte(LOG_Aschermittwoch) & LOG_AschermittwochMask))
// 7. Frauentag
#define ParamLOG_Frauentag                           ((bool)(knx.paramByte(LOG_Frauentag) & LOG_FrauentagMask))
// 8. Gründonnerstag
#define ParamLOG_Gruendonnerstag                     ((bool)(knx.paramByte(LOG_Gruendonnerstag) & LOG_GruendonnerstagMask))
// 9. Karfreitag
#define ParamLOG_Karfreitag                          ((bool)(knx.paramByte(LOG_Karfreitag) & LOG_KarfreitagMask))
// 10. Ostersonntag
#define ParamLOG_Ostersonntag                        ((bool)(knx.paramByte(LOG_Ostersonntag) & LOG_OstersonntagMask))
// 11. Ostermontag
#define ParamLOG_Ostermontag                         ((bool)(knx.paramByte(LOG_Ostermontag) & LOG_OstermontagMask))
// 12. Tag der Arbeit
#define ParamLOG_TagDerArbeit                        ((bool)(knx.paramByte(LOG_TagDerArbeit) & LOG_TagDerArbeitMask))
// 13. Christi Himmelfahrt
#define ParamLOG_Himmelfahrt                         ((bool)(knx.paramByte(LOG_Himmelfahrt) & LOG_HimmelfahrtMask))
// 14. Pfingstsonntag
#define ParamLOG_Pfingstsonntag                      ((bool)(knx.paramByte(LOG_Pfingstsonntag) & LOG_PfingstsonntagMask))
// 15. Pfingstmontag
#define ParamLOG_Pfingstmontag                       ((bool)(knx.paramByte(LOG_Pfingstmontag) & LOG_PfingstmontagMask))
// 16. Fronleichnam
#define ParamLOG_Fronleichnam                        ((bool)(knx.paramByte(LOG_Fronleichnam) & LOG_FronleichnamMask))
// 17. Hohes Friedensfest
#define ParamLOG_Friedensfest                        ((bool)(knx.paramByte(LOG_Friedensfest) & LOG_FriedensfestMask))
// 18. Mariä Himmelfahrt
#define ParamLOG_MariaHimmelfahrt                    ((bool)(knx.paramByte(LOG_MariaHimmelfahrt) & LOG_MariaHimmelfahrtMask))
// 19. Tag der Deutschen Einheit
#define ParamLOG_DeutscheEinheit                     ((bool)(knx.paramByte(LOG_DeutscheEinheit) & LOG_DeutscheEinheitMask))
// 20. Reformationstag
#define ParamLOG_Reformationstag                     ((bool)(knx.paramByte(LOG_Reformationstag) & LOG_ReformationstagMask))
// 21. Allerheiligen
#define ParamLOG_Allerheiligen                       ((bool)(knx.paramByte(LOG_Allerheiligen) & LOG_AllerheiligenMask))
// 22. Buß- und Bettag
#define ParamLOG_BussBettag                          ((bool)(knx.paramByte(LOG_BussBettag) & LOG_BussBettagMask))
// 23. Erster Advent
#define ParamLOG_Advent1                             ((bool)(knx.paramByte(LOG_Advent1) & LOG_Advent1Mask))
// 24. Zweiter Advent
#define ParamLOG_Advent2                             ((bool)(knx.paramByte(LOG_Advent2) & LOG_Advent2Mask))
// 25. Dritter Advent
#define ParamLOG_Advent3                             ((bool)(knx.paramByte(LOG_Advent3) & LOG_Advent3Mask))
// 26. Vierter Advent
#define ParamLOG_Advent4                             ((bool)(knx.paramByte(LOG_Advent4) & LOG_Advent4Mask))
// 27. Heiligabend
#define ParamLOG_Heiligabend                         ((bool)(knx.paramByte(LOG_Heiligabend) & LOG_HeiligabendMask))
// 28. Erster Weihnachtstag
#define ParamLOG_Weihnachtstag1                      ((bool)(knx.paramByte(LOG_Weihnachtstag1) & LOG_Weihnachtstag1Mask))
// 29. Zweiter Weihnachtstag
#define ParamLOG_Weihnachtstag2                      ((bool)(knx.paramByte(LOG_Weihnachtstag2) & LOG_Weihnachtstag2Mask))
// 30. Silvester
#define ParamLOG_Silvester                           ((bool)(knx.paramByte(LOG_Silvester) & LOG_SilvesterMask))
// 31. Nationalfeiertag (AT)
#define ParamLOG_Nationalfeiertag                    ((bool)(knx.paramByte(LOG_Nationalfeiertag) & LOG_NationalfeiertagMask))
// 32. Maria Empfängnis (AT)
#define ParamLOG_MariaEmpfaengnis                    ((bool)(knx.paramByte(LOG_MariaEmpfaengnis) & LOG_MariaEmpfaengnisMask))
// 33. Nationalfeiertag (CH)
#define ParamLOG_NationalfeiertagSchweiz             ((bool)(knx.paramByte(LOG_NationalfeiertagSchweiz) & LOG_NationalfeiertagSchweizMask))
// 34. Totensonntag
#define ParamLOG_Totensonntag                        ((bool)(knx.paramByte(LOG_Totensonntag) & LOG_TotensonntagMask))
// 35. Weltkindertag
#define ParamLOG_Weltkindertag                       ((bool)(knx.paramByte(LOG_Weltkindertag) & LOG_WeltkindertagMask))
// Formeldefinition
#define ParamLOG_UserFormula1                        (knx.paramData(LOG_UserFormula1))
#define ParamLOG_UserFormula1Str                     (knx.paramString(LOG_UserFormula1, LOG_UserFormula1Length))
// Benutzerformel 1 aktiv
#define ParamLOG_UserFormula1Active                  ((bool)(knx.paramByte(LOG_UserFormula1Active) & LOG_UserFormula1ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula2                        (knx.paramData(LOG_UserFormula2))
#define ParamLOG_UserFormula2Str                     (knx.paramString(LOG_UserFormula2, LOG_UserFormula2Length))
// Benutzerformel 2 aktiv
#define ParamLOG_UserFormula2Active                  ((bool)(knx.paramByte(LOG_UserFormula2Active) & LOG_UserFormula2ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula3                        (knx.paramData(LOG_UserFormula3))
#define ParamLOG_UserFormula3Str                     (knx.paramString(LOG_UserFormula3, LOG_UserFormula3Length))
// Benutzerformel 3 aktiv
#define ParamLOG_UserFormula3Active                  ((bool)(knx.paramByte(LOG_UserFormula3Active) & LOG_UserFormula3ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula4                        (knx.paramData(LOG_UserFormula4))
#define ParamLOG_UserFormula4Str                     (knx.paramString(LOG_UserFormula4, LOG_UserFormula4Length))
// Benutzerformel 4 aktiv
#define ParamLOG_UserFormula4Active                  ((bool)(knx.paramByte(LOG_UserFormula4Active) & LOG_UserFormula4ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula5                        (knx.paramData(LOG_UserFormula5))
#define ParamLOG_UserFormula5Str                     (knx.paramString(LOG_UserFormula5, LOG_UserFormula5Length))
// Benutzerformel 5 aktiv
#define ParamLOG_UserFormula5Active                  ((bool)(knx.paramByte(LOG_UserFormula5Active) & LOG_UserFormula5ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula6                        (knx.paramData(LOG_UserFormula6))
#define ParamLOG_UserFormula6Str                     (knx.paramString(LOG_UserFormula6, LOG_UserFormula6Length))
// Benutzerformel 6 aktiv
#define ParamLOG_UserFormula6Active                  ((bool)(knx.paramByte(LOG_UserFormula6Active) & LOG_UserFormula6ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula7                        (knx.paramData(LOG_UserFormula7))
#define ParamLOG_UserFormula7Str                     (knx.paramString(LOG_UserFormula7, LOG_UserFormula7Length))
// Benutzerformel 7 aktiv
#define ParamLOG_UserFormula7Active                  ((bool)(knx.paramByte(LOG_UserFormula7Active) & LOG_UserFormula7ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula8                        (knx.paramData(LOG_UserFormula8))
#define ParamLOG_UserFormula8Str                     (knx.paramString(LOG_UserFormula8, LOG_UserFormula8Length))
// Benutzerformel 8 aktiv
#define ParamLOG_UserFormula8Active                  ((bool)(knx.paramByte(LOG_UserFormula8Active) & LOG_UserFormula8ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula9                        (knx.paramData(LOG_UserFormula9))
#define ParamLOG_UserFormula9Str                     (knx.paramString(LOG_UserFormula9, LOG_UserFormula9Length))
// Benutzerformel 9 aktiv
#define ParamLOG_UserFormula9Active                  ((bool)(knx.paramByte(LOG_UserFormula9Active) & LOG_UserFormula9ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula10                       (knx.paramData(LOG_UserFormula10))
#define ParamLOG_UserFormula10Str                    (knx.paramString(LOG_UserFormula10, LOG_UserFormula10Length))
// Benutzerformel 10 aktiv
#define ParamLOG_UserFormula10Active                 ((bool)(knx.paramByte(LOG_UserFormula10Active) & LOG_UserFormula10ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula11                       (knx.paramData(LOG_UserFormula11))
#define ParamLOG_UserFormula11Str                    (knx.paramString(LOG_UserFormula11, LOG_UserFormula11Length))
// Benutzerformel 11 aktiv
#define ParamLOG_UserFormula11Active                 ((bool)(knx.paramByte(LOG_UserFormula11Active) & LOG_UserFormula11ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula12                       (knx.paramData(LOG_UserFormula12))
#define ParamLOG_UserFormula12Str                    (knx.paramString(LOG_UserFormula12, LOG_UserFormula12Length))
// Benutzerformel 12 aktiv
#define ParamLOG_UserFormula12Active                 ((bool)(knx.paramByte(LOG_UserFormula12Active) & LOG_UserFormula12ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula13                       (knx.paramData(LOG_UserFormula13))
#define ParamLOG_UserFormula13Str                    (knx.paramString(LOG_UserFormula13, LOG_UserFormula13Length))
// Benutzerformel 13 aktiv
#define ParamLOG_UserFormula13Active                 ((bool)(knx.paramByte(LOG_UserFormula13Active) & LOG_UserFormula13ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula14                       (knx.paramData(LOG_UserFormula14))
#define ParamLOG_UserFormula14Str                    (knx.paramString(LOG_UserFormula14, LOG_UserFormula14Length))
// Benutzerformel 14 aktiv
#define ParamLOG_UserFormula14Active                 ((bool)(knx.paramByte(LOG_UserFormula14Active) & LOG_UserFormula14ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula15                       (knx.paramData(LOG_UserFormula15))
#define ParamLOG_UserFormula15Str                    (knx.paramString(LOG_UserFormula15, LOG_UserFormula15Length))
// Benutzerformel 15 aktiv
#define ParamLOG_UserFormula15Active                 ((bool)(knx.paramByte(LOG_UserFormula15Active) & LOG_UserFormula15ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula16                       (knx.paramData(LOG_UserFormula16))
#define ParamLOG_UserFormula16Str                    (knx.paramString(LOG_UserFormula16, LOG_UserFormula16Length))
// Benutzerformel 16 aktiv
#define ParamLOG_UserFormula16Active                 ((bool)(knx.paramByte(LOG_UserFormula16Active) & LOG_UserFormula16ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula17                       (knx.paramData(LOG_UserFormula17))
#define ParamLOG_UserFormula17Str                    (knx.paramString(LOG_UserFormula17, LOG_UserFormula17Length))
// Benutzerformel 17 aktiv
#define ParamLOG_UserFormula17Active                 ((bool)(knx.paramByte(LOG_UserFormula17Active) & LOG_UserFormula17ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula18                       (knx.paramData(LOG_UserFormula18))
#define ParamLOG_UserFormula18Str                    (knx.paramString(LOG_UserFormula18, LOG_UserFormula18Length))
// Benutzerformel 18 aktiv
#define ParamLOG_UserFormula18Active                 ((bool)(knx.paramByte(LOG_UserFormula18Active) & LOG_UserFormula18ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula19                       (knx.paramData(LOG_UserFormula19))
#define ParamLOG_UserFormula19Str                    (knx.paramString(LOG_UserFormula19, LOG_UserFormula19Length))
// Benutzerformel 19 aktiv
#define ParamLOG_UserFormula19Active                 ((bool)(knx.paramByte(LOG_UserFormula19Active) & LOG_UserFormula19ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula20                       (knx.paramData(LOG_UserFormula20))
#define ParamLOG_UserFormula20Str                    (knx.paramString(LOG_UserFormula20, LOG_UserFormula20Length))
// Benutzerformel 20 aktiv
#define ParamLOG_UserFormula20Active                 ((bool)(knx.paramByte(LOG_UserFormula20Active) & LOG_UserFormula20ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula21                       (knx.paramData(LOG_UserFormula21))
#define ParamLOG_UserFormula21Str                    (knx.paramString(LOG_UserFormula21, LOG_UserFormula21Length))
// Benutzerformel 21 aktiv
#define ParamLOG_UserFormula21Active                 ((bool)(knx.paramByte(LOG_UserFormula21Active) & LOG_UserFormula21ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula22                       (knx.paramData(LOG_UserFormula22))
#define ParamLOG_UserFormula22Str                    (knx.paramString(LOG_UserFormula22, LOG_UserFormula22Length))
// Benutzerformel 22 aktiv
#define ParamLOG_UserFormula22Active                 ((bool)(knx.paramByte(LOG_UserFormula22Active) & LOG_UserFormula22ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula23                       (knx.paramData(LOG_UserFormula23))
#define ParamLOG_UserFormula23Str                    (knx.paramString(LOG_UserFormula23, LOG_UserFormula23Length))
// Benutzerformel 23 aktiv
#define ParamLOG_UserFormula23Active                 ((bool)(knx.paramByte(LOG_UserFormula23Active) & LOG_UserFormula23ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula24                       (knx.paramData(LOG_UserFormula24))
#define ParamLOG_UserFormula24Str                    (knx.paramString(LOG_UserFormula24, LOG_UserFormula24Length))
// Benutzerformel 24 aktiv
#define ParamLOG_UserFormula24Active                 ((bool)(knx.paramByte(LOG_UserFormula24Active) & LOG_UserFormula24ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula25                       (knx.paramData(LOG_UserFormula25))
#define ParamLOG_UserFormula25Str                    (knx.paramString(LOG_UserFormula25, LOG_UserFormula25Length))
// Benutzerformel 25 aktiv
#define ParamLOG_UserFormula25Active                 ((bool)(knx.paramByte(LOG_UserFormula25Active) & LOG_UserFormula25ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula26                       (knx.paramData(LOG_UserFormula26))
#define ParamLOG_UserFormula26Str                    (knx.paramString(LOG_UserFormula26, LOG_UserFormula26Length))
// Benutzerformel 26 aktiv
#define ParamLOG_UserFormula26Active                 ((bool)(knx.paramByte(LOG_UserFormula26Active) & LOG_UserFormula26ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula27                       (knx.paramData(LOG_UserFormula27))
#define ParamLOG_UserFormula27Str                    (knx.paramString(LOG_UserFormula27, LOG_UserFormula27Length))
// Benutzerformel 27 aktiv
#define ParamLOG_UserFormula27Active                 ((bool)(knx.paramByte(LOG_UserFormula27Active) & LOG_UserFormula27ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula28                       (knx.paramData(LOG_UserFormula28))
#define ParamLOG_UserFormula28Str                    (knx.paramString(LOG_UserFormula28, LOG_UserFormula28Length))
// Benutzerformel 28 aktiv
#define ParamLOG_UserFormula28Active                 ((bool)(knx.paramByte(LOG_UserFormula28Active) & LOG_UserFormula28ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula29                       (knx.paramData(LOG_UserFormula29))
#define ParamLOG_UserFormula29Str                    (knx.paramString(LOG_UserFormula29, LOG_UserFormula29Length))
// Benutzerformel 29 aktiv
#define ParamLOG_UserFormula29Active                 ((bool)(knx.paramByte(LOG_UserFormula29Active) & LOG_UserFormula29ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula30                       (knx.paramData(LOG_UserFormula30))
#define ParamLOG_UserFormula30Str                    (knx.paramString(LOG_UserFormula30, LOG_UserFormula30Length))
// Benutzerformel 30 aktiv
#define ParamLOG_UserFormula30Active                 ((bool)(knx.paramByte(LOG_UserFormula30Active) & LOG_UserFormula30ActiveMask))

#define LOG_KoVacation 15
#define LOG_KoHoliday1 16
#define LOG_KoHoliday2 17

// Urlaub
#define KoLOG_Vacation                            (knx.getGroupObject(LOG_KoVacation))
// Welcher Feiertag ist heute?
#define KoLOG_Holiday1                            (knx.getGroupObject(LOG_KoHoliday1))
// Welcher Feiertag ist morgen?
#define KoLOG_Holiday2                            (knx.getGroupObject(LOG_KoHoliday2))

#define LOG_ChannelCount 50

// Parameter per channel
#define LOG_ParamBlockOffset 9962
#define LOG_ParamBlockSize 89
#define LOG_ParamCalcIndex(index) (index + LOG_ParamBlockOffset + _channelIndex * LOG_ParamBlockSize)

#define LOG_fChannelDelayBase                    0      // 2 Bits, Bit 7-6
#define     LOG_fChannelDelayBaseMask 0xC0
#define     LOG_fChannelDelayBaseShift 6
#define LOG_fChannelDelayTime                    0      // 14 Bits, Bit 13-0
#define     LOG_fChannelDelayTimeMask 0x3FFF
#define     LOG_fChannelDelayTimeShift 0
#define LOG_fLogic                               2      // 8 Bits, Bit 7-0
#define LOG_fCalculate                           3      // 2 Bits, Bit 1-0
#define     LOG_fCalculateMask 0x03
#define     LOG_fCalculateShift 0
#define LOG_fDisable                             3      // 1 Bit, Bit 2
#define     LOG_fDisableMask 0x04
#define     LOG_fDisableShift 2
#define LOG_fTGate                               3      // 1 Bit, Bit 4
#define     LOG_fTGateMask 0x10
#define     LOG_fTGateShift 4
#define LOG_fOInternalOn                         3      // 1 Bit, Bit 5
#define     LOG_fOInternalOnMask 0x20
#define     LOG_fOInternalOnShift 5
#define LOG_fOInternalOff                        3      // 1 Bit, Bit 6
#define     LOG_fOInternalOffMask 0x40
#define     LOG_fOInternalOffShift 6
#define LOG_fTrigger                             4      // 8 Bits, Bit 7-0
#define LOG_fTriggerE1                           4      // 1 Bit, Bit 0
#define     LOG_fTriggerE1Mask 0x01
#define     LOG_fTriggerE1Shift 0
#define LOG_fTriggerE2                           4      // 1 Bit, Bit 1
#define     LOG_fTriggerE2Mask 0x02
#define     LOG_fTriggerE2Shift 1
#define LOG_fTriggerI1                           4      // 1 Bit, Bit 2
#define     LOG_fTriggerI1Mask 0x04
#define     LOG_fTriggerI1Shift 2
#define LOG_fTriggerI2                           4      // 1 Bit, Bit 3
#define     LOG_fTriggerI2Mask 0x08
#define     LOG_fTriggerI2Shift 3
#define LOG_fTriggerTime                         4      // 8 Bits, Bit 7-0
#define LOG_fTriggerGateClose                    5      // 2 Bits, Bit 7-6
#define     LOG_fTriggerGateCloseMask 0xC0
#define     LOG_fTriggerGateCloseShift 6
#define LOG_fTriggerGateOpen                     5      // 2 Bits, Bit 5-4
#define     LOG_fTriggerGateOpenMask 0x30
#define     LOG_fTriggerGateOpenShift 4
#define LOG_fE1ConvertInt                        6      // 4 Bits, Bit 7-4
#define     LOG_fE1ConvertIntMask 0xF0
#define     LOG_fE1ConvertIntShift 4
#define LOG_fE1Convert                           6      // 4 Bits, Bit 7-4
#define     LOG_fE1ConvertMask 0xF0
#define     LOG_fE1ConvertShift 4
#define LOG_fE1ConvertFloat                      6      // 4 Bits, Bit 7-4
#define     LOG_fE1ConvertFloatMask 0xF0
#define     LOG_fE1ConvertFloatShift 4
#define LOG_fE1ConvertSpecial                    6      // 4 Bits, Bit 7-4
#define     LOG_fE1ConvertSpecialMask 0xF0
#define     LOG_fE1ConvertSpecialShift 4
#define LOG_fE1ConvertBool                       6      // 4 Bits, Bit 7-4
#define     LOG_fE1ConvertBoolMask 0xF0
#define     LOG_fE1ConvertBoolShift 4
#define LOG_fE1                                  6      // 2 Bits, Bit 1-0
#define     LOG_fE1Mask 0x03
#define     LOG_fE1Shift 0
#define LOG_fE1Dpt                               7      // 8 Bits, Bit 7-0
#define LOG_fE1RepeatBase                        8      // 2 Bits, Bit 7-6
#define     LOG_fE1RepeatBaseMask 0xC0
#define     LOG_fE1RepeatBaseShift 6
#define LOG_fE1RepeatTime                        8      // 14 Bits, Bit 13-0
#define     LOG_fE1RepeatTimeMask 0x3FFF
#define     LOG_fE1RepeatTimeShift 0
#define LOG_fE1OtherKO                          10      // uint16_t
#define LOG_fE1OtherKORel                       10      // int16_t
#define LOG_fE1Default                          12      // 2 Bits, Bit 1-0
#define     LOG_fE1DefaultMask 0x03
#define     LOG_fE1DefaultShift 0
#define LOG_fE1DefaultExt                       12      // 2 Bits, Bit 1-0
#define     LOG_fE1DefaultExtMask 0x03
#define     LOG_fE1DefaultExtShift 0
#define LOG_fE1DefaultEEPROM                    12      // 1 Bit, Bit 2
#define     LOG_fE1DefaultEEPROMMask 0x04
#define     LOG_fE1DefaultEEPROMShift 2
#define LOG_fE1DefaultRepeat                    12      // 1 Bit, Bit 3
#define     LOG_fE1DefaultRepeatMask 0x08
#define     LOG_fE1DefaultRepeatShift 3
#define LOG_fE1UseOtherKO                       12      // 2 Bits, Bit 5-4
#define     LOG_fE1UseOtherKOMask 0x30
#define     LOG_fE1UseOtherKOShift 4
#define LOG_fE1LowDelta                         13      // int32_t
#define LOG_fE1HighDelta                        17      // int32_t
#define LOG_fE1LowDeltaFloat                    13      // float (4 Byte)
#define LOG_fE1HighDeltaFloat                   17      // float (4 Byte)
#define LOG_fE1LowDeltaDouble                   13      // float (4 Byte)
#define LOG_fE1HighDeltaDouble                  17      // float (4 Byte)
#define LOG_fE1Low0Valid                        20      // 1 Bit, Bit 7
#define     LOG_fE1Low0ValidMask 0x80
#define     LOG_fE1Low0ValidShift 7
#define LOG_fE1Low1Valid                        20      // 1 Bit, Bit 6
#define     LOG_fE1Low1ValidMask 0x40
#define     LOG_fE1Low1ValidShift 6
#define LOG_fE1Low2Valid                        20      // 1 Bit, Bit 5
#define     LOG_fE1Low2ValidMask 0x20
#define     LOG_fE1Low2ValidShift 5
#define LOG_fE1Low3Valid                        20      // 1 Bit, Bit 4
#define     LOG_fE1Low3ValidMask 0x10
#define     LOG_fE1Low3ValidShift 4
#define LOG_fE1Low4Valid                        20      // 1 Bit, Bit 3
#define     LOG_fE1Low4ValidMask 0x08
#define     LOG_fE1Low4ValidShift 3
#define LOG_fE1Low5Valid                        20      // 1 Bit, Bit 2
#define     LOG_fE1Low5ValidMask 0x04
#define     LOG_fE1Low5ValidShift 2
#define LOG_fE1Low6Valid                        20      // 1 Bit, Bit 1
#define     LOG_fE1Low6ValidMask 0x02
#define     LOG_fE1Low6ValidShift 1
#define LOG_fE1Low0Dpt2                         13      // 8 Bits, Bit 7-0
#define LOG_fE1Low1Dpt2                         14      // 8 Bits, Bit 7-0
#define LOG_fE1Low2Dpt2                         15      // 8 Bits, Bit 7-0
#define LOG_fE1Low3Dpt2                         16      // 8 Bits, Bit 7-0
#define LOG_fE1LowDpt2Fix                       13      // 8 Bits, Bit 7-0
#define LOG_fE1Low0Dpt3Dir                      13      // 5 Bits, Bit 7-3
#define     LOG_fE1Low0Dpt3DirMask 0xF8
#define     LOG_fE1Low0Dpt3DirShift 3
#define LOG_fE1Low0Dpt3Dim                      13      // 3 Bits, Bit 2-0
#define     LOG_fE1Low0Dpt3DimMask 0x07
#define     LOG_fE1Low0Dpt3DimShift 0
#define LOG_fE1Low1Dpt3Dir                      14      // 5 Bits, Bit 7-3
#define     LOG_fE1Low1Dpt3DirMask 0xF8
#define     LOG_fE1Low1Dpt3DirShift 3
#define LOG_fE1Low1Dpt3Dim                      14      // 3 Bits, Bit 2-0
#define     LOG_fE1Low1Dpt3DimMask 0x07
#define     LOG_fE1Low1Dpt3DimShift 0
#define LOG_fE1Low2Dpt3Dir                      15      // 5 Bits, Bit 7-3
#define     LOG_fE1Low2Dpt3DirMask 0xF8
#define     LOG_fE1Low2Dpt3DirShift 3
#define LOG_fE1Low2Dpt3Dim                      15      // 3 Bits, Bit 2-0
#define     LOG_fE1Low2Dpt3DimMask 0x07
#define     LOG_fE1Low2Dpt3DimShift 0
#define LOG_fE1Low3Dpt3Dir                      16      // 5 Bits, Bit 7-3
#define     LOG_fE1Low3Dpt3DirMask 0xF8
#define     LOG_fE1Low3Dpt3DirShift 3
#define LOG_fE1Low3Dpt3Dim                      16      // 3 Bits, Bit 2-0
#define     LOG_fE1Low3Dpt3DimMask 0x07
#define     LOG_fE1Low3Dpt3DimShift 0
#define LOG_fE1LowDpt3FixDir                    13      // 5 Bits, Bit 7-3
#define     LOG_fE1LowDpt3FixDirMask 0xF8
#define     LOG_fE1LowDpt3FixDirShift 3
#define LOG_fE1LowDpt3FixDim                    13      // 3 Bits, Bit 2-0
#define     LOG_fE1LowDpt3FixDimMask 0x07
#define     LOG_fE1LowDpt3FixDimShift 0
#define LOG_fE1LowDpt5                          13      // uint8_t
#define LOG_fE1HighDpt5                         17      // uint8_t
#define LOG_fE1Low0Dpt5In                       13      // uint8_t
#define LOG_fE1Low1Dpt5In                       14      // uint8_t
#define LOG_fE1Low2Dpt5In                       15      // uint8_t
#define LOG_fE1Low3Dpt5In                       16      // uint8_t
#define LOG_fE1Low4Dpt5In                       17      // uint8_t
#define LOG_fE1Low5Dpt5In                       18      // uint8_t
#define LOG_fE1Low6Dpt5In                       19      // uint8_t
#define LOG_fE1LowDpt5Fix                       13      // uint8_t
#define LOG_fE1LowDpt5001                       13      // uint8_t
#define LOG_fE1HighDpt5001                      17      // uint8_t
#define LOG_fE1Low0Dpt5xIn                      13      // uint8_t
#define LOG_fE1Low1Dpt5xIn                      14      // uint8_t
#define LOG_fE1Low2Dpt5xIn                      15      // uint8_t
#define LOG_fE1Low3Dpt5xIn                      16      // uint8_t
#define LOG_fE1Low4Dpt5xIn                      17      // uint8_t
#define LOG_fE1Low5Dpt5xIn                      18      // uint8_t
#define LOG_fE1Low6Dpt5xIn                      19      // uint8_t
#define LOG_fE1LowDpt5xFix                      13      // uint8_t
#define LOG_fE1LowDpt6                          13      // int8_t
#define LOG_fE1HighDpt6                         17      // int8_t
#define LOG_fE1Low0Dpt6In                       13      // int8_t
#define LOG_fE1Low1Dpt6In                       14      // int8_t
#define LOG_fE1Low2Dpt6In                       15      // int8_t
#define LOG_fE1Low3Dpt6In                       16      // int8_t
#define LOG_fE1Low4Dpt6In                       17      // int8_t
#define LOG_fE1Low5Dpt6In                       18      // int8_t
#define LOG_fE1Low6Dpt6In                       19      // int8_t
#define LOG_fE1LowDpt6Fix                       13      // int8_t
#define LOG_fE1LowDpt7                          13      // uint16_t
#define LOG_fE1HighDpt7                         17      // uint16_t
#define LOG_fE1Low0Dpt7In                       13      // uint16_t
#define LOG_fE1Low1Dpt7In                       15      // uint16_t
#define LOG_fE1Low2Dpt7In                       17      // uint16_t
#define LOG_fE1LowDpt7Fix                       13      // uint16_t
#define LOG_fE1LowDpt8                          13      // int16_t
#define LOG_fE1HighDpt8                         17      // int16_t
#define LOG_fE1Low0Dpt8In                       13      // int16_t
#define LOG_fE1Low1Dpt8In                       15      // int16_t
#define LOG_fE1Low2Dpt8In                       17      // int16_t
#define LOG_fE1LowDpt8Fix                       13      // int16_t
#define LOG_fE1LowDpt9                          13      // float (4 Byte)
#define LOG_fE1HighDpt9                         17      // float (4 Byte)
#define LOG_fE1LowDpt9Fix                       13      // float (4 Byte)
#define LOG_fE1LowDpt12                         13      // uint32_t
#define LOG_fE1HighDpt12                        17      // uint32_t
#define LOG_fE1LowDpt12Fix                      13      // uint32_t
#define LOG_fE1LowDpt13                         13      // int32_t
#define LOG_fE1HighDpt13                        17      // int32_t
#define LOG_fE1LowDpt13Fix                      13      // int32_t
#define LOG_fE1LowDpt14                         13      // float (4 Byte)
#define LOG_fE1HighDpt14                        17      // float (4 Byte)
#define LOG_fE1LowDpt14Fix                      13      // float (4 Byte)
#define LOG_fE1Low0Dpt17                        13      // 8 Bits, Bit 7-0
#define LOG_fE1Low1Dpt17                        14      // 8 Bits, Bit 7-0
#define LOG_fE1Low2Dpt17                        15      // 8 Bits, Bit 7-0
#define LOG_fE1Low3Dpt17                        16      // 8 Bits, Bit 7-0
#define LOG_fE1Low4Dpt17                        17      // 8 Bits, Bit 7-0
#define LOG_fE1Low5Dpt17                        18      // 8 Bits, Bit 7-0
#define LOG_fE1Low6Dpt17                        19      // 8 Bits, Bit 7-0
#define LOG_fE1Low7Dpt17                        20      // 8 Bits, Bit 7-0
#define LOG_fE1LowDpt17Fix                      13      // 8 Bits, Bit 7-0
#define LOG_fE1LowDptRGB                        13      // int32_t
#define LOG_fE1HighDptRGB                       17      // int32_t
#define LOG_fE1LowDptRGBFix                     13      // int32_t
#define LOG_fE2ConvertInt                       21      // 4 Bits, Bit 7-4
#define     LOG_fE2ConvertIntMask 0xF0
#define     LOG_fE2ConvertIntShift 4
#define LOG_fE2Convert                          21      // 4 Bits, Bit 7-4
#define     LOG_fE2ConvertMask 0xF0
#define     LOG_fE2ConvertShift 4
#define LOG_fE2ConvertFloat                     21      // 4 Bits, Bit 7-4
#define     LOG_fE2ConvertFloatMask 0xF0
#define     LOG_fE2ConvertFloatShift 4
#define LOG_fE2ConvertSpecial                   21      // 4 Bits, Bit 7-4
#define     LOG_fE2ConvertSpecialMask 0xF0
#define     LOG_fE2ConvertSpecialShift 4
#define LOG_fE2ConvertBool                      21      // 4 Bits, Bit 7-4
#define     LOG_fE2ConvertBoolMask 0xF0
#define     LOG_fE2ConvertBoolShift 4
#define LOG_fE2                                 21      // 2 Bits, Bit 1-0
#define     LOG_fE2Mask 0x03
#define     LOG_fE2Shift 0
#define LOG_fE2Dpt                              22      // 8 Bits, Bit 7-0
#define LOG_fE2RepeatBase                       23      // 2 Bits, Bit 7-6
#define     LOG_fE2RepeatBaseMask 0xC0
#define     LOG_fE2RepeatBaseShift 6
#define LOG_fE2RepeatTime                       23      // 14 Bits, Bit 13-0
#define     LOG_fE2RepeatTimeMask 0x3FFF
#define     LOG_fE2RepeatTimeShift 0
#define LOG_fE2OtherKO                          25      // uint16_t
#define LOG_fE2OtherKORel                       25      // int16_t
#define LOG_fE2Default                          27      // 2 Bits, Bit 1-0
#define     LOG_fE2DefaultMask 0x03
#define     LOG_fE2DefaultShift 0
#define LOG_fE2DefaultExt                       27      // 2 Bits, Bit 1-0
#define     LOG_fE2DefaultExtMask 0x03
#define     LOG_fE2DefaultExtShift 0
#define LOG_fE2DefaultEEPROM                    27      // 1 Bit, Bit 2
#define     LOG_fE2DefaultEEPROMMask 0x04
#define     LOG_fE2DefaultEEPROMShift 2
#define LOG_fE2DefaultRepeat                    27      // 1 Bit, Bit 3
#define     LOG_fE2DefaultRepeatMask 0x08
#define     LOG_fE2DefaultRepeatShift 3
#define LOG_fE2UseOtherKO                       27      // 2 Bits, Bit 5-4
#define     LOG_fE2UseOtherKOMask 0x30
#define     LOG_fE2UseOtherKOShift 4
#define LOG_fE2LowDelta                         28      // int32_t
#define LOG_fE2HighDelta                        32      // int32_t
#define LOG_fE2LowDeltaFloat                    28      // float (4 Byte)
#define LOG_fE2HighDeltaFloat                   32      // float (4 Byte)
#define LOG_fE2LowDeltaDouble                   28      // float (4 Byte)
#define LOG_fE2HighDeltaDouble                  32      // float (4 Byte)
#define LOG_fE2Low0Valid                        35      // 1 Bit, Bit 7
#define     LOG_fE2Low0ValidMask 0x80
#define     LOG_fE2Low0ValidShift 7
#define LOG_fE2Low1Valid                        35      // 1 Bit, Bit 6
#define     LOG_fE2Low1ValidMask 0x40
#define     LOG_fE2Low1ValidShift 6
#define LOG_fE2Low2Valid                        35      // 1 Bit, Bit 5
#define     LOG_fE2Low2ValidMask 0x20
#define     LOG_fE2Low2ValidShift 5
#define LOG_fE2Low3Valid                        35      // 1 Bit, Bit 4
#define     LOG_fE2Low3ValidMask 0x10
#define     LOG_fE2Low3ValidShift 4
#define LOG_fE2Low4Valid                        35      // 1 Bit, Bit 3
#define     LOG_fE2Low4ValidMask 0x08
#define     LOG_fE2Low4ValidShift 3
#define LOG_fE2Low5Valid                        35      // 1 Bit, Bit 2
#define     LOG_fE2Low5ValidMask 0x04
#define     LOG_fE2Low5ValidShift 2
#define LOG_fE2Low6Valid                        35      // 1 Bit, Bit 1
#define     LOG_fE2Low6ValidMask 0x02
#define     LOG_fE2Low6ValidShift 1
#define LOG_fE2Low0Dpt2                         28      // 8 Bits, Bit 7-0
#define LOG_fE2Low1Dpt2                         29      // 8 Bits, Bit 7-0
#define LOG_fE2Low2Dpt2                         30      // 8 Bits, Bit 7-0
#define LOG_fE2Low3Dpt2                         31      // 8 Bits, Bit 7-0
#define LOG_fE2LowDpt2Fix                       28      // 8 Bits, Bit 7-0
#define LOG_fE2Low0Dpt3Dir                      28      // 5 Bits, Bit 7-3
#define     LOG_fE2Low0Dpt3DirMask 0xF8
#define     LOG_fE2Low0Dpt3DirShift 3
#define LOG_fE2Low0Dpt3Dim                      28      // 3 Bits, Bit 2-0
#define     LOG_fE2Low0Dpt3DimMask 0x07
#define     LOG_fE2Low0Dpt3DimShift 0
#define LOG_fE2Low1Dpt3Dir                      29      // 5 Bits, Bit 7-3
#define     LOG_fE2Low1Dpt3DirMask 0xF8
#define     LOG_fE2Low1Dpt3DirShift 3
#define LOG_fE2Low1Dpt3Dim                      29      // 3 Bits, Bit 2-0
#define     LOG_fE2Low1Dpt3DimMask 0x07
#define     LOG_fE2Low1Dpt3DimShift 0
#define LOG_fE2Low2Dpt3Dir                      30      // 5 Bits, Bit 7-3
#define     LOG_fE2Low2Dpt3DirMask 0xF8
#define     LOG_fE2Low2Dpt3DirShift 3
#define LOG_fE2Low2Dpt3Dim                      30      // 3 Bits, Bit 2-0
#define     LOG_fE2Low2Dpt3DimMask 0x07
#define     LOG_fE2Low2Dpt3DimShift 0
#define LOG_fE2Low3Dpt3Dir                      31      // 5 Bits, Bit 7-3
#define     LOG_fE2Low3Dpt3DirMask 0xF8
#define     LOG_fE2Low3Dpt3DirShift 3
#define LOG_fE2Low3Dpt3Dim                      31      // 3 Bits, Bit 2-0
#define     LOG_fE2Low3Dpt3DimMask 0x07
#define     LOG_fE2Low3Dpt3DimShift 0
#define LOG_fE2LowDpt3FixDir                    28      // 5 Bits, Bit 7-3
#define     LOG_fE2LowDpt3FixDirMask 0xF8
#define     LOG_fE2LowDpt3FixDirShift 3
#define LOG_fE2LowDpt3FixDim                    28      // 3 Bits, Bit 2-0
#define     LOG_fE2LowDpt3FixDimMask 0x07
#define     LOG_fE2LowDpt3FixDimShift 0
#define LOG_fE2LowDpt5                          28      // uint8_t
#define LOG_fE2HighDpt5                         32      // uint8_t
#define LOG_fE2Low0Dpt5In                       28      // uint8_t
#define LOG_fE2Low1Dpt5In                       29      // uint8_t
#define LOG_fE2Low2Dpt5In                       30      // uint8_t
#define LOG_fE2Low3Dpt5In                       31      // uint8_t
#define LOG_fE2Low4Dpt5In                       32      // uint8_t
#define LOG_fE2Low5Dpt5In                       33      // uint8_t
#define LOG_fE2Low6Dpt5In                       34      // uint8_t
#define LOG_fE2LowDpt5Fix                       28      // uint8_t
#define LOG_fE2LowDpt5001                       28      // uint8_t
#define LOG_fE2HighDpt5001                      32      // uint8_t
#define LOG_fE2Low0Dpt5xIn                      28      // uint8_t
#define LOG_fE2Low1Dpt5xIn                      29      // uint8_t
#define LOG_fE2Low2Dpt5xIn                      30      // uint8_t
#define LOG_fE2Low3Dpt5xIn                      31      // uint8_t
#define LOG_fE2Low4Dpt5xIn                      32      // uint8_t
#define LOG_fE2Low5Dpt5xIn                      33      // uint8_t
#define LOG_fE2Low6Dpt5xIn                      34      // uint8_t
#define LOG_fE2LowDpt5xFix                      28      // uint8_t
#define LOG_fE2LowDpt6                          28      // int8_t
#define LOG_fE2HighDpt6                         32      // int8_t
#define LOG_fE2Low0Dpt6In                       28      // int8_t
#define LOG_fE2Low1Dpt6In                       29      // int8_t
#define LOG_fE2Low2Dpt6In                       30      // int8_t
#define LOG_fE2Low3Dpt6In                       31      // int8_t
#define LOG_fE2Low4Dpt6In                       32      // int8_t
#define LOG_fE2Low5Dpt6In                       33      // int8_t
#define LOG_fE2Low6Dpt6In                       34      // int8_t
#define LOG_fE2LowDpt6Fix                       28      // int8_t
#define LOG_fE2LowDpt7                          28      // uint16_t
#define LOG_fE2HighDpt7                         32      // uint16_t
#define LOG_fE2Low0Dpt7In                       28      // uint16_t
#define LOG_fE2Low1Dpt7In                       30      // uint16_t
#define LOG_fE2Low2Dpt7In                       32      // uint16_t
#define LOG_fE2LowDpt7Fix                       28      // uint16_t
#define LOG_fE2LowDpt8                          28      // int16_t
#define LOG_fE2HighDpt8                         32      // int16_t
#define LOG_fE2Low0Dpt8In                       28      // int16_t
#define LOG_fE2Low1Dpt8In                       30      // int16_t
#define LOG_fE2Low2Dpt8In                       32      // int16_t
#define LOG_fE2LowDpt8Fix                       28      // int16_t
#define LOG_fE2LowDpt9                          28      // float (4 Byte)
#define LOG_fE2HighDpt9                         32      // float (4 Byte)
#define LOG_fE2LowDpt9Fix                       28      // float (4 Byte)
#define LOG_fE2LowDpt12                         28      // uint32_t
#define LOG_fE2HighDpt12                        32      // uint32_t
#define LOG_fE2LowDpt12Fix                      28      // uint32_t
#define LOG_fE2LowDpt13                         28      // int32_t
#define LOG_fE2HighDpt13                        32      // int32_t
#define LOG_fE2LowDpt13Fix                      28      // int32_t
#define LOG_fE2LowDpt14                         28      // float (4 Byte)
#define LOG_fE2HighDpt14                        32      // float (4 Byte)
#define LOG_fE2LowDpt14Fix                      28      // float (4 Byte)
#define LOG_fE2Low0Dpt17                        28      // 8 Bits, Bit 7-0
#define LOG_fE2Low1Dpt17                        29      // 8 Bits, Bit 7-0
#define LOG_fE2Low2Dpt17                        30      // 8 Bits, Bit 7-0
#define LOG_fE2Low3Dpt17                        31      // 8 Bits, Bit 7-0
#define LOG_fE2Low4Dpt17                        32      // 8 Bits, Bit 7-0
#define LOG_fE2Low5Dpt17                        33      // 8 Bits, Bit 7-0
#define LOG_fE2Low6Dpt17                        34      // 8 Bits, Bit 7-0
#define LOG_fE2Low7Dpt17                        35      // 8 Bits, Bit 7-0
#define LOG_fE2LowDpt17Fix                      28      // 8 Bits, Bit 7-0
#define LOG_fE2LowDptRGB                        28      // int32_t
#define LOG_fE2HighDptRGB                       32      // int32_t
#define LOG_fE2LowDptRGBFix                     28      // int32_t
#define LOG_fTd1DuskDawn                         6      // 4 Bits, Bit 7-4
#define     LOG_fTd1DuskDawnMask 0xF0
#define     LOG_fTd1DuskDawnShift 4
#define LOG_fTd2DuskDawn                         6      // 4 Bits, Bit 3-0
#define     LOG_fTd2DuskDawnMask 0x0F
#define     LOG_fTd2DuskDawnShift 0
#define LOG_fTd3DuskDawn                         7      // 4 Bits, Bit 7-4
#define     LOG_fTd3DuskDawnMask 0xF0
#define     LOG_fTd3DuskDawnShift 4
#define LOG_fTd4DuskDawn                         7      // 4 Bits, Bit 3-0
#define     LOG_fTd4DuskDawnMask 0x0F
#define     LOG_fTd4DuskDawnShift 0
#define LOG_fTd5DuskDawn                         8      // 4 Bits, Bit 7-4
#define     LOG_fTd5DuskDawnMask 0xF0
#define     LOG_fTd5DuskDawnShift 4
#define LOG_fTd6DuskDawn                         8      // 4 Bits, Bit 3-0
#define     LOG_fTd6DuskDawnMask 0x0F
#define     LOG_fTd6DuskDawnShift 0
#define LOG_fTd7DuskDawn                         9      // 4 Bits, Bit 7-4
#define     LOG_fTd7DuskDawnMask 0xF0
#define     LOG_fTd7DuskDawnShift 4
#define LOG_fTd8DuskDawn                         9      // 4 Bits, Bit 3-0
#define     LOG_fTd8DuskDawnMask 0x0F
#define     LOG_fTd8DuskDawnShift 0
#define LOG_fTYearDay                           10      // 2 Bits, Bit 7-6
#define     LOG_fTYearDayMask 0xC0
#define     LOG_fTYearDayShift 6
#define LOG_fTHoliday                           10      // 2 Bits, Bit 5-4
#define     LOG_fTHolidayMask 0x30
#define     LOG_fTHolidayShift 4
#define LOG_fTRestoreState                      10      // 2 Bits, Bit 3-2
#define     LOG_fTRestoreStateMask 0x0C
#define     LOG_fTRestoreStateShift 2
#define LOG_fTVacation                          10      // 2 Bits, Bit 1-0
#define     LOG_fTVacationMask 0x03
#define     LOG_fTVacationShift 0
#define LOG_fTd1ValueNum                        11      // uint8_t
#define LOG_fTd2ValueNum                        12      // uint8_t
#define LOG_fTd3ValueNum                        13      // uint8_t
#define LOG_fTd4ValueNum                        14      // uint8_t
#define LOG_fTd5ValueNum                        15      // uint8_t
#define LOG_fTd6ValueNum                        16      // uint8_t
#define LOG_fTd7ValueNum                        17      // uint8_t
#define LOG_fTd8ValueNum                        18      // uint8_t
#define LOG_fTd1Value                           20      // 1 Bit, Bit 7
#define     LOG_fTd1ValueMask 0x80
#define     LOG_fTd1ValueShift 7
#define LOG_fTd1Degree                          20      // 6 Bits, Bit 6-1
#define     LOG_fTd1DegreeMask 0x7E
#define     LOG_fTd1DegreeShift 1
#define LOG_fTd1HourAbs                         20      // 5 Bits, Bit 5-1
#define     LOG_fTd1HourAbsMask 0x3E
#define     LOG_fTd1HourAbsShift 1
#define LOG_fTd1HourRel                         20      // 5 Bits, Bit 5-1
#define     LOG_fTd1HourRelMask 0x3E
#define     LOG_fTd1HourRelShift 1
#define LOG_fTd1HourRelShort                    20      // 5 Bits, Bit 5-1
#define     LOG_fTd1HourRelShortMask 0x3E
#define     LOG_fTd1HourRelShortShift 1
#define LOG_fTd1MinuteAbs                       20      // 6 Bits, Bit 0--5
#define LOG_fTd1MinuteRel                       20      // 6 Bits, Bit 0--5
#define LOG_fTd1Weekday                         21      // 3 Bits, Bit 2-0
#define     LOG_fTd1WeekdayMask 0x07
#define     LOG_fTd1WeekdayShift 0
#define LOG_fTd2Value                           22      // 1 Bit, Bit 7
#define     LOG_fTd2ValueMask 0x80
#define     LOG_fTd2ValueShift 7
#define LOG_fTd2Degree                          22      // 6 Bits, Bit 6-1
#define     LOG_fTd2DegreeMask 0x7E
#define     LOG_fTd2DegreeShift 1
#define LOG_fTd2HourAbs                         22      // 5 Bits, Bit 5-1
#define     LOG_fTd2HourAbsMask 0x3E
#define     LOG_fTd2HourAbsShift 1
#define LOG_fTd2HourRel                         22      // 5 Bits, Bit 5-1
#define     LOG_fTd2HourRelMask 0x3E
#define     LOG_fTd2HourRelShift 1
#define LOG_fTd2HourRelShort                    22      // 5 Bits, Bit 5-1
#define     LOG_fTd2HourRelShortMask 0x3E
#define     LOG_fTd2HourRelShortShift 1
#define LOG_fTd2MinuteAbs                       22      // 6 Bits, Bit 0--5
#define LOG_fTd2MinuteRel                       22      // 6 Bits, Bit 0--5
#define LOG_fTd2Weekday                         23      // 3 Bits, Bit 2-0
#define     LOG_fTd2WeekdayMask 0x07
#define     LOG_fTd2WeekdayShift 0
#define LOG_fTd3Value                           24      // 1 Bit, Bit 7
#define     LOG_fTd3ValueMask 0x80
#define     LOG_fTd3ValueShift 7
#define LOG_fTd3Degree                          24      // 6 Bits, Bit 6-1
#define     LOG_fTd3DegreeMask 0x7E
#define     LOG_fTd3DegreeShift 1
#define LOG_fTd3HourAbs                         24      // 5 Bits, Bit 5-1
#define     LOG_fTd3HourAbsMask 0x3E
#define     LOG_fTd3HourAbsShift 1
#define LOG_fTd3HourRel                         24      // 5 Bits, Bit 5-1
#define     LOG_fTd3HourRelMask 0x3E
#define     LOG_fTd3HourRelShift 1
#define LOG_fTd3HourRelShort                    24      // 5 Bits, Bit 5-1
#define     LOG_fTd3HourRelShortMask 0x3E
#define     LOG_fTd3HourRelShortShift 1
#define LOG_fTd3MinuteAbs                       24      // 6 Bits, Bit 0--5
#define LOG_fTd3MinuteRel                       24      // 6 Bits, Bit 0--5
#define LOG_fTd3Weekday                         25      // 3 Bits, Bit 2-0
#define     LOG_fTd3WeekdayMask 0x07
#define     LOG_fTd3WeekdayShift 0
#define LOG_fTd4Value                           26      // 1 Bit, Bit 7
#define     LOG_fTd4ValueMask 0x80
#define     LOG_fTd4ValueShift 7
#define LOG_fTd4Degree                          26      // 6 Bits, Bit 6-1
#define     LOG_fTd4DegreeMask 0x7E
#define     LOG_fTd4DegreeShift 1
#define LOG_fTd4HourAbs                         26      // 5 Bits, Bit 5-1
#define     LOG_fTd4HourAbsMask 0x3E
#define     LOG_fTd4HourAbsShift 1
#define LOG_fTd4HourRel                         26      // 5 Bits, Bit 5-1
#define     LOG_fTd4HourRelMask 0x3E
#define     LOG_fTd4HourRelShift 1
#define LOG_fTd4HourRelShort                    26      // 5 Bits, Bit 5-1
#define     LOG_fTd4HourRelShortMask 0x3E
#define     LOG_fTd4HourRelShortShift 1
#define LOG_fTd4MinuteAbs                       26      // 6 Bits, Bit 0--5
#define LOG_fTd4MinuteRel                       26      // 6 Bits, Bit 0--5
#define LOG_fTd4Weekday                         27      // 3 Bits, Bit 2-0
#define     LOG_fTd4WeekdayMask 0x07
#define     LOG_fTd4WeekdayShift 0
#define LOG_fTd5Value                           28      // 1 Bit, Bit 7
#define     LOG_fTd5ValueMask 0x80
#define     LOG_fTd5ValueShift 7
#define LOG_fTd5Degree                          28      // 6 Bits, Bit 6-1
#define     LOG_fTd5DegreeMask 0x7E
#define     LOG_fTd5DegreeShift 1
#define LOG_fTd5HourAbs                         28      // 5 Bits, Bit 5-1
#define     LOG_fTd5HourAbsMask 0x3E
#define     LOG_fTd5HourAbsShift 1
#define LOG_fTd5HourRel                         28      // 5 Bits, Bit 5-1
#define     LOG_fTd5HourRelMask 0x3E
#define     LOG_fTd5HourRelShift 1
#define LOG_fTd5HourRelShort                    28      // 5 Bits, Bit 5-1
#define     LOG_fTd5HourRelShortMask 0x3E
#define     LOG_fTd5HourRelShortShift 1
#define LOG_fTd5MinuteAbs                       28      // 6 Bits, Bit 0--5
#define LOG_fTd5MinuteRel                       28      // 6 Bits, Bit 0--5
#define LOG_fTd5Weekday                         29      // 3 Bits, Bit 2-0
#define     LOG_fTd5WeekdayMask 0x07
#define     LOG_fTd5WeekdayShift 0
#define LOG_fTd6Value                           30      // 1 Bit, Bit 7
#define     LOG_fTd6ValueMask 0x80
#define     LOG_fTd6ValueShift 7
#define LOG_fTd6Degree                          30      // 6 Bits, Bit 6-1
#define     LOG_fTd6DegreeMask 0x7E
#define     LOG_fTd6DegreeShift 1
#define LOG_fTd6HourAbs                         30      // 5 Bits, Bit 5-1
#define     LOG_fTd6HourAbsMask 0x3E
#define     LOG_fTd6HourAbsShift 1
#define LOG_fTd6HourRel                         30      // 5 Bits, Bit 5-1
#define     LOG_fTd6HourRelMask 0x3E
#define     LOG_fTd6HourRelShift 1
#define LOG_fTd6HourRelShort                    30      // 5 Bits, Bit 5-1
#define     LOG_fTd6HourRelShortMask 0x3E
#define     LOG_fTd6HourRelShortShift 1
#define LOG_fTd6MinuteAbs                       30      // 6 Bits, Bit 0--5
#define LOG_fTd6MinuteRel                       30      // 6 Bits, Bit 0--5
#define LOG_fTd6Weekday                         31      // 3 Bits, Bit 2-0
#define     LOG_fTd6WeekdayMask 0x07
#define     LOG_fTd6WeekdayShift 0
#define LOG_fTd7Value                           32      // 1 Bit, Bit 7
#define     LOG_fTd7ValueMask 0x80
#define     LOG_fTd7ValueShift 7
#define LOG_fTd7Degree                          32      // 6 Bits, Bit 6-1
#define     LOG_fTd7DegreeMask 0x7E
#define     LOG_fTd7DegreeShift 1
#define LOG_fTd7HourAbs                         32      // 5 Bits, Bit 5-1
#define     LOG_fTd7HourAbsMask 0x3E
#define     LOG_fTd7HourAbsShift 1
#define LOG_fTd7HourRel                         32      // 5 Bits, Bit 5-1
#define     LOG_fTd7HourRelMask 0x3E
#define     LOG_fTd7HourRelShift 1
#define LOG_fTd7HourRelShort                    32      // 5 Bits, Bit 5-1
#define     LOG_fTd7HourRelShortMask 0x3E
#define     LOG_fTd7HourRelShortShift 1
#define LOG_fTd7MinuteAbs                       32      // 6 Bits, Bit 0--5
#define LOG_fTd7MinuteRel                       32      // 6 Bits, Bit 0--5
#define LOG_fTd7Weekday                         33      // 3 Bits, Bit 2-0
#define     LOG_fTd7WeekdayMask 0x07
#define     LOG_fTd7WeekdayShift 0
#define LOG_fTd8Value                           34      // 1 Bit, Bit 7
#define     LOG_fTd8ValueMask 0x80
#define     LOG_fTd8ValueShift 7
#define LOG_fTd8Degree                          34      // 6 Bits, Bit 6-1
#define     LOG_fTd8DegreeMask 0x7E
#define     LOG_fTd8DegreeShift 1
#define LOG_fTd8HourAbs                         34      // 5 Bits, Bit 5-1
#define     LOG_fTd8HourAbsMask 0x3E
#define     LOG_fTd8HourAbsShift 1
#define LOG_fTd8HourRel                         34      // 5 Bits, Bit 5-1
#define     LOG_fTd8HourRelMask 0x3E
#define     LOG_fTd8HourRelShift 1
#define LOG_fTd8HourRelShort                    34      // 5 Bits, Bit 5-1
#define     LOG_fTd8HourRelShortMask 0x3E
#define     LOG_fTd8HourRelShortShift 1
#define LOG_fTd8MinuteAbs                       34      // 6 Bits, Bit 0--5
#define LOG_fTd8MinuteRel                       34      // 6 Bits, Bit 0--5
#define LOG_fTd8Weekday                         35      // 3 Bits, Bit 2-0
#define     LOG_fTd8WeekdayMask 0x07
#define     LOG_fTd8WeekdayShift 0
#define LOG_fTy1Weekday1                        28      // 1 Bit, Bit 7
#define     LOG_fTy1Weekday1Mask 0x80
#define     LOG_fTy1Weekday1Shift 7
#define LOG_fTy1Weekday2                        28      // 1 Bit, Bit 6
#define     LOG_fTy1Weekday2Mask 0x40
#define     LOG_fTy1Weekday2Shift 6
#define LOG_fTy1Weekday3                        28      // 1 Bit, Bit 5
#define     LOG_fTy1Weekday3Mask 0x20
#define     LOG_fTy1Weekday3Shift 5
#define LOG_fTy1Weekday4                        28      // 1 Bit, Bit 4
#define     LOG_fTy1Weekday4Mask 0x10
#define     LOG_fTy1Weekday4Shift 4
#define LOG_fTy1Weekday5                        28      // 1 Bit, Bit 3
#define     LOG_fTy1Weekday5Mask 0x08
#define     LOG_fTy1Weekday5Shift 3
#define LOG_fTy1Weekday6                        28      // 1 Bit, Bit 2
#define     LOG_fTy1Weekday6Mask 0x04
#define     LOG_fTy1Weekday6Shift 2
#define LOG_fTy1Weekday7                        28      // 1 Bit, Bit 1
#define     LOG_fTy1Weekday7Mask 0x02
#define     LOG_fTy1Weekday7Shift 1
#define LOG_fTy1Day                             28      // 7 Bits, Bit 7-1
#define     LOG_fTy1DayMask 0xFE
#define     LOG_fTy1DayShift 1
#define LOG_fTy1IsWeekday                       28      // 1 Bit, Bit 0
#define     LOG_fTy1IsWeekdayMask 0x01
#define     LOG_fTy1IsWeekdayShift 0
#define LOG_fTy1Month                           29      // 4 Bits, Bit 7-4
#define     LOG_fTy1MonthMask 0xF0
#define     LOG_fTy1MonthShift 4
#define LOG_fTy2Weekday1                        30      // 1 Bit, Bit 7
#define     LOG_fTy2Weekday1Mask 0x80
#define     LOG_fTy2Weekday1Shift 7
#define LOG_fTy2Weekday2                        30      // 1 Bit, Bit 6
#define     LOG_fTy2Weekday2Mask 0x40
#define     LOG_fTy2Weekday2Shift 6
#define LOG_fTy2Weekday3                        30      // 1 Bit, Bit 5
#define     LOG_fTy2Weekday3Mask 0x20
#define     LOG_fTy2Weekday3Shift 5
#define LOG_fTy2Weekday4                        30      // 1 Bit, Bit 4
#define     LOG_fTy2Weekday4Mask 0x10
#define     LOG_fTy2Weekday4Shift 4
#define LOG_fTy2Weekday5                        30      // 1 Bit, Bit 3
#define     LOG_fTy2Weekday5Mask 0x08
#define     LOG_fTy2Weekday5Shift 3
#define LOG_fTy2Weekday6                        30      // 1 Bit, Bit 2
#define     LOG_fTy2Weekday6Mask 0x04
#define     LOG_fTy2Weekday6Shift 2
#define LOG_fTy2Weekday7                        30      // 1 Bit, Bit 1
#define     LOG_fTy2Weekday7Mask 0x02
#define     LOG_fTy2Weekday7Shift 1
#define LOG_fTy2Day                             30      // 7 Bits, Bit 7-1
#define     LOG_fTy2DayMask 0xFE
#define     LOG_fTy2DayShift 1
#define LOG_fTy2IsWeekday                       30      // 1 Bit, Bit 0
#define     LOG_fTy2IsWeekdayMask 0x01
#define     LOG_fTy2IsWeekdayShift 0
#define LOG_fTy2Month                           31      // 4 Bits, Bit 7-4
#define     LOG_fTy2MonthMask 0xF0
#define     LOG_fTy2MonthShift 4
#define LOG_fTy3Weekday1                        32      // 1 Bit, Bit 7
#define     LOG_fTy3Weekday1Mask 0x80
#define     LOG_fTy3Weekday1Shift 7
#define LOG_fTy3Weekday2                        32      // 1 Bit, Bit 6
#define     LOG_fTy3Weekday2Mask 0x40
#define     LOG_fTy3Weekday2Shift 6
#define LOG_fTy3Weekday3                        32      // 1 Bit, Bit 5
#define     LOG_fTy3Weekday3Mask 0x20
#define     LOG_fTy3Weekday3Shift 5
#define LOG_fTy3Weekday4                        32      // 1 Bit, Bit 4
#define     LOG_fTy3Weekday4Mask 0x10
#define     LOG_fTy3Weekday4Shift 4
#define LOG_fTy3Weekday5                        32      // 1 Bit, Bit 3
#define     LOG_fTy3Weekday5Mask 0x08
#define     LOG_fTy3Weekday5Shift 3
#define LOG_fTy3Weekday6                        32      // 1 Bit, Bit 2
#define     LOG_fTy3Weekday6Mask 0x04
#define     LOG_fTy3Weekday6Shift 2
#define LOG_fTy3Weekday7                        32      // 1 Bit, Bit 1
#define     LOG_fTy3Weekday7Mask 0x02
#define     LOG_fTy3Weekday7Shift 1
#define LOG_fTy3Day                             32      // 7 Bits, Bit 7-1
#define     LOG_fTy3DayMask 0xFE
#define     LOG_fTy3DayShift 1
#define LOG_fTy3IsWeekday                       32      // 1 Bit, Bit 0
#define     LOG_fTy3IsWeekdayMask 0x01
#define     LOG_fTy3IsWeekdayShift 0
#define LOG_fTy3Month                           33      // 4 Bits, Bit 7-4
#define     LOG_fTy3MonthMask 0xF0
#define     LOG_fTy3MonthShift 4
#define LOG_fTy4Weekday1                        34      // 1 Bit, Bit 7
#define     LOG_fTy4Weekday1Mask 0x80
#define     LOG_fTy4Weekday1Shift 7
#define LOG_fTy4Weekday2                        34      // 1 Bit, Bit 6
#define     LOG_fTy4Weekday2Mask 0x40
#define     LOG_fTy4Weekday2Shift 6
#define LOG_fTy4Weekday3                        34      // 1 Bit, Bit 5
#define     LOG_fTy4Weekday3Mask 0x20
#define     LOG_fTy4Weekday3Shift 5
#define LOG_fTy4Weekday4                        34      // 1 Bit, Bit 4
#define     LOG_fTy4Weekday4Mask 0x10
#define     LOG_fTy4Weekday4Shift 4
#define LOG_fTy4Weekday5                        34      // 1 Bit, Bit 3
#define     LOG_fTy4Weekday5Mask 0x08
#define     LOG_fTy4Weekday5Shift 3
#define LOG_fTy4Weekday6                        34      // 1 Bit, Bit 2
#define     LOG_fTy4Weekday6Mask 0x04
#define     LOG_fTy4Weekday6Shift 2
#define LOG_fTy4Weekday7                        34      // 1 Bit, Bit 1
#define     LOG_fTy4Weekday7Mask 0x02
#define     LOG_fTy4Weekday7Shift 1
#define LOG_fTy4Day                             34      // 7 Bits, Bit 7-1
#define     LOG_fTy4DayMask 0xFE
#define     LOG_fTy4DayShift 1
#define LOG_fTy4IsWeekday                       34      // 1 Bit, Bit 0
#define     LOG_fTy4IsWeekdayMask 0x01
#define     LOG_fTy4IsWeekdayShift 0
#define LOG_fTy4Month                           35      // 4 Bits, Bit 7-4
#define     LOG_fTy4MonthMask 0xF0
#define     LOG_fTy4MonthShift 4
#define LOG_fI1                                 36      // 2 Bits, Bit 7-6
#define     LOG_fI1Mask 0xC0
#define     LOG_fI1Shift 6
#define LOG_fI1Kind                             36      // 2 Bits, Bit 5-4
#define     LOG_fI1KindMask 0x30
#define     LOG_fI1KindShift 4
#define LOG_fI1AsTrigger                        36      // 1 Bit, Bit 3
#define     LOG_fI1AsTriggerMask 0x08
#define     LOG_fI1AsTriggerShift 3
#define LOG_fI1InternalInputType                36      // 1 Bit, Bit 2
#define     LOG_fI1InternalInputTypeMask 0x04
#define     LOG_fI1InternalInputTypeShift 2
#define LOG_fI1Function                         37      // uint8_t
#define LOG_fI1FunctionRel                      37      // int8_t
#define LOG_fI1StatusLed                        37      // 16 Bits, Bit 15-0
#define LOG_fI2                                 39      // 2 Bits, Bit 7-6
#define     LOG_fI2Mask 0xC0
#define     LOG_fI2Shift 6
#define LOG_fI2Kind                             39      // 2 Bits, Bit 5-4
#define     LOG_fI2KindMask 0x30
#define     LOG_fI2KindShift 4
#define LOG_fI2AsTrigger                        39      // 1 Bit, Bit 3
#define     LOG_fI2AsTriggerMask 0x08
#define     LOG_fI2AsTriggerShift 3
#define LOG_fI2InternalInputType                39      // 1 Bit, Bit 2
#define     LOG_fI2InternalInputTypeMask 0x04
#define     LOG_fI2InternalInputTypeShift 2
#define LOG_fI2Function                         40      // uint8_t
#define LOG_fI2FunctionRel                      40      // int8_t
#define LOG_fI2StatusLed                        40      // 16 Bits, Bit 15-0
#define LOG_fOStairtimeBase                     42      // 2 Bits, Bit 7-6
#define     LOG_fOStairtimeBaseMask 0xC0
#define     LOG_fOStairtimeBaseShift 6
#define LOG_fOStairtimeTime                     42      // 14 Bits, Bit 13-0
#define     LOG_fOStairtimeTimeMask 0x3FFF
#define     LOG_fOStairtimeTimeShift 0
#define LOG_fOBlinkBase                         44      // 2 Bits, Bit 7-6
#define     LOG_fOBlinkBaseMask 0xC0
#define     LOG_fOBlinkBaseShift 6
#define LOG_fOBlinkTime                         44      // 14 Bits, Bit 13-0
#define     LOG_fOBlinkTimeMask 0x3FFF
#define     LOG_fOBlinkTimeShift 0
#define LOG_fODelayOnBase                       46      // 2 Bits, Bit 7-6
#define     LOG_fODelayOnBaseMask 0xC0
#define     LOG_fODelayOnBaseShift 6
#define LOG_fODelayOnTime                       46      // 14 Bits, Bit 13-0
#define     LOG_fODelayOnTimeMask 0x3FFF
#define     LOG_fODelayOnTimeShift 0
#define LOG_fODelayOffBase                      48      // 2 Bits, Bit 7-6
#define     LOG_fODelayOffBaseMask 0xC0
#define     LOG_fODelayOffBaseShift 6
#define LOG_fODelayOffTime                      48      // 14 Bits, Bit 13-0
#define     LOG_fODelayOffTimeMask 0x3FFF
#define     LOG_fODelayOffTimeShift 0
#define LOG_fORepeatOnBase                      50      // 2 Bits, Bit 7-6
#define     LOG_fORepeatOnBaseMask 0xC0
#define     LOG_fORepeatOnBaseShift 6
#define LOG_fORepeatOnTime                      50      // 14 Bits, Bit 13-0
#define     LOG_fORepeatOnTimeMask 0x3FFF
#define     LOG_fORepeatOnTimeShift 0
#define LOG_fORepeatOffBase                     52      // 2 Bits, Bit 7-6
#define     LOG_fORepeatOffBaseMask 0xC0
#define     LOG_fORepeatOffBaseShift 6
#define LOG_fORepeatOffTime                     52      // 14 Bits, Bit 13-0
#define     LOG_fORepeatOffTimeMask 0x3FFF
#define     LOG_fORepeatOffTimeShift 0
#define LOG_fODelay                             54      // 1 Bit, Bit 7
#define     LOG_fODelayMask 0x80
#define     LOG_fODelayShift 7
#define LOG_fODelayOnRepeat                     54      // 2 Bits, Bit 6-5
#define     LOG_fODelayOnRepeatMask 0x60
#define     LOG_fODelayOnRepeatShift 5
#define LOG_fODelayOnReset                      54      // 1 Bit, Bit 4
#define     LOG_fODelayOnResetMask 0x10
#define     LOG_fODelayOnResetShift 4
#define LOG_fODelayOffRepeat                    54      // 2 Bits, Bit 3-2
#define     LOG_fODelayOffRepeatMask 0x0C
#define     LOG_fODelayOffRepeatShift 2
#define LOG_fODelayOffReset                     54      // 1 Bit, Bit 1
#define     LOG_fODelayOffResetMask 0x02
#define     LOG_fODelayOffResetShift 1
#define LOG_fOStair                             54      // 1 Bit, Bit 0
#define     LOG_fOStairMask 0x01
#define     LOG_fOStairShift 0
#define LOG_fORetrigger                         55      // 1 Bit, Bit 7
#define     LOG_fORetriggerMask 0x80
#define     LOG_fORetriggerShift 7
#define LOG_fOStairOff                          55      // 1 Bit, Bit 6
#define     LOG_fOStairOffMask 0x40
#define     LOG_fOStairOffShift 6
#define LOG_fORepeat                            55      // 1 Bit, Bit 5
#define     LOG_fORepeatMask 0x20
#define     LOG_fORepeatShift 5
#define LOG_fOOutputFilter                      55      // 2 Bits, Bit 4-3
#define     LOG_fOOutputFilterMask 0x18
#define     LOG_fOOutputFilterShift 3
#define LOG_fOSendOnChange                      55      // 1 Bit, Bit 2
#define     LOG_fOSendOnChangeMask 0x04
#define     LOG_fOSendOnChangeShift 2
#define LOG_fOLockEnabled                       55      // 1 Bit, Bit 1
#define     LOG_fOLockEnabledMask 0x02
#define     LOG_fOLockEnabledShift 1
#define LOG_fODpt                               56      // 8 Bits, Bit 7-0
#define LOG_fOLockTriggerLock                   57      // 2 Bits, Bit 7-6
#define     LOG_fOLockTriggerLockMask 0xC0
#define     LOG_fOLockTriggerLockShift 6
#define LOG_fOLockTriggerUnlock                 57      // 2 Bits, Bit 5-4
#define     LOG_fOLockTriggerUnlockMask 0x30
#define     LOG_fOLockTriggerUnlockShift 4
#define LOG_fOLockResetQueue                    57      // 2 Bits, Bit 3-2
#define     LOG_fOLockResetQueueMask 0x0C
#define     LOG_fOLockResetQueueShift 2
#define LOG_fOLockKind                          57      // 2 Bits, Bit 1-0
#define     LOG_fOLockKindMask 0x03
#define     LOG_fOLockKindShift 0
#define LOG_fOLockFunction                      58      // uint8_t
#define LOG_fOLockFunctionRel                   58      // int8_t
#define LOG_fOOnAll                             59      // 8 Bits, Bit 7-0
#define LOG_fOOnDpt1                            60      // 8 Bits, Bit 7-0
#define LOG_fOOnDpt2                            60      // 8 Bits, Bit 7-0
#define LOG_fOOnDpt3Dir                         60      // 5 Bits, Bit 7-3
#define     LOG_fOOnDpt3DirMask 0xF8
#define     LOG_fOOnDpt3DirShift 3
#define LOG_fOOnDpt3Dim                         60      // 3 Bits, Bit 2-0
#define     LOG_fOOnDpt3DimMask 0x07
#define     LOG_fOOnDpt3DimShift 0
#define LOG_fOOnDpt5                            60      // uint8_t
#define LOG_fOOnDpt5001                         60      // uint8_t
#define LOG_fOOnDpt6                            60      // int8_t
#define LOG_fOOnDpt7                            60      // uint16_t
#define LOG_fOOnDpt8                            60      // int16_t
#define LOG_fOOnDpt9                            60      // float (4 Byte)
#define LOG_fOOnDpt12                           60      // uint32_t
#define LOG_fOOnDpt13                           60      // int32_t
#define LOG_fOOnDpt14                           60      // float (4 Byte)
#define LOG_fOOnDpt16                           60      // char*, 14 Byte
#define     LOG_fOOnDpt16Length 14
#define LOG_fOOnDpt17                           60      // 8 Bits, Bit 7-0
#define LOG_fOOnRGB                             60      // 24 Bits, Bit 31-8
#define     LOG_fOOnRGBMask 0xFFFFFF00
#define     LOG_fOOnRGBShift 8
#define LOG_fOOnLedProvider                     64      // 3 Bits, Bit 2-0
#define     LOG_fOOnLedProviderMask 0x07
#define     LOG_fOOnLedProviderShift 0
#define LOG_fOOnLedEffect                       65      // 3 Bits, Bit 2-0
#define     LOG_fOOnLedEffectMask 0x07
#define     LOG_fOOnLedEffectShift 0
#define LOG_fOOnLedDuration                     66      // uint16_t
#define LOG_fOOnPAArea                          60      // 4 Bits, Bit 7-4
#define     LOG_fOOnPAAreaMask 0xF0
#define     LOG_fOOnPAAreaShift 4
#define LOG_fOOnPALine                          60      // 4 Bits, Bit 3-0
#define     LOG_fOOnPALineMask 0x0F
#define     LOG_fOOnPALineShift 0
#define LOG_fOOnPADevice                        61      // uint8_t
#define LOG_fOOnFunction                        60      // 8 Bits, Bit 7-0
#define LOG_fOOnKOKind                          65      // 2 Bits, Bit 7-6
#define     LOG_fOOnKOKindMask 0xC0
#define     LOG_fOOnKOKindShift 6
#define LOG_fOOnKONumber                        60      // uint16_t
#define LOG_fOOnKONumberRel                     60      // int16_t
#define LOG_fOOnKODpt                           62      // 8 Bits, Bit 7-0
#define LOG_fOOnKOSend                          65      // 2 Bits, Bit 5-4
#define     LOG_fOOnKOSendMask 0x30
#define     LOG_fOOnKOSendShift 4
#define LOG_fOOnKOSendNumber                    66      // uint16_t
#define LOG_fOOnKOSendNumberRel                 66      // int16_t
#define LOG_fOOffAll                            74      // 8 Bits, Bit 7-0
#define LOG_fOOffDpt1                           75      // 8 Bits, Bit 7-0
#define LOG_fOOffDpt2                           75      // 8 Bits, Bit 7-0
#define LOG_fOOffDpt3Dir                        75      // 5 Bits, Bit 7-3
#define     LOG_fOOffDpt3DirMask 0xF8
#define     LOG_fOOffDpt3DirShift 3
#define LOG_fOOffDpt3Dim                        75      // 3 Bits, Bit 2-0
#define     LOG_fOOffDpt3DimMask 0x07
#define     LOG_fOOffDpt3DimShift 0
#define LOG_fOOffDpt5                           75      // uint8_t
#define LOG_fOOffDpt5001                        75      // uint8_t
#define LOG_fOOffDpt6                           75      // int8_t
#define LOG_fOOffDpt7                           75      // uint16_t
#define LOG_fOOffDpt8                           75      // int16_t
#define LOG_fOOffDpt9                           75      // float (4 Byte)
#define LOG_fOOffDpt12                          75      // uint32_t
#define LOG_fOOffDpt13                          75      // int32_t
#define LOG_fOOffDpt14                          75      // float (4 Byte)
#define LOG_fOOffDpt16                          75      // char*, 14 Byte
#define     LOG_fOOffDpt16Length 14
#define LOG_fOOffDpt17                          75      // 8 Bits, Bit 7-0
#define LOG_fOOffRGB                            75      // 24 Bits, Bit 31-8
#define     LOG_fOOffRGBMask 0xFFFFFF00
#define     LOG_fOOffRGBShift 8
#define LOG_fOOffLedProvider                    79      // 3 Bits, Bit 2-0
#define     LOG_fOOffLedProviderMask 0x07
#define     LOG_fOOffLedProviderShift 0
#define LOG_fOOffLedEffect                      80      // 3 Bits, Bit 2-0
#define     LOG_fOOffLedEffectMask 0x07
#define     LOG_fOOffLedEffectShift 0
#define LOG_fOOffLedDuration                    81      // uint16_t
#define LOG_fOOffPAArea                         75      // 4 Bits, Bit 7-4
#define     LOG_fOOffPAAreaMask 0xF0
#define     LOG_fOOffPAAreaShift 4
#define LOG_fOOffPALine                         75      // 4 Bits, Bit 3-0
#define     LOG_fOOffPALineMask 0x0F
#define     LOG_fOOffPALineShift 0
#define LOG_fOOffPADevice                       76      // uint8_t
#define LOG_fOOffFunction                       75      // 8 Bits, Bit 7-0
#define LOG_fOOffKOKind                         80      // 2 Bits, Bit 7-6
#define     LOG_fOOffKOKindMask 0xC0
#define     LOG_fOOffKOKindShift 6
#define LOG_fOOffKONumber                       75      // uint16_t
#define LOG_fOOffKONumberRel                    75      // int16_t
#define LOG_fOOffKODpt                          77      // 8 Bits, Bit 7-0
#define LOG_fOOffKOSend                         80      // 2 Bits, Bit 5-4
#define     LOG_fOOffKOSendMask 0x30
#define     LOG_fOOffKOSendShift 4
#define LOG_fOOffKOSendNumber                   81      // uint16_t
#define LOG_fOOffKOSendNumberRel                81      // int16_t

// Startverzögerung
#define ParamLOG_fChannelDelayBase                   ((knx.paramByte(LOG_ParamCalcIndex(LOG_fChannelDelayBase)) & LOG_fChannelDelayBaseMask) >> LOG_fChannelDelayBaseShift)
// Startverzögerung
#define ParamLOG_fChannelDelayTime                   (knx.paramWord(LOG_ParamCalcIndex(LOG_fChannelDelayTime)) & LOG_fChannelDelayTimeMask)
// Startverzögerung (in Millisekunden)
#define ParamLOG_fChannelDelayTimeMS                 (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fChannelDelayTime))))
// Logik-Operation
#define ParamLOG_fLogic                              (PT_Logic)(knx.paramByte(LOG_ParamCalcIndex(LOG_fLogic)))
// Logik auswerten
#define ParamLOG_fCalculate                          (PT_Calculate)(knx.paramByte(LOG_ParamCalcIndex(LOG_fCalculate)) & LOG_fCalculateMask)
// Suspendiert
#define ParamLOG_fDisable                            ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fDisable)) & LOG_fDisableMask))
// Tor geht sofort wieder zu
#define ParamLOG_fTGate                              ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTGate)) & LOG_fTGateMask))
// Wert EIN intern weiterleiten
#define ParamLOG_fOInternalOn                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOInternalOn)) & LOG_fOInternalOnMask))
// Wert AUS intern weiterleiten
#define ParamLOG_fOInternalOff                       ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOInternalOff)) & LOG_fOInternalOffMask))
// Logik sendet ihren Wert weiter
#define ParamLOG_fTrigger                            (knx.paramByte(LOG_ParamCalcIndex(LOG_fTrigger)))
//           Eingang 1
#define ParamLOG_fTriggerE1                          ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTriggerE1)) & LOG_fTriggerE1Mask))
//           Eingang 2
#define ParamLOG_fTriggerE2                          ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTriggerE2)) & LOG_fTriggerE2Mask))
//           Interner Eingang 3
#define ParamLOG_fTriggerI1                          ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTriggerI1)) & LOG_fTriggerI1Mask))
//           Interner Eingang 4
#define ParamLOG_fTriggerI2                          ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTriggerI2)) & LOG_fTriggerI2Mask))
// Logik sendet ihren Wert weiter
#define ParamLOG_fTriggerTime                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTriggerTime)))
// Beim schließen vom Tor wird
#define ParamLOG_fTriggerGateClose                   (PT_GateTrigger)((knx.paramByte(LOG_ParamCalcIndex(LOG_fTriggerGateClose)) & LOG_fTriggerGateCloseMask) >> LOG_fTriggerGateCloseShift)
// Beim öffnen vom Tor wird
#define ParamLOG_fTriggerGateOpen                    (PT_GateTrigger)((knx.paramByte(LOG_ParamCalcIndex(LOG_fTriggerGateOpen)) & LOG_fTriggerGateOpenMask) >> LOG_fTriggerGateOpenShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE1ConvertInt                       (PT_InputConv)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1ConvertInt)) & LOG_fE1ConvertIntMask) >> LOG_fE1ConvertIntShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE1Convert                          (PT_InputConv)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Convert)) & LOG_fE1ConvertMask) >> LOG_fE1ConvertShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE1ConvertFloat                     (PT_InputConv)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1ConvertFloat)) & LOG_fE1ConvertFloatMask) >> LOG_fE1ConvertFloatShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE1ConvertSpecial                   (PT_InputConv)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1ConvertSpecial)) & LOG_fE1ConvertSpecialMask) >> LOG_fE1ConvertSpecialShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE1ConvertBool                      (PT_InputConv)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1ConvertBool)) & LOG_fE1ConvertBoolMask) >> LOG_fE1ConvertBoolShift)
// Eingang 1
#define ParamLOG_fE1                                 (PT_InputEnable)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1)) & LOG_fE1Mask)
// DPT für Eingang
#define ParamLOG_fE1Dpt                              (PT_LogicDpt)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Dpt)))
// Eingang wird gelesen alle
#define ParamLOG_fE1RepeatBase                       ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1RepeatBase)) & LOG_fE1RepeatBaseMask) >> LOG_fE1RepeatBaseShift)
// Eingang wird gelesen alle
#define ParamLOG_fE1RepeatTime                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1RepeatTime)) & LOG_fE1RepeatTimeMask)
// Eingang wird gelesen alle (in Millisekunden)
#define ParamLOG_fE1RepeatTimeMS                     (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fE1RepeatTime))))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fE1OtherKO                          (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1OtherKO)))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fE1OtherKORel                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE1OtherKORel)))
// Falls Vorbelegung aus dem Speicher nicht möglich oder nicht gewünscht, dann vorbelegen mit
#define ParamLOG_fE1Default                          (PT_InputDefault)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Default)) & LOG_fE1DefaultMask)
// Eingang vorbelegen mit
#define ParamLOG_fE1DefaultExt                       (PT_InputDefault)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1DefaultExt)) & LOG_fE1DefaultExtMask)
// Eingangswert speichern und beim nächsten Neustart als Vorbelegung nutzen?
#define ParamLOG_fE1DefaultEEPROM                    ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1DefaultEEPROM)) & LOG_fE1DefaultEEPROMMask))
// Nur so lange zyklisch lesen, bis erstes Telegramm eingeht
#define ParamLOG_fE1DefaultRepeat                    ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1DefaultRepeat)) & LOG_fE1DefaultRepeatMask))
// Kommunikationsobjekt für Eingang
#define ParamLOG_fE1UseOtherKO                       (PT_KORelInput)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1UseOtherKO)) & LOG_fE1UseOtherKOMask) >> LOG_fE1UseOtherKOShift)
// Von-Wert
#define ParamLOG_fE1LowDelta                         ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1LowDelta)))
// Bis-Wert
#define ParamLOG_fE1HighDelta                        ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1HighDelta)))
// Von-Wert
#define ParamLOG_fE1LowDeltaFloat                    (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1LowDeltaFloat), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE1HighDeltaFloat                   (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1HighDeltaFloat), Float_Enc_IEEE754Single))
// Von-Wert
#define ParamLOG_fE1LowDeltaDouble                   (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1LowDeltaDouble), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE1HighDeltaDouble                  (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1HighDeltaDouble), Float_Enc_IEEE754Single))
// Nächste Zeile auswerten?
#define ParamLOG_fE1Low0Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Valid)) & LOG_fE1Low0ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE1Low1Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Valid)) & LOG_fE1Low1ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE1Low2Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Valid)) & LOG_fE1Low2ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE1Low3Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Valid)) & LOG_fE1Low3ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE1Low4Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low4Valid)) & LOG_fE1Low4ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE1Low5Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low5Valid)) & LOG_fE1Low5ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE1Low6Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low6Valid)) & LOG_fE1Low6ValidMask))
// Eingang ist EIN, wenn Wert gleich
#define ParamLOG_fE1Low0Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Dpt2)))
// ... oder wenn Wert gleich 
#define ParamLOG_fE1Low1Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Dpt2)))
// ... oder wenn Wert gleich 
#define ParamLOG_fE1Low2Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Dpt2)))
// ... oder wenn Wert gleich 
#define ParamLOG_fE1Low3Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Dpt2)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt2Fix                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt2Fix)))
// Eingang ist EIN, wenn Wert gleich
#define ParamLOG_fE1Low0Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Dpt3Dir)) & LOG_fE1Low0Dpt3DirMask) >> LOG_fE1Low0Dpt3DirShift)
// 
#define ParamLOG_fE1Low0Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Dpt3Dim)) & LOG_fE1Low0Dpt3DimMask)
// ... oder wenn Wert gleich 
#define ParamLOG_fE1Low1Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Dpt3Dir)) & LOG_fE1Low1Dpt3DirMask) >> LOG_fE1Low1Dpt3DirShift)
// 
#define ParamLOG_fE1Low1Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Dpt3Dim)) & LOG_fE1Low1Dpt3DimMask)
// ... oder wenn Wert gleich 
#define ParamLOG_fE1Low2Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Dpt3Dir)) & LOG_fE1Low2Dpt3DirMask) >> LOG_fE1Low2Dpt3DirShift)
// 
#define ParamLOG_fE1Low2Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Dpt3Dim)) & LOG_fE1Low2Dpt3DimMask)
// ... oder wenn Wert gleich 
#define ParamLOG_fE1Low3Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Dpt3Dir)) & LOG_fE1Low3Dpt3DirMask) >> LOG_fE1Low3Dpt3DirShift)
// 
#define ParamLOG_fE1Low3Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Dpt3Dim)) & LOG_fE1Low3Dpt3DimMask)
// Eingang ist konstant
#define ParamLOG_fE1LowDpt3FixDir                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt3FixDir)) & LOG_fE1LowDpt3FixDirMask) >> LOG_fE1LowDpt3FixDirShift)
// 
#define ParamLOG_fE1LowDpt3FixDim                    (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt3FixDim)) & LOG_fE1LowDpt3FixDimMask)
// Von-Wert
#define ParamLOG_fE1LowDpt5                          (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt5)))
// Bis-Wert
#define ParamLOG_fE1HighDpt5                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1HighDpt5)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE1Low0Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE1Low1Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE1Low2Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE1Low3Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE1Low4Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low4Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE1Low5Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low5Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE1Low6Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low6Dpt5In)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt5Fix                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt5Fix)))
// Von-Wert
#define ParamLOG_fE1LowDpt5001                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt5001)))
// Bis-Wert
#define ParamLOG_fE1HighDpt5001                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1HighDpt5001)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE1Low0Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE1Low1Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE1Low2Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE1Low3Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE1Low4Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low4Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE1Low5Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low5Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE1Low6Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low6Dpt5xIn)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt5xFix                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt5xFix)))
// Von-Wert
#define ParamLOG_fE1LowDpt6                          ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt6)))
// Bis-Wert
#define ParamLOG_fE1HighDpt6                         ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1HighDpt6)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE1Low0Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE1Low1Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE1Low2Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE1Low3Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE1Low4Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low4Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE1Low5Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low5Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE1Low6Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low6Dpt6In)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt6Fix                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt6Fix)))
// Von-Wert
#define ParamLOG_fE1LowDpt7                          (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1LowDpt7)))
// Bis-Wert
#define ParamLOG_fE1HighDpt7                         (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1HighDpt7)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE1Low0Dpt7In                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1Low0Dpt7In)))
// ... oder bei Wert
#define ParamLOG_fE1Low1Dpt7In                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1Low1Dpt7In)))
// ... oder bei Wert
#define ParamLOG_fE1Low2Dpt7In                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1Low2Dpt7In)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt7Fix                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1LowDpt7Fix)))
// Von-Wert
#define ParamLOG_fE1LowDpt8                          ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE1LowDpt8)))
// Bis-Wert
#define ParamLOG_fE1HighDpt8                         ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE1HighDpt8)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE1Low0Dpt8In                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE1Low0Dpt8In)))
// ... oder bei Wert
#define ParamLOG_fE1Low1Dpt8In                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE1Low1Dpt8In)))
// ... oder bei Wert
#define ParamLOG_fE1Low2Dpt8In                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE1Low2Dpt8In)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt8Fix                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE1LowDpt8Fix)))
// Von-Wert
#define ParamLOG_fE1LowDpt9                          (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1LowDpt9), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE1HighDpt9                         (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1HighDpt9), Float_Enc_IEEE754Single))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt9Fix                       (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1LowDpt9Fix), Float_Enc_IEEE754Single))
// Von-Wert
#define ParamLOG_fE1LowDpt12                         (knx.paramInt(LOG_ParamCalcIndex(LOG_fE1LowDpt12)))
// Bis-Wert
#define ParamLOG_fE1HighDpt12                        (knx.paramInt(LOG_ParamCalcIndex(LOG_fE1HighDpt12)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt12Fix                      (knx.paramInt(LOG_ParamCalcIndex(LOG_fE1LowDpt12Fix)))
// Von-Wert
#define ParamLOG_fE1LowDpt13                         ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1LowDpt13)))
// Bis-Wert
#define ParamLOG_fE1HighDpt13                        ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1HighDpt13)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt13Fix                      ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1LowDpt13Fix)))
// Von-Wert
#define ParamLOG_fE1LowDpt14                         (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1LowDpt14), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE1HighDpt14                        (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1HighDpt14), Float_Enc_IEEE754Single))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt14Fix                      (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1LowDpt14Fix), Float_Enc_IEEE754Single))
// Eingang ist EIN bei Szene
#define ParamLOG_fE1Low0Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE1Low1Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE1Low2Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE1Low3Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE1Low4Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low4Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE1Low5Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low5Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE1Low6Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low6Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE1Low7Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low7Dpt17)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt17Fix                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt17Fix)))
// Von-Wert
#define ParamLOG_fE1LowDptRGB                        ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1LowDptRGB)))
// Bis-Wert
#define ParamLOG_fE1HighDptRGB                       ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1HighDptRGB)))
// Eingang ist konstant
#define ParamLOG_fE1LowDptRGBFix                     ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1LowDptRGBFix)))
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE2ConvertInt                       (PT_InputConv)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2ConvertInt)) & LOG_fE2ConvertIntMask) >> LOG_fE2ConvertIntShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE2Convert                          (PT_InputConv)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Convert)) & LOG_fE2ConvertMask) >> LOG_fE2ConvertShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE2ConvertFloat                     (PT_InputConv)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2ConvertFloat)) & LOG_fE2ConvertFloatMask) >> LOG_fE2ConvertFloatShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE2ConvertSpecial                   (PT_InputConv)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2ConvertSpecial)) & LOG_fE2ConvertSpecialMask) >> LOG_fE2ConvertSpecialShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE2ConvertBool                      (PT_InputConv)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2ConvertBool)) & LOG_fE2ConvertBoolMask) >> LOG_fE2ConvertBoolShift)
// Eingang 2
#define ParamLOG_fE2                                 (PT_InputEnable)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2)) & LOG_fE2Mask)
// DPT für Eingang
#define ParamLOG_fE2Dpt                              (PT_LogicDpt)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Dpt)))
// Eingang wird gelesen alle
#define ParamLOG_fE2RepeatBase                       ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2RepeatBase)) & LOG_fE2RepeatBaseMask) >> LOG_fE2RepeatBaseShift)
// Eingang wird gelesen alle
#define ParamLOG_fE2RepeatTime                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2RepeatTime)) & LOG_fE2RepeatTimeMask)
// Eingang wird gelesen alle (in Millisekunden)
#define ParamLOG_fE2RepeatTimeMS                     (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fE2RepeatTime))))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fE2OtherKO                          (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2OtherKO)))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fE2OtherKORel                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE2OtherKORel)))
// Falls Vorbelegung aus dem Speicher nicht möglich oder nicht gewünscht, dann vorbelegen mit
#define ParamLOG_fE2Default                          (PT_InputDefault)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Default)) & LOG_fE2DefaultMask)
// Eingang vorbelegen mit
#define ParamLOG_fE2DefaultExt                       (PT_InputDefault)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2DefaultExt)) & LOG_fE2DefaultExtMask)
// Eingangswert speichern und beim nächsten Neustart als Vorbelegung nutzen?
#define ParamLOG_fE2DefaultEEPROM                    ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2DefaultEEPROM)) & LOG_fE2DefaultEEPROMMask))
// Nur so lange zyklisch lesen, bis erstes Telegramm eingeht
#define ParamLOG_fE2DefaultRepeat                    ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2DefaultRepeat)) & LOG_fE2DefaultRepeatMask))
// Kommunikationsobjekt für Eingang
#define ParamLOG_fE2UseOtherKO                       (PT_KORelInput)((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2UseOtherKO)) & LOG_fE2UseOtherKOMask) >> LOG_fE2UseOtherKOShift)
// Von-Wert
#define ParamLOG_fE2LowDelta                         ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2LowDelta)))
// Bis-Wert
#define ParamLOG_fE2HighDelta                        ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2HighDelta)))
// Von-Wert
#define ParamLOG_fE2LowDeltaFloat                    (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2LowDeltaFloat), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE2HighDeltaFloat                   (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2HighDeltaFloat), Float_Enc_IEEE754Single))
// Von-Wert
#define ParamLOG_fE2LowDeltaDouble                   (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2LowDeltaDouble), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE2HighDeltaDouble                  (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2HighDeltaDouble), Float_Enc_IEEE754Single))
// Nächste Zeile auswerten?
#define ParamLOG_fE2Low0Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Valid)) & LOG_fE2Low0ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE2Low1Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Valid)) & LOG_fE2Low1ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE2Low2Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Valid)) & LOG_fE2Low2ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE2Low3Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Valid)) & LOG_fE2Low3ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE2Low4Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low4Valid)) & LOG_fE2Low4ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE2Low5Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low5Valid)) & LOG_fE2Low5ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE2Low6Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low6Valid)) & LOG_fE2Low6ValidMask))
// Eingang ist EIN, wenn Wert gleich
#define ParamLOG_fE2Low0Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Dpt2)))
// ... oder wenn Wert gleich 
#define ParamLOG_fE2Low1Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Dpt2)))
// ... oder wenn Wert gleich 
#define ParamLOG_fE2Low2Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Dpt2)))
// ... oder wenn Wert gleich 
#define ParamLOG_fE2Low3Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Dpt2)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt2Fix                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt2Fix)))
// Eingang ist EIN, wenn Wert gleich
#define ParamLOG_fE2Low0Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Dpt3Dir)) & LOG_fE2Low0Dpt3DirMask) >> LOG_fE2Low0Dpt3DirShift)
// 
#define ParamLOG_fE2Low0Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Dpt3Dim)) & LOG_fE2Low0Dpt3DimMask)
// ... oder wenn Wert gleich 
#define ParamLOG_fE2Low1Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Dpt3Dir)) & LOG_fE2Low1Dpt3DirMask) >> LOG_fE2Low1Dpt3DirShift)
// 
#define ParamLOG_fE2Low1Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Dpt3Dim)) & LOG_fE2Low1Dpt3DimMask)
// ... oder wenn Wert gleich 
#define ParamLOG_fE2Low2Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Dpt3Dir)) & LOG_fE2Low2Dpt3DirMask) >> LOG_fE2Low2Dpt3DirShift)
// 
#define ParamLOG_fE2Low2Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Dpt3Dim)) & LOG_fE2Low2Dpt3DimMask)
// ... oder wenn Wert gleich 
#define ParamLOG_fE2Low3Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Dpt3Dir)) & LOG_fE2Low3Dpt3DirMask) >> LOG_fE2Low3Dpt3DirShift)
// 
#define ParamLOG_fE2Low3Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Dpt3Dim)) & LOG_fE2Low3Dpt3DimMask)
// Eingang ist konstant
#define ParamLOG_fE2LowDpt3FixDir                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt3FixDir)) & LOG_fE2LowDpt3FixDirMask) >> LOG_fE2LowDpt3FixDirShift)
// 
#define ParamLOG_fE2LowDpt3FixDim                    (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt3FixDim)) & LOG_fE2LowDpt3FixDimMask)
// Von-Wert
#define ParamLOG_fE2LowDpt5                          (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt5)))
// Bis-Wert
#define ParamLOG_fE2HighDpt5                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2HighDpt5)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE2Low0Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE2Low1Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE2Low2Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE2Low3Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE2Low4Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low4Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE2Low5Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low5Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE2Low6Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low6Dpt5In)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt5Fix                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt5Fix)))
// Von-Wert
#define ParamLOG_fE2LowDpt5001                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt5001)))
// Bis-Wert
#define ParamLOG_fE2HighDpt5001                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2HighDpt5001)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE2Low0Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE2Low1Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE2Low2Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE2Low3Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE2Low4Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low4Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE2Low5Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low5Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE2Low6Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low6Dpt5xIn)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt5xFix                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt5xFix)))
// Von-Wert
#define ParamLOG_fE2LowDpt6                          ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt6)))
// Bis-Wert
#define ParamLOG_fE2HighDpt6                         ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2HighDpt6)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE2Low0Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE2Low1Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE2Low2Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE2Low3Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE2Low4Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low4Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE2Low5Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low5Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE2Low6Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low6Dpt6In)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt6Fix                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt6Fix)))
// Von-Wert
#define ParamLOG_fE2LowDpt7                          (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2LowDpt7)))
// Bis-Wert
#define ParamLOG_fE2HighDpt7                         (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2HighDpt7)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE2Low0Dpt7In                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2Low0Dpt7In)))
// ... oder bei Wert
#define ParamLOG_fE2Low1Dpt7In                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2Low1Dpt7In)))
// ... oder bei Wert
#define ParamLOG_fE2Low2Dpt7In                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2Low2Dpt7In)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt7Fix                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2LowDpt7Fix)))
// Von-Wert
#define ParamLOG_fE2LowDpt8                          ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE2LowDpt8)))
// Bis-Wert
#define ParamLOG_fE2HighDpt8                         ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE2HighDpt8)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE2Low0Dpt8In                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE2Low0Dpt8In)))
// ... oder bei Wert
#define ParamLOG_fE2Low1Dpt8In                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE2Low1Dpt8In)))
// ... oder bei Wert
#define ParamLOG_fE2Low2Dpt8In                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE2Low2Dpt8In)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt8Fix                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE2LowDpt8Fix)))
// Von-Wert
#define ParamLOG_fE2LowDpt9                          (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2LowDpt9), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE2HighDpt9                         (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2HighDpt9), Float_Enc_IEEE754Single))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt9Fix                       (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2LowDpt9Fix), Float_Enc_IEEE754Single))
// Von-Wert
#define ParamLOG_fE2LowDpt12                         (knx.paramInt(LOG_ParamCalcIndex(LOG_fE2LowDpt12)))
// Bis-Wert
#define ParamLOG_fE2HighDpt12                        (knx.paramInt(LOG_ParamCalcIndex(LOG_fE2HighDpt12)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt12Fix                      (knx.paramInt(LOG_ParamCalcIndex(LOG_fE2LowDpt12Fix)))
// Von-Wert
#define ParamLOG_fE2LowDpt13                         ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2LowDpt13)))
// Bis-Wert
#define ParamLOG_fE2HighDpt13                        ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2HighDpt13)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt13Fix                      ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2LowDpt13Fix)))
// Von-Wert
#define ParamLOG_fE2LowDpt14                         (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2LowDpt14), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE2HighDpt14                        (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2HighDpt14), Float_Enc_IEEE754Single))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt14Fix                      (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2LowDpt14Fix), Float_Enc_IEEE754Single))
// Eingang ist EIN bei Szene
#define ParamLOG_fE2Low0Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE2Low1Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE2Low2Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE2Low3Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE2Low4Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low4Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE2Low5Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low5Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE2Low6Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low6Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE2Low7Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low7Dpt17)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt17Fix                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt17Fix)))
// Von-Wert
#define ParamLOG_fE2LowDptRGB                        ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2LowDptRGB)))
// Bis-Wert
#define ParamLOG_fE2HighDptRGB                       ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2HighDptRGB)))
// Eingang ist konstant
#define ParamLOG_fE2LowDptRGBFix                     ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2LowDptRGBFix)))
// Zeitbezug
#define ParamLOG_fTd1DuskDawn                        (PT_DuskDawn)((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1DuskDawn)) & LOG_fTd1DuskDawnMask) >> LOG_fTd1DuskDawnShift)
// Zeitbezug
#define ParamLOG_fTd2DuskDawn                        (PT_DuskDawn)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2DuskDawn)) & LOG_fTd2DuskDawnMask)
// Zeitbezug
#define ParamLOG_fTd3DuskDawn                        (PT_DuskDawn)((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3DuskDawn)) & LOG_fTd3DuskDawnMask) >> LOG_fTd3DuskDawnShift)
// Zeitbezug
#define ParamLOG_fTd4DuskDawn                        (PT_DuskDawn)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4DuskDawn)) & LOG_fTd4DuskDawnMask)
// Zeitbezug
#define ParamLOG_fTd5DuskDawn                        (PT_DuskDawn)((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5DuskDawn)) & LOG_fTd5DuskDawnMask) >> LOG_fTd5DuskDawnShift)
// Zeitbezug
#define ParamLOG_fTd6DuskDawn                        (PT_DuskDawn)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6DuskDawn)) & LOG_fTd6DuskDawnMask)
// Zeitbezug
#define ParamLOG_fTd7DuskDawn                        (PT_DuskDawn)((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7DuskDawn)) & LOG_fTd7DuskDawnMask) >> LOG_fTd7DuskDawnShift)
// Zeitbezug
#define ParamLOG_fTd8DuskDawn                        (PT_DuskDawn)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8DuskDawn)) & LOG_fTd8DuskDawnMask)
// Typ der Zeitschaltuhr
#define ParamLOG_fTYearDay                           (PT_YearDay)((knx.paramByte(LOG_ParamCalcIndex(LOG_fTYearDay)) & LOG_fTYearDayMask) >> LOG_fTYearDayShift)
// Feiertagsbehandlung
#define ParamLOG_fTHoliday                           (PT_Holiday)((knx.paramByte(LOG_ParamCalcIndex(LOG_fTHoliday)) & LOG_fTHolidayMask) >> LOG_fTHolidayShift)
// Bei Neustart letzte Schaltzeit nachholen
#define ParamLOG_fTRestoreState                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTRestoreState)) & LOG_fTRestoreStateMask) >> LOG_fTRestoreStateShift)
// Urlaubsbehandlung
#define ParamLOG_fTVacation                          (PT_Vacation)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTVacation)) & LOG_fTVacationMask)
// Zahlenwert
#define ParamLOG_fTd1ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1ValueNum)))
// Zahlenwert
#define ParamLOG_fTd2ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2ValueNum)))
// Zahlenwert
#define ParamLOG_fTd3ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3ValueNum)))
// Zahlenwert
#define ParamLOG_fTd4ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4ValueNum)))
// Zahlenwert
#define ParamLOG_fTd5ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5ValueNum)))
// Zahlenwert
#define ParamLOG_fTd6ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6ValueNum)))
// Zahlenwert
#define ParamLOG_fTd7ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7ValueNum)))
// Zahlenwert
#define ParamLOG_fTd8ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8ValueNum)))
// Schaltwert
#define ParamLOG_fTd1Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1Value)) & LOG_fTd1ValueMask))
// Grad
#define ParamLOG_fTd1Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1Degree)) & LOG_fTd1DegreeMask) >> LOG_fTd1DegreeShift)
// Stunde
#define ParamLOG_fTd1HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1HourAbs)) & LOG_fTd1HourAbsMask) >> LOG_fTd1HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd1HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1HourRel)) & LOG_fTd1HourRelMask) >> LOG_fTd1HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd1HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1HourRelShort)) & LOG_fTd1HourRelShortMask) >> LOG_fTd1HourRelShortShift)
// Minute
#define ParamLOG_fTd1MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1MinuteAbs)))
// Minute
#define ParamLOG_fTd1MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1MinuteRel)))
// Wochentag
#define ParamLOG_fTd1Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1Weekday)) & LOG_fTd1WeekdayMask)
// Schaltwert
#define ParamLOG_fTd2Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2Value)) & LOG_fTd2ValueMask))
// Grad
#define ParamLOG_fTd2Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2Degree)) & LOG_fTd2DegreeMask) >> LOG_fTd2DegreeShift)
// Stunde
#define ParamLOG_fTd2HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2HourAbs)) & LOG_fTd2HourAbsMask) >> LOG_fTd2HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd2HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2HourRel)) & LOG_fTd2HourRelMask) >> LOG_fTd2HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd2HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2HourRelShort)) & LOG_fTd2HourRelShortMask) >> LOG_fTd2HourRelShortShift)
// Minute
#define ParamLOG_fTd2MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2MinuteAbs)))
// Minute
#define ParamLOG_fTd2MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2MinuteRel)))
// Wochentag
#define ParamLOG_fTd2Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2Weekday)) & LOG_fTd2WeekdayMask)
// Schaltwert
#define ParamLOG_fTd3Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3Value)) & LOG_fTd3ValueMask))
// Grad
#define ParamLOG_fTd3Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3Degree)) & LOG_fTd3DegreeMask) >> LOG_fTd3DegreeShift)
// Stunde
#define ParamLOG_fTd3HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3HourAbs)) & LOG_fTd3HourAbsMask) >> LOG_fTd3HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd3HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3HourRel)) & LOG_fTd3HourRelMask) >> LOG_fTd3HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd3HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3HourRelShort)) & LOG_fTd3HourRelShortMask) >> LOG_fTd3HourRelShortShift)
// Minute
#define ParamLOG_fTd3MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3MinuteAbs)))
// Minute
#define ParamLOG_fTd3MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3MinuteRel)))
// Wochentag
#define ParamLOG_fTd3Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3Weekday)) & LOG_fTd3WeekdayMask)
// Schaltwert
#define ParamLOG_fTd4Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4Value)) & LOG_fTd4ValueMask))
// Grad
#define ParamLOG_fTd4Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4Degree)) & LOG_fTd4DegreeMask) >> LOG_fTd4DegreeShift)
// Stunde
#define ParamLOG_fTd4HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4HourAbs)) & LOG_fTd4HourAbsMask) >> LOG_fTd4HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd4HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4HourRel)) & LOG_fTd4HourRelMask) >> LOG_fTd4HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd4HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4HourRelShort)) & LOG_fTd4HourRelShortMask) >> LOG_fTd4HourRelShortShift)
// Minute
#define ParamLOG_fTd4MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4MinuteAbs)))
// Minute
#define ParamLOG_fTd4MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4MinuteRel)))
// Wochentag
#define ParamLOG_fTd4Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4Weekday)) & LOG_fTd4WeekdayMask)
// Schaltwert
#define ParamLOG_fTd5Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5Value)) & LOG_fTd5ValueMask))
// Grad
#define ParamLOG_fTd5Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5Degree)) & LOG_fTd5DegreeMask) >> LOG_fTd5DegreeShift)
// Stunde
#define ParamLOG_fTd5HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5HourAbs)) & LOG_fTd5HourAbsMask) >> LOG_fTd5HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd5HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5HourRel)) & LOG_fTd5HourRelMask) >> LOG_fTd5HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd5HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5HourRelShort)) & LOG_fTd5HourRelShortMask) >> LOG_fTd5HourRelShortShift)
// Minute
#define ParamLOG_fTd5MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5MinuteAbs)))
// Minute
#define ParamLOG_fTd5MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5MinuteRel)))
// Wochentag
#define ParamLOG_fTd5Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5Weekday)) & LOG_fTd5WeekdayMask)
// Schaltwert
#define ParamLOG_fTd6Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6Value)) & LOG_fTd6ValueMask))
// Grad
#define ParamLOG_fTd6Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6Degree)) & LOG_fTd6DegreeMask) >> LOG_fTd6DegreeShift)
// Stunde
#define ParamLOG_fTd6HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6HourAbs)) & LOG_fTd6HourAbsMask) >> LOG_fTd6HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd6HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6HourRel)) & LOG_fTd6HourRelMask) >> LOG_fTd6HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd6HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6HourRelShort)) & LOG_fTd6HourRelShortMask) >> LOG_fTd6HourRelShortShift)
// Minute
#define ParamLOG_fTd6MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6MinuteAbs)))
// Minute
#define ParamLOG_fTd6MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6MinuteRel)))
// Wochentag
#define ParamLOG_fTd6Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6Weekday)) & LOG_fTd6WeekdayMask)
// Schaltwert
#define ParamLOG_fTd7Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7Value)) & LOG_fTd7ValueMask))
// Grad
#define ParamLOG_fTd7Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7Degree)) & LOG_fTd7DegreeMask) >> LOG_fTd7DegreeShift)
// Stunde
#define ParamLOG_fTd7HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7HourAbs)) & LOG_fTd7HourAbsMask) >> LOG_fTd7HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd7HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7HourRel)) & LOG_fTd7HourRelMask) >> LOG_fTd7HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd7HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7HourRelShort)) & LOG_fTd7HourRelShortMask) >> LOG_fTd7HourRelShortShift)
// Minute
#define ParamLOG_fTd7MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7MinuteAbs)))
// Minute
#define ParamLOG_fTd7MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7MinuteRel)))
// Wochentag
#define ParamLOG_fTd7Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7Weekday)) & LOG_fTd7WeekdayMask)
// Schaltwert
#define ParamLOG_fTd8Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8Value)) & LOG_fTd8ValueMask))
// Grad
#define ParamLOG_fTd8Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8Degree)) & LOG_fTd8DegreeMask) >> LOG_fTd8DegreeShift)
// Stunde
#define ParamLOG_fTd8HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8HourAbs)) & LOG_fTd8HourAbsMask) >> LOG_fTd8HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd8HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8HourRel)) & LOG_fTd8HourRelMask) >> LOG_fTd8HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd8HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8HourRelShort)) & LOG_fTd8HourRelShortMask) >> LOG_fTd8HourRelShortShift)
// Minute
#define ParamLOG_fTd8MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8MinuteAbs)))
// Minute
#define ParamLOG_fTd8MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8MinuteRel)))
// Wochentag
#define ParamLOG_fTd8Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8Weekday)) & LOG_fTd8WeekdayMask)
// Mo
#define ParamLOG_fTy1Weekday1                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Weekday1)) & LOG_fTy1Weekday1Mask))
// Di
#define ParamLOG_fTy1Weekday2                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Weekday2)) & LOG_fTy1Weekday2Mask))
// Mi
#define ParamLOG_fTy1Weekday3                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Weekday3)) & LOG_fTy1Weekday3Mask))
// Do
#define ParamLOG_fTy1Weekday4                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Weekday4)) & LOG_fTy1Weekday4Mask))
// Fr
#define ParamLOG_fTy1Weekday5                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Weekday5)) & LOG_fTy1Weekday5Mask))
// Sa
#define ParamLOG_fTy1Weekday6                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Weekday6)) & LOG_fTy1Weekday6Mask))
// So
#define ParamLOG_fTy1Weekday7                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Weekday7)) & LOG_fTy1Weekday7Mask))
// Tag
#define ParamLOG_fTy1Day                             ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Day)) & LOG_fTy1DayMask) >> LOG_fTy1DayShift)
// Wochentag
#define ParamLOG_fTy1IsWeekday                       ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1IsWeekday)) & LOG_fTy1IsWeekdayMask))
// Monat
#define ParamLOG_fTy1Month                           ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Month)) & LOG_fTy1MonthMask) >> LOG_fTy1MonthShift)
// Mo
#define ParamLOG_fTy2Weekday1                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Weekday1)) & LOG_fTy2Weekday1Mask))
// Di
#define ParamLOG_fTy2Weekday2                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Weekday2)) & LOG_fTy2Weekday2Mask))
// Mi
#define ParamLOG_fTy2Weekday3                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Weekday3)) & LOG_fTy2Weekday3Mask))
// Do
#define ParamLOG_fTy2Weekday4                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Weekday4)) & LOG_fTy2Weekday4Mask))
// Fr
#define ParamLOG_fTy2Weekday5                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Weekday5)) & LOG_fTy2Weekday5Mask))
// Sa
#define ParamLOG_fTy2Weekday6                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Weekday6)) & LOG_fTy2Weekday6Mask))
// So
#define ParamLOG_fTy2Weekday7                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Weekday7)) & LOG_fTy2Weekday7Mask))
// Tag
#define ParamLOG_fTy2Day                             ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Day)) & LOG_fTy2DayMask) >> LOG_fTy2DayShift)
// Wochentag
#define ParamLOG_fTy2IsWeekday                       ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2IsWeekday)) & LOG_fTy2IsWeekdayMask))
// Monat
#define ParamLOG_fTy2Month                           ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Month)) & LOG_fTy2MonthMask) >> LOG_fTy2MonthShift)
// Mo
#define ParamLOG_fTy3Weekday1                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Weekday1)) & LOG_fTy3Weekday1Mask))
// Di
#define ParamLOG_fTy3Weekday2                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Weekday2)) & LOG_fTy3Weekday2Mask))
// Mi
#define ParamLOG_fTy3Weekday3                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Weekday3)) & LOG_fTy3Weekday3Mask))
// Do
#define ParamLOG_fTy3Weekday4                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Weekday4)) & LOG_fTy3Weekday4Mask))
// Fr
#define ParamLOG_fTy3Weekday5                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Weekday5)) & LOG_fTy3Weekday5Mask))
// Sa
#define ParamLOG_fTy3Weekday6                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Weekday6)) & LOG_fTy3Weekday6Mask))
// So
#define ParamLOG_fTy3Weekday7                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Weekday7)) & LOG_fTy3Weekday7Mask))
// Tag
#define ParamLOG_fTy3Day                             ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Day)) & LOG_fTy3DayMask) >> LOG_fTy3DayShift)
// Wochentag
#define ParamLOG_fTy3IsWeekday                       ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3IsWeekday)) & LOG_fTy3IsWeekdayMask))
// Monat
#define ParamLOG_fTy3Month                           ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Month)) & LOG_fTy3MonthMask) >> LOG_fTy3MonthShift)
// Mo
#define ParamLOG_fTy4Weekday1                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Weekday1)) & LOG_fTy4Weekday1Mask))
// Di
#define ParamLOG_fTy4Weekday2                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Weekday2)) & LOG_fTy4Weekday2Mask))
// Mi
#define ParamLOG_fTy4Weekday3                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Weekday3)) & LOG_fTy4Weekday3Mask))
// Do
#define ParamLOG_fTy4Weekday4                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Weekday4)) & LOG_fTy4Weekday4Mask))
// Fr
#define ParamLOG_fTy4Weekday5                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Weekday5)) & LOG_fTy4Weekday5Mask))
// Sa
#define ParamLOG_fTy4Weekday6                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Weekday6)) & LOG_fTy4Weekday6Mask))
// So
#define ParamLOG_fTy4Weekday7                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Weekday7)) & LOG_fTy4Weekday7Mask))
// Tag
#define ParamLOG_fTy4Day                             ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Day)) & LOG_fTy4DayMask) >> LOG_fTy4DayShift)
// Wochentag
#define ParamLOG_fTy4IsWeekday                       ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4IsWeekday)) & LOG_fTy4IsWeekdayMask))
// Monat
#define ParamLOG_fTy4Month                           ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Month)) & LOG_fTy4MonthMask) >> LOG_fTy4MonthShift)
// Interner Eingang 3
#define ParamLOG_fI1                                 (PT_InputEnable)((knx.paramByte(LOG_ParamCalcIndex(LOG_fI1)) & LOG_fI1Mask) >> LOG_fI1Shift)
// Art der Verknüpfung
#define ParamLOG_fI1Kind                             (PT_KORelInput)((knx.paramByte(LOG_ParamCalcIndex(LOG_fI1Kind)) & LOG_fI1KindMask) >> LOG_fI1KindShift)
// Internen Eingang als Trigger nutzen(ist immer logisch EIN)
#define ParamLOG_fI1AsTrigger                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fI1AsTrigger)) & LOG_fI1AsTriggerMask))
// Interner Eingang wird versorgt vom
#define ParamLOG_fI1InternalInputType                (PT_InternalInputType)((knx.paramByte(LOG_ParamCalcIndex(LOG_fI1InternalInputType)) & LOG_fI1InternalInputTypeMask) >> LOG_fI1InternalInputTypeShift)
// Internen Eingang verbinden mit Kanal Nr.
#define ParamLOG_fI1Function                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fI1Function)))
// Internen Eingang verbinden mit Kanal Nr.
#define ParamLOG_fI1FunctionRel                      ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fI1FunctionRel)))
// Statuskanal
#define ParamLOG_fI1StatusLed                        (knx.paramWord(LOG_ParamCalcIndex(LOG_fI1StatusLed)))
// Interner Eingang 4
#define ParamLOG_fI2                                 (PT_InputEnable)((knx.paramByte(LOG_ParamCalcIndex(LOG_fI2)) & LOG_fI2Mask) >> LOG_fI2Shift)
// Art der Verknüpfung
#define ParamLOG_fI2Kind                             (PT_KORelInput)((knx.paramByte(LOG_ParamCalcIndex(LOG_fI2Kind)) & LOG_fI2KindMask) >> LOG_fI2KindShift)
// Internen Eingang als Trigger nutzen(ist immer logisch EIN)
#define ParamLOG_fI2AsTrigger                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fI2AsTrigger)) & LOG_fI2AsTriggerMask))
// Interner Eingang wird versorgt vom
#define ParamLOG_fI2InternalInputType                (PT_InternalInputType)((knx.paramByte(LOG_ParamCalcIndex(LOG_fI2InternalInputType)) & LOG_fI2InternalInputTypeMask) >> LOG_fI2InternalInputTypeShift)
// Internen Eingang verbinden mit Kanal Nr.
#define ParamLOG_fI2Function                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fI2Function)))
// Internen Eingang verbinden mit Kanal Nr.
#define ParamLOG_fI2FunctionRel                      ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fI2FunctionRel)))
// Statuskanal
#define ParamLOG_fI2StatusLed                        (knx.paramWord(LOG_ParamCalcIndex(LOG_fI2StatusLed)))
// Zeit für Treppenlicht
#define ParamLOG_fOStairtimeBase                     ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOStairtimeBase)) & LOG_fOStairtimeBaseMask) >> LOG_fOStairtimeBaseShift)
// Zeit für Treppenlicht
#define ParamLOG_fOStairtimeTime                     (knx.paramWord(LOG_ParamCalcIndex(LOG_fOStairtimeTime)) & LOG_fOStairtimeTimeMask)
// Zeit für Treppenlicht (in Millisekunden)
#define ParamLOG_fOStairtimeTimeMS                   (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fOStairtimeTime))))
// Treppenlicht blinkt im Rhythmus
#define ParamLOG_fOBlinkBase                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOBlinkBase)) & LOG_fOBlinkBaseMask) >> LOG_fOBlinkBaseShift)
// Treppenlicht blinkt im Rhythmus
#define ParamLOG_fOBlinkTime                         (knx.paramWord(LOG_ParamCalcIndex(LOG_fOBlinkTime)) & LOG_fOBlinkTimeMask)
// Treppenlicht blinkt im Rhythmus (in Millisekunden)
#define ParamLOG_fOBlinkTimeMS                       (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fOBlinkTime))))
// EINschalten wird verzögert um
#define ParamLOG_fODelayOnBase                       ((knx.paramByte(LOG_ParamCalcIndex(LOG_fODelayOnBase)) & LOG_fODelayOnBaseMask) >> LOG_fODelayOnBaseShift)
// EINschalten wird verzögert um
#define ParamLOG_fODelayOnTime                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fODelayOnTime)) & LOG_fODelayOnTimeMask)
// EINschalten wird verzögert um (in Millisekunden)
#define ParamLOG_fODelayOnTimeMS                     (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fODelayOnTime))))
// AUSschalten wird verzögert um
#define ParamLOG_fODelayOffBase                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fODelayOffBase)) & LOG_fODelayOffBaseMask) >> LOG_fODelayOffBaseShift)
// AUSschalten wird verzögert um
#define ParamLOG_fODelayOffTime                      (knx.paramWord(LOG_ParamCalcIndex(LOG_fODelayOffTime)) & LOG_fODelayOffTimeMask)
// AUSschalten wird verzögert um (in Millisekunden)
#define ParamLOG_fODelayOffTimeMS                    (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fODelayOffTime))))
// EIN-Telegramm wird wiederholt alle
#define ParamLOG_fORepeatOnBase                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fORepeatOnBase)) & LOG_fORepeatOnBaseMask) >> LOG_fORepeatOnBaseShift)
// EIN-Telegramm wird wiederholt alle
#define ParamLOG_fORepeatOnTime                      (knx.paramWord(LOG_ParamCalcIndex(LOG_fORepeatOnTime)) & LOG_fORepeatOnTimeMask)
// EIN-Telegramm wird wiederholt alle (in Millisekunden)
#define ParamLOG_fORepeatOnTimeMS                    (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fORepeatOnTime))))
// AUS-Telegramm wird wiederholt alle
#define ParamLOG_fORepeatOffBase                     ((knx.paramByte(LOG_ParamCalcIndex(LOG_fORepeatOffBase)) & LOG_fORepeatOffBaseMask) >> LOG_fORepeatOffBaseShift)
// AUS-Telegramm wird wiederholt alle
#define ParamLOG_fORepeatOffTime                     (knx.paramWord(LOG_ParamCalcIndex(LOG_fORepeatOffTime)) & LOG_fORepeatOffTimeMask)
// AUS-Telegramm wird wiederholt alle (in Millisekunden)
#define ParamLOG_fORepeatOffTimeMS                   (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fORepeatOffTime))))
// Ausgang schaltet zeitverzögert
#define ParamLOG_fODelay                             ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fODelay)) & LOG_fODelayMask))
// Erneutes EIN führt zu
#define ParamLOG_fODelayOnRepeat                     (PT_OnOffRepeat)((knx.paramByte(LOG_ParamCalcIndex(LOG_fODelayOnRepeat)) & LOG_fODelayOnRepeatMask) >> LOG_fODelayOnRepeatShift)
// Darauffolgendes AUS führt zu
#define ParamLOG_fODelayOnReset                      (PT_OnOffReset)((knx.paramByte(LOG_ParamCalcIndex(LOG_fODelayOnReset)) & LOG_fODelayOnResetMask) >> LOG_fODelayOnResetShift)
// Erneutes AUS führt zu
#define ParamLOG_fODelayOffRepeat                    (PT_OnOffRepeat)((knx.paramByte(LOG_ParamCalcIndex(LOG_fODelayOffRepeat)) & LOG_fODelayOffRepeatMask) >> LOG_fODelayOffRepeatShift)
// Darauffolgendes EIN führt zu
#define ParamLOG_fODelayOffReset                     (PT_OnOffReset)((knx.paramByte(LOG_ParamCalcIndex(LOG_fODelayOffReset)) & LOG_fODelayOffResetMask) >> LOG_fODelayOffResetShift)
// Ausgang hat eine Treppenlichtfunktion
#define ParamLOG_fOStair                             ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOStair)) & LOG_fOStairMask))
// Treppenlicht kann verlängert werden
#define ParamLOG_fORetrigger                         ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fORetrigger)) & LOG_fORetriggerMask))
// Treppenlicht kann ausgeschaltet werden
#define ParamLOG_fOStairOff                          ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOStairOff)) & LOG_fOStairOffMask))
// Ausgang wiederholt zyklisch
#define ParamLOG_fORepeat                            ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fORepeat)) & LOG_fORepeatMask))
// Wiederholungsfilter
#define ParamLOG_fOOutputFilter                      (PT_OutputFilter)((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOutputFilter)) & LOG_fOOutputFilterMask) >> LOG_fOOutputFilterShift)
// Sendeverhalten für Ausgang
#define ParamLOG_fOSendOnChange                      (PT_SendOnChange)((knx.paramByte(LOG_ParamCalcIndex(LOG_fOSendOnChange)) & LOG_fOSendOnChangeMask) >> LOG_fOSendOnChangeShift)
// Sperre aktivieren
#define ParamLOG_fOLockEnabled                       ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOLockEnabled)) & LOG_fOLockEnabledMask))
// DPT für Ausgang
#define ParamLOG_fODpt                               (PT_LogicDpt)(knx.paramByte(LOG_ParamCalcIndex(LOG_fODpt)))
// Beim Sperren
#define ParamLOG_fOLockTriggerLock                   (PT_LockTrigger)((knx.paramByte(LOG_ParamCalcIndex(LOG_fOLockTriggerLock)) & LOG_fOLockTriggerLockMask) >> LOG_fOLockTriggerLockShift)
// Beim Entsperren
#define ParamLOG_fOLockTriggerUnlock                 (PT_LockTrigger)((knx.paramByte(LOG_ParamCalcIndex(LOG_fOLockTriggerUnlock)) & LOG_fOLockTriggerUnlockMask) >> LOG_fOLockTriggerUnlockShift)
// Anschließend die Signalverarbeitung
#define ParamLOG_fOLockResetQueue                    (PT_LockResetQueue)((knx.paramByte(LOG_ParamCalcIndex(LOG_fOLockResetQueue)) & LOG_fOLockResetQueueMask) >> LOG_fOLockResetQueueShift)
// Art der Verknüpfung
#define ParamLOG_fOLockKind                          (PT_KORelInput)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOLockKind)) & LOG_fOLockKindMask)
// Sperre verbinden mit Kanal Nr.
#define ParamLOG_fOLockFunction                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fOLockFunction)))
// Sperre verbinden mit Kanal Nr.
#define ParamLOG_fOLockFunctionRel                   ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fOLockFunctionRel)))
// Wert für EIN senden?
#define ParamLOG_fOOnAll                             (PT_OutputSend)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnAll)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt1                            (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt1)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt2                            (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt2)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt3Dir                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt3Dir)) & LOG_fOOnDpt3DirMask) >> LOG_fOOnDpt3DirShift)
// 
#define ParamLOG_fOOnDpt3Dim                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt3Dim)) & LOG_fOOnDpt3DimMask)
//     Wert für EIN senden als 
#define ParamLOG_fOOnDpt5                            (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt5)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt5001                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt5001)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt6                            ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt6)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt7                            (knx.paramWord(LOG_ParamCalcIndex(LOG_fOOnDpt7)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt8                            ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fOOnDpt8)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt9                            (knx.paramFloat(LOG_ParamCalcIndex(LOG_fOOnDpt9), Float_Enc_IEEE754Single))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt12                           (knx.paramInt(LOG_ParamCalcIndex(LOG_fOOnDpt12)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt13                           ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fOOnDpt13)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt14                           (knx.paramFloat(LOG_ParamCalcIndex(LOG_fOOnDpt14), Float_Enc_IEEE754Single))
//     Wert für EIN senden als 
#define ParamLOG_fOOnDpt16                           (knx.paramData(LOG_ParamCalcIndex(LOG_fOOnDpt16)))
#define ParamLOG_fOOnDpt16Str                        (knx.paramString(LOG_ParamCalcIndex(LOG_fOOnDpt16), LOG_fOOnDpt16Length))
//     Wert für EIN senden als 
#define ParamLOG_fOOnDpt17                           (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt17)))
//     Wert für EIN senden als (3-Byte-RGB)
#define ParamLOG_fOOnRGB                             ((knx.paramInt(LOG_ParamCalcIndex(LOG_fOOnRGB)) & LOG_fOOnRGBMask) >> LOG_fOOnRGBShift)
//     Status-LED Kanal
#define ParamLOG_fOOnLedProvider                     (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnLedProvider)) & LOG_fOOnLedProviderMask)
//     Status-LED Effekt
#define ParamLOG_fOOnLedEffect                       (PT_StatusLedEffect)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnLedEffect)) & LOG_fOOnLedEffectMask)
//     Status-LED Effektdauer
#define ParamLOG_fOOnLedDuration                     (knx.paramWord(LOG_ParamCalcIndex(LOG_fOOnLedDuration)))
// 
#define ParamLOG_fOOnPAArea                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnPAArea)) & LOG_fOOnPAAreaMask) >> LOG_fOOnPAAreaShift)
// 
#define ParamLOG_fOOnPALine                          (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnPALine)) & LOG_fOOnPALineMask)
// 
#define ParamLOG_fOOnPADevice                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnPADevice)))
//     Wert für EIN ermitteln als
#define ParamLOG_fOOnFunction                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnFunction)))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fOOnKOKind                          (PT_KORelInput)((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnKOKind)) & LOG_fOOnKOKindMask) >> LOG_fOOnKOKindShift)
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fOOnKONumber                        (knx.paramWord(LOG_ParamCalcIndex(LOG_fOOnKONumber)))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fOOnKONumberRel                     ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fOOnKONumberRel)))
//     DPT des Kommunikationsobjekts
#define ParamLOG_fOOnKODpt                           (PT_LogicDpt)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnKODpt)))
//     Wert für EIN an ein zusätzliches    KO senden?
#define ParamLOG_fOOnKOSend                          (PT_KORelInput)((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnKOSend)) & LOG_fOOnKOSendMask) >> LOG_fOOnKOSendShift)
//         Nummer des zusätzlichen KO
#define ParamLOG_fOOnKOSendNumber                    (knx.paramWord(LOG_ParamCalcIndex(LOG_fOOnKOSendNumber)))
//         Nummer des zusätzlichen KO
#define ParamLOG_fOOnKOSendNumberRel                 ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fOOnKOSendNumberRel)))
// Wert für AUS senden?
#define ParamLOG_fOOffAll                            (PT_OutputSend)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffAll)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt1                           (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt1)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt2                           (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt2)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt3Dir                        ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt3Dir)) & LOG_fOOffDpt3DirMask) >> LOG_fOOffDpt3DirShift)
// 
#define ParamLOG_fOOffDpt3Dim                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt3Dim)) & LOG_fOOffDpt3DimMask)
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt5                           (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt5)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt5001                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt5001)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt6                           ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt6)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt7                           (knx.paramWord(LOG_ParamCalcIndex(LOG_fOOffDpt7)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt8                           ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fOOffDpt8)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt9                           (knx.paramFloat(LOG_ParamCalcIndex(LOG_fOOffDpt9), Float_Enc_IEEE754Single))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt12                          (knx.paramInt(LOG_ParamCalcIndex(LOG_fOOffDpt12)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt13                          ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fOOffDpt13)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt14                          (knx.paramFloat(LOG_ParamCalcIndex(LOG_fOOffDpt14), Float_Enc_IEEE754Single))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt16                          (knx.paramData(LOG_ParamCalcIndex(LOG_fOOffDpt16)))
#define ParamLOG_fOOffDpt16Str                       (knx.paramString(LOG_ParamCalcIndex(LOG_fOOffDpt16), LOG_fOOffDpt16Length))
//     Wert für AUS senden als 
#define ParamLOG_fOOffDpt17                          (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt17)))
//     Wert für AUS senden als (3-Byte-RGB)
#define ParamLOG_fOOffRGB                            ((knx.paramInt(LOG_ParamCalcIndex(LOG_fOOffRGB)) & LOG_fOOffRGBMask) >> LOG_fOOffRGBShift)
//     Status-LED-Kanal
#define ParamLOG_fOOffLedProvider                    (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffLedProvider)) & LOG_fOOffLedProviderMask)
//     Status-LED Effekt
#define ParamLOG_fOOffLedEffect                      (PT_StatusLedEffect)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffLedEffect)) & LOG_fOOffLedEffectMask)
//     Status-LED Effektdauer
#define ParamLOG_fOOffLedDuration                    (knx.paramWord(LOG_ParamCalcIndex(LOG_fOOffLedDuration)))
// 
#define ParamLOG_fOOffPAArea                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffPAArea)) & LOG_fOOffPAAreaMask) >> LOG_fOOffPAAreaShift)
// 
#define ParamLOG_fOOffPALine                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffPALine)) & LOG_fOOffPALineMask)
// 
#define ParamLOG_fOOffPADevice                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffPADevice)))
//     Wert für AUS ermitteln als
#define ParamLOG_fOOffFunction                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffFunction)))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fOOffKOKind                         (PT_KORelInput)((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffKOKind)) & LOG_fOOffKOKindMask) >> LOG_fOOffKOKindShift)
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fOOffKONumber                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fOOffKONumber)))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fOOffKONumberRel                    ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fOOffKONumberRel)))
//     DPT des Kommunikationsobjekts
#define ParamLOG_fOOffKODpt                          (PT_LogicDpt)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffKODpt)))
//     Wert für AUS an ein zusätzliches    KO senden?
#define ParamLOG_fOOffKOSend                         (PT_KORelInput)((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffKOSend)) & LOG_fOOffKOSendMask) >> LOG_fOOffKOSendShift)
//         Nummer des zusätzlichen KO
#define ParamLOG_fOOffKOSendNumber                   (knx.paramWord(LOG_ParamCalcIndex(LOG_fOOffKOSendNumber)))
//         Nummer des zusätzlichen KO
#define ParamLOG_fOOffKOSendNumberRel                ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fOOffKOSendNumberRel)))

// deprecated
#define LOG_KoOffset 100

// Communication objects per channel (multiple occurrence)
#define LOG_KoBlockOffset 100
#define LOG_KoBlockSize 3

#define LOG_KoCalcNumber(index) (index + LOG_KoBlockOffset + _channelIndex * LOG_KoBlockSize)
#define LOG_KoCalcIndex(number) ((number >= LOG_KoCalcNumber(0) && number < LOG_KoCalcNumber(LOG_KoBlockSize)) ? (number - LOG_KoBlockOffset) % LOG_KoBlockSize : -1)
#define LOG_KoCalcChannel(number) ((number >= LOG_KoBlockOffset && number < LOG_KoBlockOffset + LOG_ChannelCount * LOG_KoBlockSize) ? (number - LOG_KoBlockOffset) / LOG_KoBlockSize : -1)

#define LOG_KoKOfE1 0
#define LOG_KoKOfE2 1
#define LOG_KoKOfO 2

// Eingang 1
#define KoLOG_KOfE1                               (knx.getGroupObject(LOG_KoCalcNumber(LOG_KoKOfE1)))
// Eingang 2
#define KoLOG_KOfE2                               (knx.getGroupObject(LOG_KoCalcNumber(LOG_KoKOfE2)))
// Ausgang
#define KoLOG_KOfO                                (knx.getGroupObject(LOG_KoCalcNumber(LOG_KoKOfO)))

#define FCB_ChannelCount 15

// Parameter per channel
#define FCB_ParamBlockOffset 14412
#define FCB_ParamBlockSize 81
#define FCB_ParamCalcIndex(index) (index + FCB_ParamBlockOffset + _channelIndex * FCB_ParamBlockSize)

#define FCB_CHChannelType                        0      // 8 Bits, Bit 7-0
#define FCB_CHChannelDisabled                    1      // 1 Bit, Bit 7
#define     FCB_CHChannelDisabledMask 0x80
#define     FCB_CHChannelDisabledShift 7
#define FCB_CHLogicKo0D                          2      // 2 Bits, Bit 7-6
#define     FCB_CHLogicKo0DMask 0xC0
#define     FCB_CHLogicKo0DShift 6
#define FCB_CHLogicKo1D                          2      // 2 Bits, Bit 5-4
#define     FCB_CHLogicKo1DMask 0x30
#define     FCB_CHLogicKo1DShift 4
#define FCB_CHLogicKo2D                          2      // 2 Bits, Bit 3-2
#define     FCB_CHLogicKo2DMask 0x0C
#define     FCB_CHLogicKo2DShift 2
#define FCB_CHLogicKo3D                          2      // 2 Bits, Bit 1-0
#define     FCB_CHLogicKo3DMask 0x03
#define     FCB_CHLogicKo3DShift 0
#define FCB_CHLogicKo4D                          3      // 2 Bits, Bit 7-6
#define     FCB_CHLogicKo4DMask 0xC0
#define     FCB_CHLogicKo4DShift 6
#define FCB_CHLogicKo5D                          3      // 2 Bits, Bit 5-4
#define     FCB_CHLogicKo5DMask 0x30
#define     FCB_CHLogicKo5DShift 4
#define FCB_CHLogicKo6D                          3      // 2 Bits, Bit 3-2
#define     FCB_CHLogicKo6DMask 0x0C
#define     FCB_CHLogicKo6DShift 2
#define FCB_CHLogicKo7D                          3      // 2 Bits, Bit 1-0
#define     FCB_CHLogicKo7DMask 0x03
#define     FCB_CHLogicKo7DShift 0
#define FCB_CHLogicKo8D                          4      // 2 Bits, Bit 7-6
#define     FCB_CHLogicKo8DMask 0xC0
#define     FCB_CHLogicKo8DShift 6
#define FCB_CHLogicOutInv                        4      // 1 Bit, Bit 4
#define     FCB_CHLogicOutInvMask 0x10
#define     FCB_CHLogicOutInvShift 4
#define FCB_CHLogicBehavOut                      4      // 1 Bit, Bit 3
#define     FCB_CHLogicBehavOutMask 0x08
#define     FCB_CHLogicBehavOutShift 3
#define FCB_CHLogicBehavKo0                      5      // 4 Bits, Bit 7-4
#define     FCB_CHLogicBehavKo0Mask 0xF0
#define     FCB_CHLogicBehavKo0Shift 4
#define FCB_CHLogicBehavKo1                      5      // 4 Bits, Bit 3-0
#define     FCB_CHLogicBehavKo1Mask 0x0F
#define     FCB_CHLogicBehavKo1Shift 0
#define FCB_CHLogicBehavKo2                      6      // 4 Bits, Bit 7-4
#define     FCB_CHLogicBehavKo2Mask 0xF0
#define     FCB_CHLogicBehavKo2Shift 4
#define FCB_CHLogicBehavKo3                      6      // 4 Bits, Bit 3-0
#define     FCB_CHLogicBehavKo3Mask 0x0F
#define     FCB_CHLogicBehavKo3Shift 0
#define FCB_CHLogicBehavKo4                      7      // 4 Bits, Bit 7-4
#define     FCB_CHLogicBehavKo4Mask 0xF0
#define     FCB_CHLogicBehavKo4Shift 4
#define FCB_CHLogicBehavKo5                      7      // 4 Bits, Bit 3-0
#define     FCB_CHLogicBehavKo5Mask 0x0F
#define     FCB_CHLogicBehavKo5Shift 0
#define FCB_CHLogicBehavKo6                      8      // 4 Bits, Bit 7-4
#define     FCB_CHLogicBehavKo6Mask 0xF0
#define     FCB_CHLogicBehavKo6Shift 4
#define FCB_CHLogicBehavKo7                      8      // 4 Bits, Bit 3-0
#define     FCB_CHLogicBehavKo7Mask 0x0F
#define     FCB_CHLogicBehavKo7Shift 0
#define FCB_CHLogicBehavKo8                      9      // 4 Bits, Bit 7-4
#define     FCB_CHLogicBehavKo8Mask 0xF0
#define     FCB_CHLogicBehavKo8Shift 4
#define FCB_CHBayesianPrior                     10      // uint8_t
#define FCB_CHBayesianThreshold                 11      // uint8_t
#define FCB_CHBayesianEnableProbOutput          12      // 1 Bit, Bit 7
#define     FCB_CHBayesianEnableProbOutputMask 0x80
#define     FCB_CHBayesianEnableProbOutputShift 7
#define FCB_CHLogicKo0BayesProbTrue             15      // uint8_t
#define FCB_CHLogicKo0BayesProbFalse            16      // uint8_t
#define FCB_CHLogicKo1BayesProbTrue             17      // uint8_t
#define FCB_CHLogicKo1BayesProbFalse            18      // uint8_t
#define FCB_CHLogicKo2BayesProbTrue             19      // uint8_t
#define FCB_CHLogicKo2BayesProbFalse            20      // uint8_t
#define FCB_CHLogicKo3BayesProbTrue             21      // uint8_t
#define FCB_CHLogicKo3BayesProbFalse            22      // uint8_t
#define FCB_CHLogicKo4BayesProbTrue             23      // uint8_t
#define FCB_CHLogicKo4BayesProbFalse            24      // uint8_t
#define FCB_CHLogicKo5BayesProbTrue             25      // uint8_t
#define FCB_CHLogicKo5BayesProbFalse            26      // uint8_t
#define FCB_CHLogicKo6BayesProbTrue             27      // uint8_t
#define FCB_CHLogicKo6BayesProbFalse            28      // uint8_t
#define FCB_CHLogicKo7BayesProbTrue             29      // uint8_t
#define FCB_CHLogicKo7BayesProbFalse            30      // uint8_t
#define FCB_CHLogicKo8BayesProbTrue             31      // uint8_t
#define FCB_CHLogicKo8BayesProbFalse            32      // uint8_t
#define FCB_CHPrioKo0D                           2      // 2 Bits, Bit 7-6
#define     FCB_CHPrioKo0DMask 0xC0
#define     FCB_CHPrioKo0DShift 6
#define FCB_CHPrioKo1D                           2      // 2 Bits, Bit 5-4
#define     FCB_CHPrioKo1DMask 0x30
#define     FCB_CHPrioKo1DShift 4
#define FCB_CHPrioKo2D                           2      // 2 Bits, Bit 3-2
#define     FCB_CHPrioKo2DMask 0x0C
#define     FCB_CHPrioKo2DShift 2
#define FCB_CHPrioKo3D                           2      // 2 Bits, Bit 1-0
#define     FCB_CHPrioKo3DMask 0x03
#define     FCB_CHPrioKo3DShift 0
#define FCB_CHPrioKo4D                           3      // 2 Bits, Bit 7-6
#define     FCB_CHPrioKo4DMask 0xC0
#define     FCB_CHPrioKo4DShift 6
#define FCB_CHPrioKo5D                           3      // 2 Bits, Bit 5-4
#define     FCB_CHPrioKo5DMask 0x30
#define     FCB_CHPrioKo5DShift 4
#define FCB_CHPrioKo6D                           3      // 2 Bits, Bit 3-2
#define     FCB_CHPrioKo6DMask 0x0C
#define     FCB_CHPrioKo6DShift 2
#define FCB_CHPrioKo7D                           3      // 2 Bits, Bit 1-0
#define     FCB_CHPrioKo7DMask 0x03
#define     FCB_CHPrioKo7DShift 0
#define FCB_CHPrioKo8D                           4      // 2 Bits, Bit 7-6
#define     FCB_CHPrioKo8DMask 0xC0
#define     FCB_CHPrioKo8DShift 6
#define FCB_CHPrioOutputType                     4      // 2 Bits, Bit 5-4
#define     FCB_CHPrioOutputTypeMask 0x30
#define     FCB_CHPrioOutputTypeShift 4
#define FCB_CHPrioOutPKo0                        5      // uint8_t
#define FCB_CHPrioOutByteKo0                     5      // uint8_t
#define FCB_CHPrioOutSceneKo0                    5      // uint8_t
#define FCB_CHPrioOutPKo1                        6      // uint8_t
#define FCB_CHPrioOutByteKo1                     6      // uint8_t
#define FCB_CHPrioOutSceneKo1                    6      // uint8_t
#define FCB_CHPrioOutPKo2                        7      // uint8_t
#define FCB_CHPrioOutByteKo2                     7      // uint8_t
#define FCB_CHPrioOutSceneKo2                    7      // uint8_t
#define FCB_CHPrioOutPKo3                        8      // uint8_t
#define FCB_CHPrioOutByteKo3                     8      // uint8_t
#define FCB_CHPrioOutSceneKo3                    8      // uint8_t
#define FCB_CHPrioOutPKo4                        9      // uint8_t
#define FCB_CHPrioOutByteKo4                     9      // uint8_t
#define FCB_CHPrioOutSceneKo4                    9      // uint8_t
#define FCB_CHPrioOutPKo5                       10      // uint8_t
#define FCB_CHPrioOutByteKo5                    10      // uint8_t
#define FCB_CHPrioOutSceneKo5                   10      // uint8_t
#define FCB_CHPrioOutPKo6                       11      // uint8_t
#define FCB_CHPrioOutByteKo6                    11      // uint8_t
#define FCB_CHPrioOutSceneKo6                   11      // uint8_t
#define FCB_CHPrioOutPKo7                       12      // uint8_t
#define FCB_CHPrioOutByteKo7                    12      // uint8_t
#define FCB_CHPrioOutSceneKo7                   12      // uint8_t
#define FCB_CHPrioOutPKo8                       13      // uint8_t
#define FCB_CHPrioOutByteKo8                    13      // uint8_t
#define FCB_CHPrioOutSceneKo8                   13      // uint8_t
#define FCB_CHPrioOutPDefault                   14      // uint8_t
#define FCB_CHPrioOutByteDefault                14      // uint8_t
#define FCB_CHPrioOutSceneDefault               14      // uint8_t
#define FCB_CHPrioBehavKo0                      15      // 4 Bits, Bit 7-4
#define     FCB_CHPrioBehavKo0Mask 0xF0
#define     FCB_CHPrioBehavKo0Shift 4
#define FCB_CHPrioBehavKo1                      15      // 4 Bits, Bit 3-0
#define     FCB_CHPrioBehavKo1Mask 0x0F
#define     FCB_CHPrioBehavKo1Shift 0
#define FCB_CHPrioBehavKo2                      16      // 4 Bits, Bit 7-4
#define     FCB_CHPrioBehavKo2Mask 0xF0
#define     FCB_CHPrioBehavKo2Shift 4
#define FCB_CHPrioBehavKo3                      16      // 4 Bits, Bit 3-0
#define     FCB_CHPrioBehavKo3Mask 0x0F
#define     FCB_CHPrioBehavKo3Shift 0
#define FCB_CHPrioBehavKo4                      17      // 4 Bits, Bit 7-4
#define     FCB_CHPrioBehavKo4Mask 0xF0
#define     FCB_CHPrioBehavKo4Shift 4
#define FCB_CHPrioBehavKo5                      17      // 4 Bits, Bit 3-0
#define     FCB_CHPrioBehavKo5Mask 0x0F
#define     FCB_CHPrioBehavKo5Shift 0
#define FCB_CHPrioBehavKo6                      18      // 4 Bits, Bit 7-4
#define     FCB_CHPrioBehavKo6Mask 0xF0
#define     FCB_CHPrioBehavKo6Shift 4
#define FCB_CHPrioBehavKo7                      18      // 4 Bits, Bit 3-0
#define     FCB_CHPrioBehavKo7Mask 0x0F
#define     FCB_CHPrioBehavKo7Shift 0
#define FCB_CHPrioBehavKo8                      19      // 4 Bits, Bit 7-4
#define     FCB_CHPrioBehavKo8Mask 0xF0
#define     FCB_CHPrioBehavKo8Shift 4
#define FCB_CHPrioBehavOut                      19      // 1 Bit, Bit 3
#define     FCB_CHPrioBehavOutMask 0x08
#define     FCB_CHPrioBehavOutShift 3
#define FCB_CHAggWeight                          2      // 1 Bit, Bit 7
#define     FCB_CHAggWeightMask 0x80
#define     FCB_CHAggWeightShift 7
#define FCB_CHAggType                            2      // 7 Bits, Bit 6-0
#define     FCB_CHAggTypeMask 0x7F
#define     FCB_CHAggTypeShift 0
#define FCB_CHAggKo0D                            3      // 2 Bits, Bit 7-6
#define     FCB_CHAggKo0DMask 0xC0
#define     FCB_CHAggKo0DShift 6
#define FCB_CHAggKo1D                            3      // 2 Bits, Bit 5-4
#define     FCB_CHAggKo1DMask 0x30
#define     FCB_CHAggKo1DShift 4
#define FCB_CHAggKo2D                            3      // 2 Bits, Bit 3-2
#define     FCB_CHAggKo2DMask 0x0C
#define     FCB_CHAggKo2DShift 2
#define FCB_CHAggKo3D                            3      // 2 Bits, Bit 1-0
#define     FCB_CHAggKo3DMask 0x03
#define     FCB_CHAggKo3DShift 0
#define FCB_CHAggKo4D                            4      // 2 Bits, Bit 7-6
#define     FCB_CHAggKo4DMask 0xC0
#define     FCB_CHAggKo4DShift 6
#define FCB_CHAggKo5D                            4      // 2 Bits, Bit 5-4
#define     FCB_CHAggKo5DMask 0x30
#define     FCB_CHAggKo5DShift 4
#define FCB_CHAggKo6D                            4      // 2 Bits, Bit 3-2
#define     FCB_CHAggKo6DMask 0x0C
#define     FCB_CHAggKo6DShift 2
#define FCB_CHAggKo7D                            4      // 2 Bits, Bit 1-0
#define     FCB_CHAggKo7DMask 0x03
#define     FCB_CHAggKo7DShift 0
#define FCB_CHAggKo8D                            5      // 2 Bits, Bit 7-6
#define     FCB_CHAggKo8DMask 0xC0
#define     FCB_CHAggKo8DShift 6
#define FCB_CHAggBehavOut                        5      // 1 Bit, Bit 5
#define     FCB_CHAggBehavOutMask 0x20
#define     FCB_CHAggBehavOutShift 5
#define FCB_CHAggOutputRounding                  5      // 1 Bit, Bit 3
#define     FCB_CHAggOutputRoundingMask 0x08
#define     FCB_CHAggOutputRoundingShift 3
#define FCB_CHAggOutputOverflow                  5      // 2 Bits, Bit 2-1
#define     FCB_CHAggOutputOverflowMask 0x06
#define     FCB_CHAggOutputOverflowShift 1
#define FCB_CHAggInputDpt                        6      // 8 Bits, Bit 7-0
#define FCB_CHAggOutputDptEff                    7      // 8 Bits, Bit 7-0
#define FCB_CHAggKo0W                            8      // int8_t
#define FCB_CHAggKo1W                            9      // int8_t
#define FCB_CHAggKo2W                           10      // int8_t
#define FCB_CHAggKo3W                           11      // int8_t
#define FCB_CHAggKo4W                           12      // int8_t
#define FCB_CHAggKo5W                           13      // int8_t
#define FCB_CHAggKo6W                           14      // int8_t
#define FCB_CHAggKo7W                           15      // int8_t
#define FCB_CHAggKo8W                           16      // int8_t
#define FCB_CHCountDownTimeStartKo               2      // 4 Bits, Bit 7-4
#define     FCB_CHCountDownTimeStartKoMask 0xF0
#define     FCB_CHCountDownTimeStartKoShift 4
#define FCB_CHCountDownDelayBase                 3      // 2 Bits, Bit 7-6
#define     FCB_CHCountDownDelayBaseMask 0xC0
#define     FCB_CHCountDownDelayBaseShift 6
#define FCB_CHCountDownDelayTime                 3      // 14 Bits, Bit 13-0
#define     FCB_CHCountDownDelayTimeMask 0x3FFF
#define     FCB_CHCountDownDelayTimeShift 0
#define FCB_CHCountDownTimeOffset                5      // 4 Bits, Bit 7-4
#define     FCB_CHCountDownTimeOffsetMask 0xF0
#define     FCB_CHCountDownTimeOffsetShift 4
#define FCB_CHCountDownTrigger                   5      // 4 Bits, Bit 3-0
#define     FCB_CHCountDownTriggerMask 0x0F
#define     FCB_CHCountDownTriggerShift 0
#define FCB_CHCountDownTemplate                  6      // char*, 14 Byte
#define     FCB_CHCountDownTemplateLength 14
#define FCB_CHCountDownTemplate1h               20      // char*, 14 Byte
#define     FCB_CHCountDownTemplate1hLength 14
#define FCB_CHCountDownTemplate1m               34      // char*, 14 Byte
#define     FCB_CHCountDownTemplate1mLength 14
#define FCB_CHCountDownTemplateEnd              48      // char*, 14 Byte
#define     FCB_CHCountDownTemplateEndLength 14
#define FCB_CHCountDownTextPause                62      // char*, 1 Byte
#define     FCB_CHCountDownTextPauseLength 1
#define FCB_CHCountDownTextRun                  63      // char*, 1 Byte
#define     FCB_CHCountDownTextRunLength 1
#define FCB_CHCountDownCounterKo                64      // 4 Bits, Bit 7-4
#define     FCB_CHCountDownCounterKoMask 0xF0
#define     FCB_CHCountDownCounterKoShift 4
#define FCB_CHCountDownTextKo                   64      // 2 Bits, Bit 3-2
#define     FCB_CHCountDownTextKoMask 0x0C
#define     FCB_CHCountDownTextKoShift 2
#define FCB_CHCountDownTemplateStopp            65      // char*, 14 Byte
#define     FCB_CHCountDownTemplateStoppLength 14
#define FCB_CHCountDownMaxDelayBase             79      // 2 Bits, Bit 7-6
#define     FCB_CHCountDownMaxDelayBaseMask 0xC0
#define     FCB_CHCountDownMaxDelayBaseShift 6
#define FCB_CHCountDownMaxDelayTime             79      // 14 Bits, Bit 13-0
#define     FCB_CHCountDownMaxDelayTimeMask 0x3FFF
#define     FCB_CHCountDownMaxDelayTimeShift 0
#define FCB_CHMonitoringValueType                2      // 8 Bits, Bit 7-0
#define FCB_CHMonitoringWDEnabled                3      // 1 Bit, Bit 7
#define     FCB_CHMonitoringWDEnabledMask 0x80
#define     FCB_CHMonitoringWDEnabledShift 7
#define FCB_CHMonitoringWDTTimeoutDelayBase      4      // 2 Bits, Bit 7-6
#define     FCB_CHMonitoringWDTTimeoutDelayBaseMask 0xC0
#define     FCB_CHMonitoringWDTTimeoutDelayBaseShift 6
#define FCB_CHMonitoringWDTTimeoutDelayTime      4      // 14 Bits, Bit 13-0
#define     FCB_CHMonitoringWDTTimeoutDelayTimeMask 0x3FFF
#define     FCB_CHMonitoringWDTTimeoutDelayTimeShift 0
#define FCB_CHMonitoringWDBehavior               6      // 4 Bits, Bit 7-4
#define     FCB_CHMonitoringWDBehaviorMask 0xF0
#define     FCB_CHMonitoringWDBehaviorShift 4
#define FCB_CHMonitoringStart                    6      // 2 Bits, Bit 3-2
#define     FCB_CHMonitoringStartMask 0x0C
#define     FCB_CHMonitoringStartShift 2
#define FCB_CHMonitoringWDDpt1                   7      // 8 Bits, Bit 7-0
#define FCB_CHMonitoringWDDpt5                   7      // uint8_t
#define FCB_CHMonitoringWDDpt5001                7      // uint8_t
#define FCB_CHMonitoringWDDpt6                   7      // int8_t
#define FCB_CHMonitoringWDDpt7                   7      // uint16_t
#define FCB_CHMonitoringWDDpt8                   7      // int16_t
#define FCB_CHMonitoringWDDpt9                   7      // float (4 Byte)
#define FCB_CHMonitoringWDDpt12                  7      // uint32_t
#define FCB_CHMonitoringWDDpt13                  7      // int32_t
#define FCB_CHMonitoringWDDpt14                  7      // float (4 Byte)
#define FCB_CHMonitoringWDDpt16                  7      // char*, 14 Byte
#define     FCB_CHMonitoringWDDpt16Length 14
#define FCB_CHMonitoringMin                     22      // 4 Bits, Bit 7-4
#define     FCB_CHMonitoringMinMask 0xF0
#define     FCB_CHMonitoringMinShift 4
#define FCB_CHMonitoringMinDpt1                 23      // 1 Bit, Bit 7
#define     FCB_CHMonitoringMinDpt1Mask 0x80
#define     FCB_CHMonitoringMinDpt1Shift 7
#define FCB_CHMonitoringMinDpt5                 23      // uint8_t
#define FCB_CHMonitoringMinDpt5001              23      // uint8_t
#define FCB_CHMonitoringMinDpt6                 23      // int8_t
#define FCB_CHMonitoringMinDpt7                 23      // uint16_t
#define FCB_CHMonitoringMinDpt8                 23      // int16_t
#define FCB_CHMonitoringMinDpt9                 23      // float (4 Byte)
#define FCB_CHMonitoringMinDpt12                23      // uint32_t
#define FCB_CHMonitoringMinDpt13                23      // int32_t
#define FCB_CHMonitoringMinDpt14                23      // float (4 Byte)
#define FCB_CHMonitoringMax                     27      // 4 Bits, Bit 7-4
#define     FCB_CHMonitoringMaxMask 0xF0
#define     FCB_CHMonitoringMaxShift 4
#define FCB_CHMonitoringMaxDpt1                 28      // 1 Bit, Bit 7
#define     FCB_CHMonitoringMaxDpt1Mask 0x80
#define     FCB_CHMonitoringMaxDpt1Shift 7
#define FCB_CHMonitoringMaxDpt5                 28      // uint8_t
#define FCB_CHMonitoringMaxDpt5001              28      // uint8_t
#define FCB_CHMonitoringMaxDpt6                 28      // int8_t
#define FCB_CHMonitoringMaxDpt7                 28      // uint16_t
#define FCB_CHMonitoringMaxDpt8                 28      // int16_t
#define FCB_CHMonitoringMaxDpt9                 28      // float (4 Byte)
#define FCB_CHMonitoringMaxDpt12                28      // uint32_t
#define FCB_CHMonitoringMaxDpt13                28      // int32_t
#define FCB_CHMonitoringMaxDpt14                28      // float (4 Byte)
#define FCB_CHMonitoringOutput                  32      // 4 Bits, Bit 7-4
#define     FCB_CHMonitoringOutputMask 0xF0
#define     FCB_CHMonitoringOutputShift 4
#define FCB_CHSelectionValueType                 2      // 8 Bits, Bit 7-0
#define FCB_CHSelectionType                      3      // 8 Bits, Bit 7-0
#define FCB_CHSelectionSwitching                 4      // 4 Bits, Bit 7-4
#define     FCB_CHSelectionSwitchingMask 0xF0
#define     FCB_CHSelectionSwitchingShift 4
#define FCB_CHSelectionStateOutput               4      // 1 Bit, Bit 3
#define     FCB_CHSelectionStateOutputMask 0x08
#define     FCB_CHSelectionStateOutputShift 3
#define FCB_CHBlinkerOnDelayBase                 4      // 2 Bits, Bit 7-6
#define     FCB_CHBlinkerOnDelayBaseMask 0xC0
#define     FCB_CHBlinkerOnDelayBaseShift 6
#define FCB_CHBlinkerOnDelayTime                 4      // 14 Bits, Bit 13-0
#define     FCB_CHBlinkerOnDelayTimeMask 0x3FFF
#define     FCB_CHBlinkerOnDelayTimeShift 0
#define FCB_CHBlinkerOffDelayBase                6      // 2 Bits, Bit 7-6
#define     FCB_CHBlinkerOffDelayBaseMask 0xC0
#define     FCB_CHBlinkerOffDelayBaseShift 6
#define FCB_CHBlinkerOffDelayTime                6      // 14 Bits, Bit 13-0
#define     FCB_CHBlinkerOffDelayTimeMask 0x3FFF
#define     FCB_CHBlinkerOffDelayTimeShift 0
#define FCB_CHBlinkerStart                       8      // 4 Bits, Bit 7-4
#define     FCB_CHBlinkerStartMask 0xF0
#define     FCB_CHBlinkerStartShift 4
#define FCB_CHBlinkerStop                        8      // 4 Bits, Bit 3-0
#define     FCB_CHBlinkerStopMask 0x0F
#define     FCB_CHBlinkerStopShift 0
#define FCB_CHBlinkerBreak                       9      // 4 Bits, Bit 7-4
#define     FCB_CHBlinkerBreakMask 0xF0
#define     FCB_CHBlinkerBreakShift 4
#define FCB_CHBlinkerBreakWithoutBreak           9      // 4 Bits, Bit 7-4
#define     FCB_CHBlinkerBreakWithoutBreakMask 0xF0
#define     FCB_CHBlinkerBreakWithoutBreakShift 4
#define FCB_CHBlinkerOutputDpt                  10      // 8 Bits, Bit 7-0
#define FCB_CHBlinkerOnPercentage               11      // uint8_t
#define FCB_CHBlinkerOffPercentage              12      // uint8_t
#define FCB_CHBlinkerCount                      13      // 8 Bits, Bit 7-0
#define FCB_CHBlinkerStartAnzahl                14      // 1 Bit, Bit 7
#define     FCB_CHBlinkerStartAnzahlMask 0x80
#define     FCB_CHBlinkerStartAnzahlShift 7
#define FCB_CHFormatString                       2      // char*, 28 Byte
#define     FCB_CHFormatStringLength 28
#define FCB_CHFormatOff                         30      // char*, 14 Byte
#define     FCB_CHFormatOffLength 14
#define FCB_CHFormatOn                          44      // char*, 14 Byte
#define     FCB_CHFormatOnLength 14
#define FCB_CHFormatThousand                    58      // char*, 1 Byte
#define     FCB_CHFormatThousandLength 1
#define FCB_CHFormatIn1                         59      // 8 Bits, Bit 7-0
#define FCB_CHFormatRoundFloat1                 60      // 2 Bits, Bit 7-6
#define     FCB_CHFormatRoundFloat1Mask 0xC0
#define     FCB_CHFormatRoundFloat1Shift 6
#define FCB_CHFormatRound1                      60      // 2 Bits, Bit 7-6
#define     FCB_CHFormatRound1Mask 0xC0
#define     FCB_CHFormatRound1Shift 6
#define FCB_CHFCBFormatRound5_1                 60      // 1 Bit, Bit 5
#define     FCB_CHFCBFormatRound5_1Mask 0x20
#define     FCB_CHFCBFormatRound5_1Shift 5
#define FCB_CHFormatDecimalPlaces1              60      // 4 Bits, Bit 3-0
#define     FCB_CHFormatDecimalPlaces1Mask 0x0F
#define     FCB_CHFormatDecimalPlaces1Shift 0
#define FCB_CHFormatSignificant1                60      // 4 Bits, Bit 3-0
#define     FCB_CHFormatSignificant1Mask 0x0F
#define     FCB_CHFormatSignificant1Shift 0
#define FCB_CHFormatFillupPrecomma1             61      // 4 Bits, Bit 7-4
#define     FCB_CHFormatFillupPrecomma1Mask 0xF0
#define     FCB_CHFormatFillupPrecomma1Shift 4
#define FCB_CHFormatFillupMode1                 61      // 4 Bits, Bit 7-4
#define     FCB_CHFormatFillupMode1Mask 0xF0
#define     FCB_CHFormatFillupMode1Shift 4
#define FCB_CHFormatFillupAfterComma1           61      // 4 Bits, Bit 3-0
#define     FCB_CHFormatFillupAfterComma1Mask 0x0F
#define     FCB_CHFormatFillupAfterComma1Shift 0
#define FCB_CHFCBFormatRoundType1               62      // 4 Bits, Bit 7-4
#define     FCB_CHFCBFormatRoundType1Mask 0xF0
#define     FCB_CHFCBFormatRoundType1Shift 4
#define FCB_CHFormatFillupLength1               62      // 4 Bits, Bit 3-0
#define     FCB_CHFormatFillupLength1Mask 0x0F
#define     FCB_CHFormatFillupLength1Shift 0
#define FCB_CHFormatBit1                        60      // 8 Bits, Bit 7-0
#define FCB_CHFormatIn2                         63      // 8 Bits, Bit 7-0
#define FCB_CHFormatRoundFloat2                 64      // 2 Bits, Bit 7-6
#define     FCB_CHFormatRoundFloat2Mask 0xC0
#define     FCB_CHFormatRoundFloat2Shift 6
#define FCB_CHFormatRound2                      64      // 2 Bits, Bit 7-6
#define     FCB_CHFormatRound2Mask 0xC0
#define     FCB_CHFormatRound2Shift 6
#define FCB_CHFCBFormatRound5_2                 64      // 1 Bit, Bit 5
#define     FCB_CHFCBFormatRound5_2Mask 0x20
#define     FCB_CHFCBFormatRound5_2Shift 5
#define FCB_CHFormatDecimalPlaces2              64      // 4 Bits, Bit 3-0
#define     FCB_CHFormatDecimalPlaces2Mask 0x0F
#define     FCB_CHFormatDecimalPlaces2Shift 0
#define FCB_CHFormatSignificant2                64      // 4 Bits, Bit 3-0
#define     FCB_CHFormatSignificant2Mask 0x0F
#define     FCB_CHFormatSignificant2Shift 0
#define FCB_CHFormatFillupPrecomma2             65      // 4 Bits, Bit 7-4
#define     FCB_CHFormatFillupPrecomma2Mask 0xF0
#define     FCB_CHFormatFillupPrecomma2Shift 4
#define FCB_CHFormatFillupMode2                 65      // 4 Bits, Bit 7-4
#define     FCB_CHFormatFillupMode2Mask 0xF0
#define     FCB_CHFormatFillupMode2Shift 4
#define FCB_CHFormatFillupAfterComma2           65      // 4 Bits, Bit 3-0
#define     FCB_CHFormatFillupAfterComma2Mask 0x0F
#define     FCB_CHFormatFillupAfterComma2Shift 0
#define FCB_CHFCBFormatRoundType2               66      // 4 Bits, Bit 7-4
#define     FCB_CHFCBFormatRoundType2Mask 0xF0
#define     FCB_CHFCBFormatRoundType2Shift 4
#define FCB_CHFormatFillupLength2               66      // 4 Bits, Bit 3-0
#define     FCB_CHFormatFillupLength2Mask 0x0F
#define     FCB_CHFormatFillupLength2Shift 0
#define FCB_CHFormatBit2                        64      // 8 Bits, Bit 7-0
#define FCB_CHFormatIn3                         67      // 8 Bits, Bit 7-0
#define FCB_CHFormatRoundFloat3                 68      // 2 Bits, Bit 7-6
#define     FCB_CHFormatRoundFloat3Mask 0xC0
#define     FCB_CHFormatRoundFloat3Shift 6
#define FCB_CHFormatRound3                      68      // 2 Bits, Bit 7-6
#define     FCB_CHFormatRound3Mask 0xC0
#define     FCB_CHFormatRound3Shift 6
#define FCB_CHFCBFormatRound5_3                 68      // 1 Bit, Bit 5
#define     FCB_CHFCBFormatRound5_3Mask 0x20
#define     FCB_CHFCBFormatRound5_3Shift 5
#define FCB_CHFormatDecimalPlaces3              68      // 4 Bits, Bit 3-0
#define     FCB_CHFormatDecimalPlaces3Mask 0x0F
#define     FCB_CHFormatDecimalPlaces3Shift 0
#define FCB_CHFormatSignificant3                68      // 4 Bits, Bit 3-0
#define     FCB_CHFormatSignificant3Mask 0x0F
#define     FCB_CHFormatSignificant3Shift 0
#define FCB_CHFormatFillupPrecomma3             69      // 4 Bits, Bit 7-4
#define     FCB_CHFormatFillupPrecomma3Mask 0xF0
#define     FCB_CHFormatFillupPrecomma3Shift 4
#define FCB_CHFormatFillupMode3                 69      // 4 Bits, Bit 7-4
#define     FCB_CHFormatFillupMode3Mask 0xF0
#define     FCB_CHFormatFillupMode3Shift 4
#define FCB_CHFormatFillupAfterComma3           69      // 4 Bits, Bit 3-0
#define     FCB_CHFormatFillupAfterComma3Mask 0x0F
#define     FCB_CHFormatFillupAfterComma3Shift 0
#define FCB_CHFCBFormatRoundType3               70      // 4 Bits, Bit 7-4
#define     FCB_CHFCBFormatRoundType3Mask 0xF0
#define     FCB_CHFCBFormatRoundType3Shift 4
#define FCB_CHFormatFillupLength3               70      // 4 Bits, Bit 3-0
#define     FCB_CHFormatFillupLength3Mask 0x0F
#define     FCB_CHFormatFillupLength3Shift 0
#define FCB_CHFormatBit3                        68      // 8 Bits, Bit 7-0
#define FCB_CHFormatIn4                         71      // 8 Bits, Bit 7-0
#define FCB_CHFormatRoundFloat4                 72      // 2 Bits, Bit 7-6
#define     FCB_CHFormatRoundFloat4Mask 0xC0
#define     FCB_CHFormatRoundFloat4Shift 6
#define FCB_CHFormatRound4                      72      // 2 Bits, Bit 7-6
#define     FCB_CHFormatRound4Mask 0xC0
#define     FCB_CHFormatRound4Shift 6
#define FCB_CHFCBFormatRound5_4                 72      // 1 Bit, Bit 5
#define     FCB_CHFCBFormatRound5_4Mask 0x20
#define     FCB_CHFCBFormatRound5_4Shift 5
#define FCB_CHFormatDecimalPlaces4              72      // 4 Bits, Bit 3-0
#define     FCB_CHFormatDecimalPlaces4Mask 0x0F
#define     FCB_CHFormatDecimalPlaces4Shift 0
#define FCB_CHFormatSignificant4                72      // 4 Bits, Bit 3-0
#define     FCB_CHFormatSignificant4Mask 0x0F
#define     FCB_CHFormatSignificant4Shift 0
#define FCB_CHFormatFillupPrecomma4             73      // 4 Bits, Bit 7-4
#define     FCB_CHFormatFillupPrecomma4Mask 0xF0
#define     FCB_CHFormatFillupPrecomma4Shift 4
#define FCB_CHFormatFillupMode4                 73      // 4 Bits, Bit 7-4
#define     FCB_CHFormatFillupMode4Mask 0xF0
#define     FCB_CHFormatFillupMode4Shift 4
#define FCB_CHFormatFillupAfterComma4           73      // 4 Bits, Bit 3-0
#define     FCB_CHFormatFillupAfterComma4Mask 0x0F
#define     FCB_CHFormatFillupAfterComma4Shift 0
#define FCB_CHFCBFormatRoundType4               74      // 4 Bits, Bit 7-4
#define     FCB_CHFCBFormatRoundType4Mask 0xF0
#define     FCB_CHFCBFormatRoundType4Shift 4
#define FCB_CHFormatFillupLength4               74      // 4 Bits, Bit 3-0
#define     FCB_CHFormatFillupLength4Mask 0x0F
#define     FCB_CHFormatFillupLength4Shift 0
#define FCB_CHFormatBit4                        72      // 8 Bits, Bit 7-0

// Type
#define ParamFCB_CHChannelType                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHChannelType)))
// Suspendiert
#define ParamFCB_CHChannelDisabled                   ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHChannelDisabled)) & FCB_CHChannelDisabledMask))
// Eingang 1
#define ParamFCB_CHLogicKo0D                         ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo0D)) & FCB_CHLogicKo0DMask) >> FCB_CHLogicKo0DShift)
// Eingang 2
#define ParamFCB_CHLogicKo1D                         ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo1D)) & FCB_CHLogicKo1DMask) >> FCB_CHLogicKo1DShift)
// Eingang 3
#define ParamFCB_CHLogicKo2D                         ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo2D)) & FCB_CHLogicKo2DMask) >> FCB_CHLogicKo2DShift)
// Eingang 4
#define ParamFCB_CHLogicKo3D                         (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo3D)) & FCB_CHLogicKo3DMask)
// Eingang 5
#define ParamFCB_CHLogicKo4D                         ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo4D)) & FCB_CHLogicKo4DMask) >> FCB_CHLogicKo4DShift)
// Eingang 6
#define ParamFCB_CHLogicKo5D                         ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo5D)) & FCB_CHLogicKo5DMask) >> FCB_CHLogicKo5DShift)
// Eingang 7
#define ParamFCB_CHLogicKo6D                         ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo6D)) & FCB_CHLogicKo6DMask) >> FCB_CHLogicKo6DShift)
// Eingang 8
#define ParamFCB_CHLogicKo7D                         (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo7D)) & FCB_CHLogicKo7DMask)
// Eingang 9
#define ParamFCB_CHLogicKo8D                         ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo8D)) & FCB_CHLogicKo8DMask) >> FCB_CHLogicKo8DShift)
// Invertiert
#define ParamFCB_CHLogicOutInv                       ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicOutInv)) & FCB_CHLogicOutInvMask))
// Sendeverhalten
#define ParamFCB_CHLogicBehavOut                     ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavOut)) & FCB_CHLogicBehavOutMask))
// Initialisierung
#define ParamFCB_CHLogicBehavKo0                     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo0)) & FCB_CHLogicBehavKo0Mask) >> FCB_CHLogicBehavKo0Shift)
// Initialisierung
#define ParamFCB_CHLogicBehavKo1                     (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo1)) & FCB_CHLogicBehavKo1Mask)
// Initialisierung
#define ParamFCB_CHLogicBehavKo2                     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo2)) & FCB_CHLogicBehavKo2Mask) >> FCB_CHLogicBehavKo2Shift)
// Initialisierung
#define ParamFCB_CHLogicBehavKo3                     (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo3)) & FCB_CHLogicBehavKo3Mask)
// Initialisierung
#define ParamFCB_CHLogicBehavKo4                     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo4)) & FCB_CHLogicBehavKo4Mask) >> FCB_CHLogicBehavKo4Shift)
// Initialisierung
#define ParamFCB_CHLogicBehavKo5                     (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo5)) & FCB_CHLogicBehavKo5Mask)
// Initialisierung
#define ParamFCB_CHLogicBehavKo6                     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo6)) & FCB_CHLogicBehavKo6Mask) >> FCB_CHLogicBehavKo6Shift)
// Initialisierung
#define ParamFCB_CHLogicBehavKo7                     (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo7)) & FCB_CHLogicBehavKo7Mask)
// Initialisierung
#define ParamFCB_CHLogicBehavKo8                     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo8)) & FCB_CHLogicBehavKo8Mask) >> FCB_CHLogicBehavKo8Shift)
// Prior-Wahrscheinlichkeit
#define ParamFCB_CHBayesianPrior                     (knx.paramByte(FCB_ParamCalcIndex(FCB_CHBayesianPrior)))
// Schwellwert für binären Ausgang
#define ParamFCB_CHBayesianThreshold                 (knx.paramByte(FCB_ParamCalcIndex(FCB_CHBayesianThreshold)))
// Wahrscheinlichkeits-Ausgang aktivieren
#define ParamFCB_CHBayesianEnableProbOutput          ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHBayesianEnableProbOutput)) & FCB_CHBayesianEnableProbOutputMask))
// P(A|E_1)
#define ParamFCB_CHLogicKo0BayesProbTrue             (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo0BayesProbTrue)))
// P(A|!E_1)
#define ParamFCB_CHLogicKo0BayesProbFalse            (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo0BayesProbFalse)))
// P(A|E_2)
#define ParamFCB_CHLogicKo1BayesProbTrue             (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo1BayesProbTrue)))
// P(A|!E_2)
#define ParamFCB_CHLogicKo1BayesProbFalse            (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo1BayesProbFalse)))
// P(A|E_3)
#define ParamFCB_CHLogicKo2BayesProbTrue             (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo2BayesProbTrue)))
// P(A|!E_3)
#define ParamFCB_CHLogicKo2BayesProbFalse            (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo2BayesProbFalse)))
// P(A|E_4)
#define ParamFCB_CHLogicKo3BayesProbTrue             (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo3BayesProbTrue)))
// P(A|!E_4)
#define ParamFCB_CHLogicKo3BayesProbFalse            (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo3BayesProbFalse)))
// P(A|E_5)
#define ParamFCB_CHLogicKo4BayesProbTrue             (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo4BayesProbTrue)))
// P(A|!E_5)
#define ParamFCB_CHLogicKo4BayesProbFalse            (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo4BayesProbFalse)))
// P(A|E_6)
#define ParamFCB_CHLogicKo5BayesProbTrue             (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo5BayesProbTrue)))
// P(A|!E_6)
#define ParamFCB_CHLogicKo5BayesProbFalse            (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo5BayesProbFalse)))
// P(A|E_7)
#define ParamFCB_CHLogicKo6BayesProbTrue             (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo6BayesProbTrue)))
// P(A|!E_7)
#define ParamFCB_CHLogicKo6BayesProbFalse            (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo6BayesProbFalse)))
// P(A|E_8)
#define ParamFCB_CHLogicKo7BayesProbTrue             (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo7BayesProbTrue)))
// P(A|!E_8)
#define ParamFCB_CHLogicKo7BayesProbFalse            (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo7BayesProbFalse)))
// P(A|E_9)
#define ParamFCB_CHLogicKo8BayesProbTrue             (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo8BayesProbTrue)))
// P(A|!E_9)
#define ParamFCB_CHLogicKo8BayesProbFalse            (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo8BayesProbFalse)))
// Eingang 1
#define ParamFCB_CHPrioKo0D                          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo0D)) & FCB_CHPrioKo0DMask) >> FCB_CHPrioKo0DShift)
// Eingang 2
#define ParamFCB_CHPrioKo1D                          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo1D)) & FCB_CHPrioKo1DMask) >> FCB_CHPrioKo1DShift)
// Eingang 3
#define ParamFCB_CHPrioKo2D                          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo2D)) & FCB_CHPrioKo2DMask) >> FCB_CHPrioKo2DShift)
// Eingang 4
#define ParamFCB_CHPrioKo3D                          (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo3D)) & FCB_CHPrioKo3DMask)
// Eingang 5
#define ParamFCB_CHPrioKo4D                          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo4D)) & FCB_CHPrioKo4DMask) >> FCB_CHPrioKo4DShift)
// Eingang 6
#define ParamFCB_CHPrioKo5D                          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo5D)) & FCB_CHPrioKo5DMask) >> FCB_CHPrioKo5DShift)
// Eingang 7
#define ParamFCB_CHPrioKo6D                          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo6D)) & FCB_CHPrioKo6DMask) >> FCB_CHPrioKo6DShift)
// Eingang 8
#define ParamFCB_CHPrioKo7D                          (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo7D)) & FCB_CHPrioKo7DMask)
// Eingang 9
#define ParamFCB_CHPrioKo8D                          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo8D)) & FCB_CHPrioKo8DMask) >> FCB_CHPrioKo8DShift)
// Type
#define ParamFCB_CHPrioOutputType                    ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutputType)) & FCB_CHPrioOutputTypeMask) >> FCB_CHPrioOutputTypeShift)
// Ausgangswert
#define ParamFCB_CHPrioOutPKo0                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo0)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo0                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo0)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo0                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo0)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo1                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo1)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo1                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo1)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo1                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo1)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo2                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo2)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo2                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo2)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo2                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo2)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo3                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo3)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo3                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo3)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo3                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo3)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo4                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo4)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo4                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo4)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo4                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo4)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo5                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo5)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo5                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo5)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo5                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo5)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo6                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo6)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo6                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo6)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo6                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo6)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo7                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo7)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo7                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo7)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo7                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo7)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo8                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo8)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo8                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo8)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo8                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo8)))
// Ausgangswert wenn alle Eingänge AUS
#define ParamFCB_CHPrioOutPDefault                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPDefault)))
// Ausgangswert wenn alle Eingänge AUS
#define ParamFCB_CHPrioOutByteDefault                (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteDefault)))
// Ausgangswert Szenennummer wenn alle Eingänge AUS
#define ParamFCB_CHPrioOutSceneDefault               (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneDefault)))
// Initialisierung
#define ParamFCB_CHPrioBehavKo0                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo0)) & FCB_CHPrioBehavKo0Mask) >> FCB_CHPrioBehavKo0Shift)
// Initialisierung
#define ParamFCB_CHPrioBehavKo1                      (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo1)) & FCB_CHPrioBehavKo1Mask)
// Initialisierung
#define ParamFCB_CHPrioBehavKo2                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo2)) & FCB_CHPrioBehavKo2Mask) >> FCB_CHPrioBehavKo2Shift)
// Initialisierung
#define ParamFCB_CHPrioBehavKo3                      (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo3)) & FCB_CHPrioBehavKo3Mask)
// Initialisierung
#define ParamFCB_CHPrioBehavKo4                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo4)) & FCB_CHPrioBehavKo4Mask) >> FCB_CHPrioBehavKo4Shift)
// Initialisierung
#define ParamFCB_CHPrioBehavKo5                      (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo5)) & FCB_CHPrioBehavKo5Mask)
// Initialisierung
#define ParamFCB_CHPrioBehavKo6                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo6)) & FCB_CHPrioBehavKo6Mask) >> FCB_CHPrioBehavKo6Shift)
// Initialisierung
#define ParamFCB_CHPrioBehavKo7                      (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo7)) & FCB_CHPrioBehavKo7Mask)
// Initialisierung
#define ParamFCB_CHPrioBehavKo8                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo8)) & FCB_CHPrioBehavKo8Mask) >> FCB_CHPrioBehavKo8Shift)
// Sendeverhalten
#define ParamFCB_CHPrioBehavOut                      ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavOut)) & FCB_CHPrioBehavOutMask))
// Gewichtung der Eingänge
#define ParamFCB_CHAggWeight                         ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggWeight)) & FCB_CHAggWeightMask))
// Funktion
#define ParamFCB_CHAggType                           (knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggType)) & FCB_CHAggTypeMask)
// Eingang 1
#define ParamFCB_CHAggKo0D                           ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo0D)) & FCB_CHAggKo0DMask) >> FCB_CHAggKo0DShift)
// Eingang 2
#define ParamFCB_CHAggKo1D                           ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo1D)) & FCB_CHAggKo1DMask) >> FCB_CHAggKo1DShift)
// Eingang 3
#define ParamFCB_CHAggKo2D                           ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo2D)) & FCB_CHAggKo2DMask) >> FCB_CHAggKo2DShift)
// Eingang 4
#define ParamFCB_CHAggKo3D                           (knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo3D)) & FCB_CHAggKo3DMask)
// Eingang 5
#define ParamFCB_CHAggKo4D                           ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo4D)) & FCB_CHAggKo4DMask) >> FCB_CHAggKo4DShift)
// Eingang 6
#define ParamFCB_CHAggKo5D                           ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo5D)) & FCB_CHAggKo5DMask) >> FCB_CHAggKo5DShift)
// Eingang 7
#define ParamFCB_CHAggKo6D                           ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo6D)) & FCB_CHAggKo6DMask) >> FCB_CHAggKo6DShift)
// Eingang 8
#define ParamFCB_CHAggKo7D                           (knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo7D)) & FCB_CHAggKo7DMask)
// Eingang 9
#define ParamFCB_CHAggKo8D                           ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo8D)) & FCB_CHAggKo8DMask) >> FCB_CHAggKo8DShift)
// Sendeverhalten
#define ParamFCB_CHAggBehavOut                       ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggBehavOut)) & FCB_CHAggBehavOutMask))
// Rundungsmodus
#define ParamFCB_CHAggOutputRounding                 ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggOutputRounding)) & FCB_CHAggOutputRoundingMask))
// Bei Überschreiten des Wertebereichs
#define ParamFCB_CHAggOutputOverflow                 ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggOutputOverflow)) & FCB_CHAggOutputOverflowMask) >> FCB_CHAggOutputOverflowShift)
// Wertetype / DPT
#define ParamFCB_CHAggInputDpt                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggInputDpt)))
// DPT Ausgang
#define ParamFCB_CHAggOutputDptEff                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggOutputDptEff)))
// Gewicht Eingang 1
#define ParamFCB_CHAggKo0W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo0W)))
// Gewicht Eingang 2
#define ParamFCB_CHAggKo1W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo1W)))
// Gewicht Eingang 3
#define ParamFCB_CHAggKo2W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo2W)))
// Gewicht Eingang 4
#define ParamFCB_CHAggKo3W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo3W)))
// Gewicht Eingang 5
#define ParamFCB_CHAggKo4W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo4W)))
// Gewicht Eingang 6
#define ParamFCB_CHAggKo5W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo5W)))
// Gewicht Eingang 7
#define ParamFCB_CHAggKo6W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo6W)))
// Gewicht Eingang 8
#define ParamFCB_CHAggKo7W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo7W)))
// Gewicht Eingang 9
#define ParamFCB_CHAggKo8W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo8W)))
// Start mit Zeit
#define ParamFCB_CHCountDownTimeStartKo              ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHCountDownTimeStartKo)) & FCB_CHCountDownTimeStartKoMask) >> FCB_CHCountDownTimeStartKoShift)
// Ablaufzeit Einheit
#define ParamFCB_CHCountDownDelayBase                ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHCountDownDelayBase)) & FCB_CHCountDownDelayBaseMask) >> FCB_CHCountDownDelayBaseShift)
// Ablaufzeit
#define ParamFCB_CHCountDownDelayTime                (knx.paramWord(FCB_ParamCalcIndex(FCB_CHCountDownDelayTime)) & FCB_CHCountDownDelayTimeMask)
// Ablaufzeit (in Millisekunden)
#define ParamFCB_CHCountDownDelayTimeMS              (paramDelay(knx.paramWord(FCB_ParamCalcIndex(FCB_CHCountDownDelayTime))))
// Laufzeit Verringern / Erhöhen
#define ParamFCB_CHCountDownTimeOffset               ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHCountDownTimeOffset)) & FCB_CHCountDownTimeOffsetMask) >> FCB_CHCountDownTimeOffsetShift)
// Auslöser / Ende
#define ParamFCB_CHCountDownTrigger                  (knx.paramByte(FCB_ParamCalcIndex(FCB_CHCountDownTrigger)) & FCB_CHCountDownTriggerMask)
// Standard
#define ParamFCB_CHCountDownTemplate                 (knx.paramData(FCB_ParamCalcIndex(FCB_CHCountDownTemplate)))
#define ParamFCB_CHCountDownTemplateStr              (knx.paramString(FCB_ParamCalcIndex(FCB_CHCountDownTemplate), FCB_CHCountDownTemplateLength))
// kleiner eine Stunde
#define ParamFCB_CHCountDownTemplate1h               (knx.paramData(FCB_ParamCalcIndex(FCB_CHCountDownTemplate1h)))
#define ParamFCB_CHCountDownTemplate1hStr            (knx.paramString(FCB_ParamCalcIndex(FCB_CHCountDownTemplate1h), FCB_CHCountDownTemplate1hLength))
// kleiner eine Minute
#define ParamFCB_CHCountDownTemplate1m               (knx.paramData(FCB_ParamCalcIndex(FCB_CHCountDownTemplate1m)))
#define ParamFCB_CHCountDownTemplate1mStr            (knx.paramString(FCB_ParamCalcIndex(FCB_CHCountDownTemplate1m), FCB_CHCountDownTemplate1mLength))
// Ende
#define ParamFCB_CHCountDownTemplateEnd              (knx.paramData(FCB_ParamCalcIndex(FCB_CHCountDownTemplateEnd)))
#define ParamFCB_CHCountDownTemplateEndStr           (knx.paramString(FCB_ParamCalcIndex(FCB_CHCountDownTemplateEnd), FCB_CHCountDownTemplateEndLength))
// Pause
#define ParamFCB_CHCountDownTextPause                (knx.paramData(FCB_ParamCalcIndex(FCB_CHCountDownTextPause)))
#define ParamFCB_CHCountDownTextPauseStr             (knx.paramString(FCB_ParamCalcIndex(FCB_CHCountDownTextPause), FCB_CHCountDownTextPauseLength))
// Läuft
#define ParamFCB_CHCountDownTextRun                  (knx.paramData(FCB_ParamCalcIndex(FCB_CHCountDownTextRun)))
#define ParamFCB_CHCountDownTextRunStr               (knx.paramString(FCB_ParamCalcIndex(FCB_CHCountDownTextRun), FCB_CHCountDownTextRunLength))
// Zähler
#define ParamFCB_CHCountDownCounterKo                ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHCountDownCounterKo)) & FCB_CHCountDownCounterKoMask) >> FCB_CHCountDownCounterKoShift)
// Text
#define ParamFCB_CHCountDownTextKo                   ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHCountDownTextKo)) & FCB_CHCountDownTextKoMask) >> FCB_CHCountDownTextKoShift)
// Stopp
#define ParamFCB_CHCountDownTemplateStopp            (knx.paramData(FCB_ParamCalcIndex(FCB_CHCountDownTemplateStopp)))
#define ParamFCB_CHCountDownTemplateStoppStr         (knx.paramString(FCB_ParamCalcIndex(FCB_CHCountDownTemplateStopp), FCB_CHCountDownTemplateStoppLength))
// Maximalzeit Einheit
#define ParamFCB_CHCountDownMaxDelayBase             ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHCountDownMaxDelayBase)) & FCB_CHCountDownMaxDelayBaseMask) >> FCB_CHCountDownMaxDelayBaseShift)
// Maximalzeit
#define ParamFCB_CHCountDownMaxDelayTime             (knx.paramWord(FCB_ParamCalcIndex(FCB_CHCountDownMaxDelayTime)) & FCB_CHCountDownMaxDelayTimeMask)
// Maximalzeit (in Millisekunden)
#define ParamFCB_CHCountDownMaxDelayTimeMS           (paramDelay(knx.paramWord(FCB_ParamCalcIndex(FCB_CHCountDownMaxDelayTime))))
// Werttype
#define ParamFCB_CHMonitoringValueType               (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringValueType)))
// Zeitüberwachung aktiv
#define ParamFCB_CHMonitoringWDEnabled               ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringWDEnabled)) & FCB_CHMonitoringWDEnabledMask))
// Watchdog Zeitbasis
#define ParamFCB_CHMonitoringWDTTimeoutDelayBase     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringWDTTimeoutDelayBase)) & FCB_CHMonitoringWDTTimeoutDelayBaseMask) >> FCB_CHMonitoringWDTTimeoutDelayBaseShift)
// Watchdog Zeit
#define ParamFCB_CHMonitoringWDTTimeoutDelayTime     (knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringWDTTimeoutDelayTime)) & FCB_CHMonitoringWDTTimeoutDelayTimeMask)
// Watchdog Zeit (in Millisekunden)
#define ParamFCB_CHMonitoringWDTTimeoutDelayTimeMS   (paramDelay(knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringWDTTimeoutDelayTime))))
// Verhalten bei Zeitüberschreitung
#define ParamFCB_CHMonitoringWDBehavior              ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringWDBehavior)) & FCB_CHMonitoringWDBehaviorMask) >> FCB_CHMonitoringWDBehaviorShift)
// Verhalten beim Start
#define ParamFCB_CHMonitoringStart                   ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringStart)) & FCB_CHMonitoringStartMask) >> FCB_CHMonitoringStartShift)
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt1                  (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt1)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt5                  (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt5)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt5001               (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt5001)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt6                  ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt6)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt7                  (knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt7)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt8                  ((int16_t)knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt8)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt9                  (knx.paramFloat(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt9), Float_Enc_IEEE754Single))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt12                 (knx.paramInt(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt12)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt13                 ((int32_t)knx.paramInt(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt13)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt14                 (knx.paramFloat(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt14), Float_Enc_IEEE754Single))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt16                 (knx.paramData(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt16)))
#define ParamFCB_CHMonitoringWDDpt16Str              (knx.paramString(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt16), FCB_CHMonitoringWDDpt16Length))
// Verhalten bei Wertunterschreitung
#define ParamFCB_CHMonitoringMin                     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMin)) & FCB_CHMonitoringMinMask) >> FCB_CHMonitoringMinShift)
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt1                 ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt1)) & FCB_CHMonitoringMinDpt1Mask))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt5                 (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt5)))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt5001              (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt5001)))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt6                 ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt6)))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt7                 (knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt7)))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt8                 ((int16_t)knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt8)))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt9                 (knx.paramFloat(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt9), Float_Enc_IEEE754Single))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt12                (knx.paramInt(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt12)))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt13                ((int32_t)knx.paramInt(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt13)))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt14                (knx.paramFloat(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt14), Float_Enc_IEEE754Single))
// Verhalten bei Wertüberschreitung
#define ParamFCB_CHMonitoringMax                     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMax)) & FCB_CHMonitoringMaxMask) >> FCB_CHMonitoringMaxShift)
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt1                 ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt1)) & FCB_CHMonitoringMaxDpt1Mask))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt5                 (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt5)))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt5001              (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt5001)))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt6                 ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt6)))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt7                 (knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt7)))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt8                 ((int16_t)knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt8)))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt9                 (knx.paramFloat(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt9), Float_Enc_IEEE754Single))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt12                (knx.paramInt(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt12)))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt13                ((int32_t)knx.paramInt(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt13)))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt14                (knx.paramFloat(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt14), Float_Enc_IEEE754Single))
// Sendeverhalten
#define ParamFCB_CHMonitoringOutput                  ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringOutput)) & FCB_CHMonitoringOutputMask) >> FCB_CHMonitoringOutputShift)
// Datentype
#define ParamFCB_CHSelectionValueType                (knx.paramByte(FCB_ParamCalcIndex(FCB_CHSelectionValueType)))
// Anzahl und Typ der Auswahlen (mit gemeinsamen Auswahl-Eingang)
#define ParamFCB_CHSelectionType                     (knx.paramByte(FCB_ParamCalcIndex(FCB_CHSelectionType)))
// Bei Umschaltung
#define ParamFCB_CHSelectionSwitching                ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHSelectionSwitching)) & FCB_CHSelectionSwitchingMask) >> FCB_CHSelectionSwitchingShift)
// Auswahl Status Objekt
#define ParamFCB_CHSelectionStateOutput              ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHSelectionStateOutput)) & FCB_CHSelectionStateOutputMask))
// Blinker EIN Zeitbasis
#define ParamFCB_CHBlinkerOnDelayBase                ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerOnDelayBase)) & FCB_CHBlinkerOnDelayBaseMask) >> FCB_CHBlinkerOnDelayBaseShift)
// Blinker EIN Zeit
#define ParamFCB_CHBlinkerOnDelayTime                (knx.paramWord(FCB_ParamCalcIndex(FCB_CHBlinkerOnDelayTime)) & FCB_CHBlinkerOnDelayTimeMask)
// Blinker EIN Zeit (in Millisekunden)
#define ParamFCB_CHBlinkerOnDelayTimeMS              (paramDelay(knx.paramWord(FCB_ParamCalcIndex(FCB_CHBlinkerOnDelayTime))))
// Blinker AUS Zeitbasis
#define ParamFCB_CHBlinkerOffDelayBase               ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerOffDelayBase)) & FCB_CHBlinkerOffDelayBaseMask) >> FCB_CHBlinkerOffDelayBaseShift)
// Blinker AUS Zeit
#define ParamFCB_CHBlinkerOffDelayTime               (knx.paramWord(FCB_ParamCalcIndex(FCB_CHBlinkerOffDelayTime)) & FCB_CHBlinkerOffDelayTimeMask)
// Blinker AUS Zeit (in Millisekunden)
#define ParamFCB_CHBlinkerOffDelayTimeMS             (paramDelay(knx.paramWord(FCB_ParamCalcIndex(FCB_CHBlinkerOffDelayTime))))
// Start
#define ParamFCB_CHBlinkerStart                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerStart)) & FCB_CHBlinkerStartMask) >> FCB_CHBlinkerStartShift)
// Ende
#define ParamFCB_CHBlinkerStop                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerStop)) & FCB_CHBlinkerStopMask)
// AUS Telegram am 'Start' Eingang
#define ParamFCB_CHBlinkerBreak                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerBreak)) & FCB_CHBlinkerBreakMask) >> FCB_CHBlinkerBreakShift)
// AUS Telegram am 'Start' Eingang
#define ParamFCB_CHBlinkerBreakWithoutBreak          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerBreakWithoutBreak)) & FCB_CHBlinkerBreakWithoutBreakMask) >> FCB_CHBlinkerBreakWithoutBreakShift)
// Ausgang
#define ParamFCB_CHBlinkerOutputDpt                  (knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerOutputDpt)))
// Wert für EIN
#define ParamFCB_CHBlinkerOnPercentage               (knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerOnPercentage)))
// Wert für AUS
#define ParamFCB_CHBlinkerOffPercentage              (knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerOffPercentage)))
// Anzahl der Blinkvorgänge
#define ParamFCB_CHBlinkerCount                      (knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerCount)))
// Objekt zum Starten mit Anzahl
#define ParamFCB_CHBlinkerStartAnzahl                ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerStartAnzahl)) & FCB_CHBlinkerStartAnzahlMask))
// Format
#define ParamFCB_CHFormatString                      (knx.paramData(FCB_ParamCalcIndex(FCB_CHFormatString)))
#define ParamFCB_CHFormatStringStr                   (knx.paramString(FCB_ParamCalcIndex(FCB_CHFormatString), FCB_CHFormatStringLength))
// Textbaustein Aus
#define ParamFCB_CHFormatOff                         (knx.paramData(FCB_ParamCalcIndex(FCB_CHFormatOff)))
#define ParamFCB_CHFormatOffStr                      (knx.paramString(FCB_ParamCalcIndex(FCB_CHFormatOff), FCB_CHFormatOffLength))
// Textbaustein Ein
#define ParamFCB_CHFormatOn                          (knx.paramData(FCB_ParamCalcIndex(FCB_CHFormatOn)))
#define ParamFCB_CHFormatOnStr                       (knx.paramString(FCB_ParamCalcIndex(FCB_CHFormatOn), FCB_CHFormatOnLength))
// Tausendertrennzeichen
#define ParamFCB_CHFormatThousand                    (knx.paramData(FCB_ParamCalcIndex(FCB_CHFormatThousand)))
#define ParamFCB_CHFormatThousandStr                 (knx.paramString(FCB_ParamCalcIndex(FCB_CHFormatThousand), FCB_CHFormatThousandLength))
// Datentype
#define ParamFCB_CHFormatIn1                         (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatIn1)))
// Runden
#define ParamFCB_CHFormatRoundFloat1                 ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatRoundFloat1)) & FCB_CHFormatRoundFloat1Mask) >> FCB_CHFormatRoundFloat1Shift)
// Runden
#define ParamFCB_CHFormatRound1                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatRound1)) & FCB_CHFormatRound1Mask) >> FCB_CHFormatRound1Shift)
// Auf 5 Runden
#define ParamFCB_CHFCBFormatRound5_1                 ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHFCBFormatRound5_1)) & FCB_CHFCBFormatRound5_1Mask))
// Stellen
#define ParamFCB_CHFormatDecimalPlaces1              (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatDecimalPlaces1)) & FCB_CHFormatDecimalPlaces1Mask)
// Stellenanzahl
#define ParamFCB_CHFormatSignificant1                (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatSignificant1)) & FCB_CHFormatSignificant1Mask)
// Auffüllen
#define ParamFCB_CHFormatFillupPrecomma1             ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupPrecomma1)) & FCB_CHFormatFillupPrecomma1Mask) >> FCB_CHFormatFillupPrecomma1Shift)
// Auffüllen
#define ParamFCB_CHFormatFillupMode1                 ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupMode1)) & FCB_CHFormatFillupMode1Mask) >> FCB_CHFormatFillupMode1Shift)
// Auffüllen nach Komma
#define ParamFCB_CHFormatFillupAfterComma1           (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupAfterComma1)) & FCB_CHFormatFillupAfterComma1Mask)
// Rundungsart
#define ParamFCB_CHFCBFormatRoundType1               ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFCBFormatRoundType1)) & FCB_CHFCBFormatRoundType1Mask) >> FCB_CHFCBFormatRoundType1Shift)
// Stellen
#define ParamFCB_CHFormatFillupLength1               (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupLength1)) & FCB_CHFormatFillupLength1Mask)
// Anzeige als
#define ParamFCB_CHFormatBit1                        (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatBit1)))
// Datentype
#define ParamFCB_CHFormatIn2                         (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatIn2)))
// Runden
#define ParamFCB_CHFormatRoundFloat2                 ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatRoundFloat2)) & FCB_CHFormatRoundFloat2Mask) >> FCB_CHFormatRoundFloat2Shift)
// Runden
#define ParamFCB_CHFormatRound2                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatRound2)) & FCB_CHFormatRound2Mask) >> FCB_CHFormatRound2Shift)
// Auf 5 Runden
#define ParamFCB_CHFCBFormatRound5_2                 ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHFCBFormatRound5_2)) & FCB_CHFCBFormatRound5_2Mask))
// Stellen
#define ParamFCB_CHFormatDecimalPlaces2              (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatDecimalPlaces2)) & FCB_CHFormatDecimalPlaces2Mask)
// Stellenanzahl
#define ParamFCB_CHFormatSignificant2                (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatSignificant2)) & FCB_CHFormatSignificant2Mask)
// Auffüllen
#define ParamFCB_CHFormatFillupPrecomma2             ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupPrecomma2)) & FCB_CHFormatFillupPrecomma2Mask) >> FCB_CHFormatFillupPrecomma2Shift)
// Auffüllen
#define ParamFCB_CHFormatFillupMode2                 ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupMode2)) & FCB_CHFormatFillupMode2Mask) >> FCB_CHFormatFillupMode2Shift)
// Auffüllen nach Komma
#define ParamFCB_CHFormatFillupAfterComma2           (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupAfterComma2)) & FCB_CHFormatFillupAfterComma2Mask)
// Rundungsart
#define ParamFCB_CHFCBFormatRoundType2               ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFCBFormatRoundType2)) & FCB_CHFCBFormatRoundType2Mask) >> FCB_CHFCBFormatRoundType2Shift)
// Stellen
#define ParamFCB_CHFormatFillupLength2               (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupLength2)) & FCB_CHFormatFillupLength2Mask)
// Anzeige als
#define ParamFCB_CHFormatBit2                        (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatBit2)))
// Datentype
#define ParamFCB_CHFormatIn3                         (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatIn3)))
// Runden
#define ParamFCB_CHFormatRoundFloat3                 ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatRoundFloat3)) & FCB_CHFormatRoundFloat3Mask) >> FCB_CHFormatRoundFloat3Shift)
// Runden
#define ParamFCB_CHFormatRound3                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatRound3)) & FCB_CHFormatRound3Mask) >> FCB_CHFormatRound3Shift)
// Auf 5 Runden
#define ParamFCB_CHFCBFormatRound5_3                 ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHFCBFormatRound5_3)) & FCB_CHFCBFormatRound5_3Mask))
// Stellen
#define ParamFCB_CHFormatDecimalPlaces3              (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatDecimalPlaces3)) & FCB_CHFormatDecimalPlaces3Mask)
// Stellenanzahl
#define ParamFCB_CHFormatSignificant3                (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatSignificant3)) & FCB_CHFormatSignificant3Mask)
// Auffüllen
#define ParamFCB_CHFormatFillupPrecomma3             ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupPrecomma3)) & FCB_CHFormatFillupPrecomma3Mask) >> FCB_CHFormatFillupPrecomma3Shift)
// Auffüllen
#define ParamFCB_CHFormatFillupMode3                 ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupMode3)) & FCB_CHFormatFillupMode3Mask) >> FCB_CHFormatFillupMode3Shift)
// Auffüllen nach Komma
#define ParamFCB_CHFormatFillupAfterComma3           (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupAfterComma3)) & FCB_CHFormatFillupAfterComma3Mask)
// Rundungsart
#define ParamFCB_CHFCBFormatRoundType3               ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFCBFormatRoundType3)) & FCB_CHFCBFormatRoundType3Mask) >> FCB_CHFCBFormatRoundType3Shift)
// Stellen
#define ParamFCB_CHFormatFillupLength3               (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupLength3)) & FCB_CHFormatFillupLength3Mask)
// Anzeige als
#define ParamFCB_CHFormatBit3                        (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatBit3)))
// Datentype
#define ParamFCB_CHFormatIn4                         (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatIn4)))
// Runden
#define ParamFCB_CHFormatRoundFloat4                 ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatRoundFloat4)) & FCB_CHFormatRoundFloat4Mask) >> FCB_CHFormatRoundFloat4Shift)
// Runden
#define ParamFCB_CHFormatRound4                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatRound4)) & FCB_CHFormatRound4Mask) >> FCB_CHFormatRound4Shift)
// Auf 5 Runden
#define ParamFCB_CHFCBFormatRound5_4                 ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHFCBFormatRound5_4)) & FCB_CHFCBFormatRound5_4Mask))
// Stellen
#define ParamFCB_CHFormatDecimalPlaces4              (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatDecimalPlaces4)) & FCB_CHFormatDecimalPlaces4Mask)
// Stellenanzahl
#define ParamFCB_CHFormatSignificant4                (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatSignificant4)) & FCB_CHFormatSignificant4Mask)
// Auffüllen
#define ParamFCB_CHFormatFillupPrecomma4             ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupPrecomma4)) & FCB_CHFormatFillupPrecomma4Mask) >> FCB_CHFormatFillupPrecomma4Shift)
// Auffüllen
#define ParamFCB_CHFormatFillupMode4                 ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupMode4)) & FCB_CHFormatFillupMode4Mask) >> FCB_CHFormatFillupMode4Shift)
// Auffüllen nach Komma
#define ParamFCB_CHFormatFillupAfterComma4           (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupAfterComma4)) & FCB_CHFormatFillupAfterComma4Mask)
// Rundungsart
#define ParamFCB_CHFCBFormatRoundType4               ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHFCBFormatRoundType4)) & FCB_CHFCBFormatRoundType4Mask) >> FCB_CHFCBFormatRoundType4Shift)
// Stellen
#define ParamFCB_CHFormatFillupLength4               (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatFillupLength4)) & FCB_CHFormatFillupLength4Mask)
// Anzeige als
#define ParamFCB_CHFormatBit4                        (knx.paramByte(FCB_ParamCalcIndex(FCB_CHFormatBit4)))

// deprecated
#define FCB_KoOffset 250

// Communication objects per channel (multiple occurrence)
#define FCB_KoBlockOffset 250
#define FCB_KoBlockSize 10

#define FCB_KoCalcNumber(index) (index + FCB_KoBlockOffset + _channelIndex * FCB_KoBlockSize)
#define FCB_KoCalcIndex(number) ((number >= FCB_KoCalcNumber(0) && number < FCB_KoCalcNumber(FCB_KoBlockSize)) ? (number - FCB_KoBlockOffset) % FCB_KoBlockSize : -1)
#define FCB_KoCalcChannel(number) ((number >= FCB_KoBlockOffset && number < FCB_KoBlockOffset + FCB_ChannelCount * FCB_KoBlockSize) ? (number - FCB_KoBlockOffset) / FCB_KoBlockSize : -1)

#define FCB_KoCHKO0 0
#define FCB_KoCHKO1 1
#define FCB_KoCHKO2 2
#define FCB_KoCHKO3 3
#define FCB_KoCHKO4 4
#define FCB_KoCHKO5 5
#define FCB_KoCHKO6 6
#define FCB_KoCHKO7 7
#define FCB_KoCHKO8 8
#define FCB_KoCHKO9 9

// 
#define KoFCB_CHKO0                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO0)))
// 
#define KoFCB_CHKO1                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO1)))
// 
#define KoFCB_CHKO2                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO2)))
// 
#define KoFCB_CHKO3                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO3)))
// 
#define KoFCB_CHKO4                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO4)))
// 
#define KoFCB_CHKO5                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO5)))
// 
#define KoFCB_CHKO6                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO6)))
// 
#define KoFCB_CHKO7                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO7)))
// 
#define KoFCB_CHKO8                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO8)))
// 
#define KoFCB_CHKO9                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO9)))


// enumeration types
enum class PT_Logic
{
    AUS = 0,
    UND = 1,
    ODER = 2,
    EXOR = 3,
    TOR = 4,
    SCHALTER = 6,
    ZEITSCHALTUHR = 5
};

enum class PT_Calculate
{
    Invalid = 0,
    Valid = 1
};

enum class PT_GateTrigger
{
    None = 0,
    Off = 1,
    On = 2,
    Input = 3
};

enum class PT_LockTrigger
{
    None = 0,
    Off = 1,
    On = 2,
    Value = 3
};

enum class PT_LockResetQueue
{
    None = 0,
    ResetAfterLock = 1,
    ResetAfterUnlock = 2
};

enum class PT_InputEnable
{
    Inactive = 0,
    ActiveNormal = 1,
    ActiveInverted = 2
};

enum class PT_InputConv
{
    Wertintervall = 0,
    Differenzintervall = 1,
    Hysterese = 2,
    Differenzhysterese = 3,
    Einzelwerte = 4,
    Konstante = 5,
    Eingangswert = 6,
    Trigger = 7
};

enum class PT_LogicDpt
{
    DPT_1 = 0,
    DPT_2 = 1,
    DPT_3 = 17,
    DPT_5 = 2,
    DPT_5001 = 3,
    DPT_6 = 4,
    DPT_7 = 5,
    DPT_8 = 6,
    DPT_9 = 7,
    DPT_12 = 13,
    DPT_13 = 14,
    DPT_14 = 15,
    DPT_16 = 8,
    DPT_17 = 9,
    DPT_232 = 10
};

enum class PT_InputDefault
{
    None = 0,
    Bus = 1,
    Off = 2,
    On = 3
};

enum class PT_OnOffRepeat
{
    Verzoegerung_bleibt_bestehen = 0,
    Verzoegerung_wird_verlaengert = 1,
    Sofort_schalten_ohne_Verzoegerung = 2
};

enum class PT_OnOffReset
{
    Verzoegerung_bleibt_bestehen = 0,
    Verzoegerung_beenden_ohne_zu_schalten = 1
};

enum class PT_OutputFilter
{
    Alle_Wiederholungen_durchlassen = 0,
    Nur_EIN_Wiederholungen_durchlassen = 1,
    Nur_AUS_Wiederholungen_durchlassen = 2,
    Keine_Wiederholungen_durchlassen = 3
};

enum class PT_SendOnChange
{
    Alle_Werte_senden = 0,
    Nur_geaenderte_Werte_senden = 1
};

enum class PT_OutputSend
{
    None = 0,
    Constant = 1,
    ValueInput1 = 2,
    ValueInput2 = 3,
    OtherKo = 9,
    Function = 8,
    ReadRequest = 4,
    RestartDevice = 5,
    StatusLed = 7
};

enum class PT_YearDay
{
    Tagesschaltuhr = 0,
    Jahresschaltuhr = 1,
    Tagesschaltuhr_verbunden = 2,
    Jahresschaltuhr_verbunden = 3
};

enum class PT_Holiday
{
    Feiertage_nicht_beachten = 0,
    An_Feiertagen_nicht_schalten = 1,
    Nur_an_Feiertagen_schalten = 2,
    Feiertage_wie_Sonntage_behandeln = 3
};

enum class PT_Vacation
{
    Urlaub_nicht_beachten = 0,
    Bei_Urlaub_nicht_schalten = 1,
    Nur_bei_Urlaub_schalten = 2,
    Urlaub_wie_Sonntag_behandeln = 3
};

enum class PT_DuskDawn
{
    Inactive = 0,
    PointInTime = 1,
    Sunrise_Plus = 4,
    Sunrise_Minus = 5,
    Sunrise_Earliest = 6,
    Sunrise_Latest = 7,
    Sunrise_DegreeUp = 12,
    Sunrise_DegreeDown = 14,
    Sunset_Plus = 8,
    Sunset_Minus = 9,
    Sunset_Earliest = 10,
    Sunset_Latest = 11,
    Sunset_DegreeUp = 13,
    Sunset_DegreeDown = 15
};

enum class PT_KORelInput
{
    None = 0,
    Absolute = 1,
    Relative = 2,
    Bitmask = 3
};

enum class PT_StatusLedEffect
{
    Aus = 0,
    Ein = 1,
    Blinken = 2,
    Pulsieren = 3,
    Aufblitzen = 4
};

enum class PT_InternalInputType
{
    Anderen_Logikkanal = 0,
    Statuskanal = 1
};



#ifdef MAIN_FirmwareRevision
#ifndef FIRMWARE_REVISION
#define FIRMWARE_REVISION MAIN_FirmwareRevision
#endif
#endif
#ifdef MAIN_FirmwareName
#ifndef FIRMWARE_NAME
#define FIRMWARE_NAME MAIN_FirmwareName
#endif
#endif
