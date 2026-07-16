/* SPDX-License-Identifier: GPL-2.0-or-later */
#pragma once

#include_next <mcuconf.h>

#undef WB32_I2C_USE_I2C1
#define WB32_I2C_USE_I2C1 TRUE

#undef WB32_SPI_USE_QSPI
#define WB32_SPI_USE_QSPI TRUE

#ifdef LK_WIRELESS_ENABLE

#define WB32_EXTI_REQUIRED
#undef WB32_LSI_ENABLED
#define WB32_LSI_ENABLED TRUE
#define WB32_RTCSEL WB32_RTCSEL_HSEDIV
#define WB32_RTCLP_SEL WB32_RTCSEL_LSI
#define WB32_RTCAlarm_IRQ_PRIORITY 14
#define WB32_RTC_IRQ_PRIORITY      15
#endif
