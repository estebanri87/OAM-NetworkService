#include "OpenKNX.h"
#include "NetworkModule.h"
#include "UsbExchangeModule.h"
#include "FileTransferModule.h"
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
    openknx.addModule(5, openknxUsbExchangeModule);
    openknx.addModule(6, openknxFileTransferModule);
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
