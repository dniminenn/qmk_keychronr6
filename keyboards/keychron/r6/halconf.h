/* SPDX-License-Identifier: GPL-2.0-or-later */
#pragma once

#ifdef LK_WIRELESS_ENABLE
#    define HAL_USE_RTC TRUE
#    define PAL_USE_CALLBACKS TRUE
#endif

#include_next <halconf.h>
