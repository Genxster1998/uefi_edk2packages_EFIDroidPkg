#ifndef __LIBRARY_QCOM_PLATFORM_MMC_LIB_H__
#define __LIBRARY_QCOM_PLATFORM_MMC_LIB_H__

#include <Chipset/mmc.h>

VOID LibQcomPlatformMmcClockInit(MMC_PLATFORM_CALLBACK_API *Callback, UINT32 interface);
VOID LibQcomPlatformMmcClockConfig(MMC_PLATFORM_CALLBACK_API *Callback, UINT32 interface, UINT32 freq);

#endif