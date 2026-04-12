#include "OpenKNX.h"
#include "NetworkModule.h"
#ifndef OPENKNX_USB_EXCHANGE_IGNORE
#include "UsbExchangeModule.h"
#endif
#ifndef OPENKNX_FILE_TRANSFER_IGNORE
#include "FileTransferModule.h"
#endif
#include "Logic.h"
#include "FunctionBlocksModule.h"
#include "SIPModule.h"
#include "IPCameraModule.h"

void setup()
{
#ifdef FIRMWARE_REVISION
    openknx.init();
#else
    openknx.init(MAIN_ApplicationVersion);
#endif
#ifdef NET_ModuleVersion
    openknx.addModule(2, openknxNetwork);
#endif
    openknx.addModule(1, openknxLogic);
#ifndef OPENKNX_USB_EXCHANGE_IGNORE
    openknx.addModule(5, openknxUsbExchangeModule);
#endif
#ifndef OPENKNX_FILE_TRANSFER_IGNORE
    openknx.addModule(6, openknxFileTransferModule);
#endif
    openknx.addModule(9, openknxFunctionBlocksModule);
    openknx.addModule(7, openknxSIPModule);
    openknx.addModule(8, openknxIPCameraModule);
    openknx.setup();
}

void loop()
{
    openknx.loop();
}

#ifdef OPENKNX_DUALCORE
void setup1()
{
    openknx.setup1();
}

void loop1()
{
    openknx.loop1();
}
#endif
