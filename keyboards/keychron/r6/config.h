/* SPDX-License-Identifier: GPL-2.0-or-later */
#pragma once

#include "eeconfig_kb.h"

#define HC595_DS   C3
#define HC595_STCP C2
#define HC595_SHCP C1
#define HC595_START_INDEX 5
#define HC595_END_INDEX   20

#define I2C1_SCL_PIN B8
#define I2C1_SDA_PIN B9
#define I2C1_CLOCK_SPEED 400000
#define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_2
#define I2C1_OPMODE OPMODE_I2C

#define EXTERNAL_EEPROM_BYTE_COUNT 8192
#define EXTERNAL_EEPROM_PAGE_SIZE 32
#define EXTERNAL_EEPROM_WRITE_TIME 5
#define EXTERNAL_EEPROM_I2C_BASE_ADDRESS 0b10100010

#define FN_KEY_1 MO(1)
#define FN_KEY_2 MO(3)

/* Tap/hold tuning for the Space Cadet shifts + Caps mod-tap: shorter term and
 * permissive-hold so fast rolls resolve to the hold (Shift) instead of emitting
 * a stray paren or dropping a shift. */
#define TAPPING_TERM 185
#define PERMISSIVE_HOLD

#define KEYCOMBO_OS_TOGGLE_ENABLE
#define KEYCOMBO_OS_SELECT_ENABLE
#define MAC_BASE_LAYER 0
#define WIN_BASE_LAYER 2

#if defined(KEYCOMBO_OS_SELECT_ENABLE) && !defined(__ASSEMBLER__)
#    include "eeprom.h"
#    include "nvm_eeprom_eeconfig_internal.h"
#endif

#ifdef RGB_MATRIX_ENABLE
#    define SPI_DRIVER SPIDQ
#    define SPI_SCK_PIN A5
#    define SPI_MISO_PIN A6
#    define SPI_MOSI_PIN A7
#    define SNLED27351_SELECT_PINS { C5, A3 }
#    define SNLED27351_SDB_PIN A2
#    define SNLED27351_SPI_DIVISOR 16
#    define RGB_MATRIX_LED_COUNT 104
#    define SNLED27351_CURRENT_TUNE \
        { 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78 }
/* Power-on default: solid green @ 75% (hue 85, val 191). First-flash/EEPROM-reset only. */
#    define RGB_MATRIX_DEFAULT_ON true
#    define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR
#    define RGB_MATRIX_DEFAULT_HUE 85
#    define RGB_MATRIX_DEFAULT_SAT 255
#    define RGB_MATRIX_DEFAULT_VAL 191
/* Lock indicators (keychron_rgb.c): backlight LED index of each lock key,
 * color/enable configurable from the Launcher. Num = LED 33, Caps = LED 58. */
#    define NUM_LOCK_INDEX 33
#    define CAPS_LOCK_INDEX 58
#endif

#define LED_CAPS_LOCK_PIN B15
#define LED_PIN_ON_STATE 0
#define LED_MAC_OS_PIN C6
#define LED_WIN_OS_PIN C7
#define LED_OS_PIN_ON_STATE 1
#define POWER_ON_LED_DURATION 3000

#ifdef LK_WIRELESS_ENABLE
#    define BT_MODE_SELECT_PIN A9
#    define P24G_MODE_SELECT_PIN A10
#    define LKBT51_RESET_PIN C4
#    define WIRELESS_TO_MCU_INT_PIN B1
#    define MCU_TO_WIRELESS_INT_PIN A4
#    define USB_POWER_SENSE_PIN B0
#    define USB_POWER_CONNECTED_LEVEL 0
#    define BAT_CHARGING_PIN B13
#    define BAT_CHARGING_LEVEL 0
#    define DP_PULLUP_CONTROL_PIN B10
#    define BAT_LOW_LED_PIN A8
#    define BAT_LOW_LED_PIN_ON_STATE 0
#    define BT_HOST_DEVICES_COUNT 3
#    define BT_INDICATION_LED_PIN_LIST { C8, C8, C8 }
#    define BT_INDICATION_LED_ON_STATE 0
#    define P24G_LED_PIN C9
#    if defined(RGB_MATRIX_ENABLE)

#        define BT_INDCATION_LED_MATRIX_LIST { 17, 18, 19 }
#        define P24G_INDICATION_LED_INDEX 20
#        define BAT_LEVEL_LED_LIST { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26 }
#        define LED_DRIVER_REINIT_ON_TRANSPORT_CHANGE
#        define RGB_MATRIX_SLEEP_TIMEOUT 120000  /* wireless/battery: sleep RGB after 2 min idle */
#    endif
#    define KEEP_USB_CONNECTION_IN_WIRELESS_MODE
#    define WIRELESS_NKRO_ENABLE
#endif
