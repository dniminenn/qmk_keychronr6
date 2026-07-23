/* SPDX-License-Identifier: GPL-2.0-or-later */
#include "keychron.h"
#if defined(LK_WIRELESS_ENABLE) && defined(RGB_MATRIX_ENABLE)
#    include "transport.h"
#endif

#ifdef RGB_MATRIX_ENABLE
const snled27351_led_t PROGMEM g_snled27351_leds[SNLED27351_LED_COUNT] = {

    {0, 0x60, 0x80, 0x70},
    {0, 0x62, 0x82, 0x72},
    {0, 0x63, 0x83, 0x73},
    {0, 0x64, 0x84, 0x74},
    {0, 0x65, 0x85, 0x75},
    {0, 0x66, 0x86, 0x76},
    {0, 0x67, 0x87, 0x77},
    {0, 0x68, 0x88, 0x78},
    {0, 0x69, 0x89, 0x79},
    {0, 0x6A, 0x8A, 0x7A},
    {0, 0x6B, 0x8B, 0x7B},
    {0, 0x6C, 0x8C, 0x7C},
    {0, 0x6D, 0x8D, 0x7D},
    {0, 0x6E, 0x8E, 0x7E},
    {0, 0x6F, 0x8F, 0x7F},
    {0, 0xBF, 0x9F, 0xAF},
    {0, 0x30, 0x50, 0x40},
    {0, 0x31, 0x51, 0x41},
    {0, 0x32, 0x52, 0x42},
    {0, 0x33, 0x53, 0x43},
    {0, 0x34, 0x54, 0x44},
    {0, 0x35, 0x55, 0x45},
    {0, 0x36, 0x56, 0x46},
    {0, 0x37, 0x57, 0x47},
    {0, 0x38, 0x58, 0x48},
    {0, 0x39, 0x59, 0x49},
    {0, 0x3A, 0x5A, 0x4A},
    {0, 0x3B, 0x5B, 0x4B},
    {0, 0x3C, 0x5C, 0x4C},
    {0, 0x3D, 0x5D, 0x4D},
    {0, 0x3E, 0x5E, 0x4E},
    {0, 0x3F, 0x5F, 0x4F},
    {0, 0xBE, 0x9E, 0xAE},
    {0, 0xBD, 0x9D, 0xAD},
    {0, 0xBC, 0x9C, 0xAC},
    {0, 0xBB, 0x9B, 0xAB},
    {0, 0xBA, 0x9A, 0xAA},
    {0, 0x00, 0x20, 0x10},
    {0, 0x01, 0x21, 0x11},
    {0, 0x02, 0x22, 0x12},
    {0, 0x03, 0x23, 0x13},
    {0, 0x04, 0x24, 0x14},
    {0, 0x05, 0x25, 0x15},
    {0, 0x06, 0x26, 0x16},
    {0, 0x07, 0x27, 0x17},
    {0, 0x08, 0x28, 0x18},
    {0, 0x09, 0x29, 0x19},
    {0, 0x0A, 0x2A, 0x1A},
    {0, 0x0B, 0x2B, 0x1B},
    {0, 0x0C, 0x2C, 0x1C},
    {0, 0x0D, 0x2D, 0x1D},
    {0, 0x0E, 0x2E, 0x1E},
    {0, 0x0F, 0x2F, 0x1F},
    {0, 0xB9, 0x99, 0xA9},
    {0, 0xB8, 0x98, 0xA8},
    {0, 0xB7, 0x97, 0xA7},
    {0, 0xB6, 0x96, 0xA6},
    {0, 0xB5, 0x95, 0xA5},
    {1, 0x0F, 0x2F, 0x1F},
    {1, 0x0E, 0x2E, 0x1E},
    {1, 0x0D, 0x2D, 0x1D},
    {1, 0x0C, 0x2C, 0x1C},
    {1, 0x0B, 0x2B, 0x1B},
    {1, 0x0A, 0x2A, 0x1A},
    {1, 0x09, 0x29, 0x19},
    {1, 0x08, 0x28, 0x18},
    {1, 0x07, 0x27, 0x17},
    {1, 0x06, 0x26, 0x16},
    {1, 0x05, 0x25, 0x15},
    {1, 0x04, 0x24, 0x14},
    {1, 0x03, 0x23, 0x13},
    {1, 0xB7, 0x97, 0xA7},
    {1, 0xB8, 0x98, 0xA8},
    {1, 0xB9, 0x99, 0xA9},
    {1, 0x3F, 0x5F, 0x4F},
    {1, 0x3D, 0x5D, 0x4D},
    {1, 0x3C, 0x5C, 0x4C},
    {1, 0x3B, 0x5B, 0x4B},
    {1, 0x3A, 0x5A, 0x4A},
    {1, 0x39, 0x59, 0x49},
    {1, 0x38, 0x58, 0x48},
    {1, 0x37, 0x57, 0x47},
    {1, 0x36, 0x56, 0x46},
    {1, 0x35, 0x55, 0x45},
    {1, 0x34, 0x54, 0x44},
    {1, 0x33, 0x53, 0x43},
    {1, 0x30, 0x50, 0x40},
    {1, 0xB4, 0x94, 0xA4},
    {1, 0xB5, 0x95, 0xA5},
    {1, 0xB6, 0x96, 0xA6},
    {1, 0x6F, 0x8F, 0x7F},
    {1, 0x6E, 0x8E, 0x7E},
    {1, 0x6D, 0x8D, 0x7D},
    {1, 0x69, 0x89, 0x79},
    {1, 0x65, 0x85, 0x75},
    {1, 0x64, 0x84, 0x74},
    {1, 0x63, 0x83, 0x73},
    {1, 0x62, 0x82, 0x72},
    {1, 0x61, 0x81, 0x71},
    {1, 0x60, 0x80, 0x70},
    {1, 0xB0, 0x90, 0xA0},
    {1, 0xB1, 0x91, 0xA1},
    {1, 0xB2, 0x92, 0xA2},
    {1, 0xB3, 0x93, 0xA3},
};

led_config_t g_led_config = {
    {
        {     0, NO_LED,      1,      2,      3,      4,      5,      6,      7,      8,      9,     10,     11,     12,     13,     14,     15, NO_LED, NO_LED, NO_LED, NO_LED},
        {    16,     17,     18,     19,     20,     21,     22,     23,     24,     25,     26,     27,     28,     29,     30,     31,     32,     33,     34,     35,     36},
        {    37,     38,     39,     40,     41,     42,     43,     44,     45,     46,     47,     48,     49,     50,     51,     52,     53,     54,     55,     56,     57},
        {    58,     59,     60,     61,     62,     63,     64,     65,     66,     67,     68,     69, NO_LED,     70, NO_LED, NO_LED, NO_LED,     71,     72,     73, NO_LED},
        {    74, NO_LED,     75,     76,     77,     78,     79,     80,     81,     82,     83,     84, NO_LED,     85, NO_LED,     86, NO_LED,     87,     88,     89, NO_LED},
        {    90,     91,     92, NO_LED, NO_LED, NO_LED,     93, NO_LED, NO_LED, NO_LED,     94,     95,     96,     97,     98,     99,    100,    101, NO_LED,    102,    103}
    },
    {
        {  0, 0}, { 22, 0}, { 33, 0}, { 44, 0}, { 56, 0}, { 67, 0}, { 78, 0}, { 90, 0}, {101, 0}, {112, 0}, {123, 0}, {134, 0}, {146, 0}, {157, 0}, {168, 0}, {179, 0}, {  0,13}, { 11,13}, { 22,13}, { 33,13}, { 44,13}, { 56,13}, { 67,13}, { 78,13}, { 90,13}, {101,13}, {112,13}, {123,13}, {134,13}, {146,13}, {157,13}, {168,13}, {179,13}, {190,13}, {196,13}, {213,13}, {224,13}, {  0,27}, { 11,27}, { 22,27}, { 33,27}, { 44,27}, { 56,27}, { 67,27}, { 78,27}, { 90,27}, {101,27}, {112,27}, {123,27}, {134,27}, {146,27}, {157,27}, {168,27}, {179,27}, {190,27}, {196,27}, {213,27}, {224,27}, {  0,40}, { 11,40}, { 22,40}, { 33,40}, { 44,40}, { 56,40}, { 67,40}, { 78,40}, { 90,40}, {101,40}, {112,40}, {123,40}, {140,40}, {190,32}, {196,32}, {213,32}, {  0,52}, { 22,52}, { 33,52}, { 44,52}, { 56,52}, { 67,52}, { 78,52}, { 90,52}, {101,52}, {112,52}, {123,52}, {140,52}, {168,52}, {190,57}, {196,57}, {213,57}, {  0,64}, { 11,64}, { 22,64}, { 67,64}, {112,64}, {123,64}, {134,64}, {146,64}, {157,64}, {168,64}, {179,64}, {190,64}, {213,64}, {224,64}
    },
    {
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
    }
};
#endif

#if defined(RGB_MATRIX_ENABLE) && defined(KEYCHRON_RGB_ENABLE)
/* Launcher per-key RGB defaults: every key solid green @ 75%, one region. */
HSV     default_per_key_led[RGB_MATRIX_LED_COUNT] = {[0 ... RGB_MATRIX_LED_COUNT - 1] = {85, 255, 191}};
uint8_t default_region[RGB_MATRIX_LED_COUNT]      = {0};
#endif

static uint32_t power_on_indicator_timer = 0;

#ifndef LK_WIRELESS_ENABLE
#    define CHG_SENSE_PIN B13
#    define CHG_RED_PIN A8
#    define CHG_GREEN_PIN C9
#    define CHG_BT_LED_PIN C8
static uint32_t charge_full_timer = 0;

static void charge_indicator_init(void) {
    gpio_set_pin_input_high(CHG_SENSE_PIN);
    gpio_set_pin_output_push_pull(CHG_RED_PIN);
    gpio_set_pin_output_push_pull(CHG_GREEN_PIN);
    gpio_set_pin_output_push_pull(CHG_BT_LED_PIN);
    gpio_write_pin(CHG_RED_PIN, 1);
    gpio_write_pin(CHG_GREEN_PIN, 1);
    gpio_write_pin(CHG_BT_LED_PIN, 1);
}

static void charge_indicator_task(void) {
    if (!gpio_read_pin(CHG_SENSE_PIN)) {
        charge_full_timer = 0;
        gpio_write_pin(CHG_RED_PIN, 0);
        gpio_write_pin(CHG_GREEN_PIN, 1);
    } else {
        if (!charge_full_timer) {
            charge_full_timer = timer_read32();
        } else if (timer_elapsed32(charge_full_timer) > 2000) {
            gpio_write_pin(CHG_RED_PIN, 1);
            gpio_write_pin(CHG_GREEN_PIN, 0);
        }
    }
}
#endif

#ifdef RGB_MATRIX_ENABLE
#    include "rgb_matrix.h"
#    include "lib/lib8tion/lib8tion.h"

/* Defined (weak) in rgb_matrix.c but not exposed in any header. */
rgb_t rgb_matrix_hsv_to_rgb(hsv_t hsv);

/* Jellybean Raindrops and Pixel Rain only repaint one random LED per tick, so
 * the lock indicator's red lingers on the Num/Caps key after unlock until a
 * drop happens to land there. On the falling edge, repaint that LED with the
 * same random-color formula the running effect uses. */
static void r6_sparse_effect_repaint(uint8_t index) {
    if (!rgb_matrix_is_enabled()) return;
    hsv_t hsv;
    switch (rgb_matrix_get_mode()) {
        case RGB_MATRIX_JELLYBEAN_RAINDROPS:
            hsv = (hsv_t){random8(), random8_min_max(127, 255), rgb_matrix_get_val()};
            break;
        case RGB_MATRIX_PIXEL_RAIN:
            hsv = (random8() & 2) ? (hsv_t){0, 0, 0} : (hsv_t){random8(), random8_min_max(127, 255), rgb_matrix_get_val()};
            break;
        default:
            return;
    }
    rgb_t rgb = rgb_matrix_hsv_to_rgb(hsv);
    rgb_matrix_set_color(index, rgb.r, rgb.g, rgb.b);
}

/* keychron_common.c owns led_update_kb; it calls this hook first. */
bool led_update_user(led_t led_state) {
    static led_t prev_led_state = {0};
    if (prev_led_state.num_lock && !led_state.num_lock) r6_sparse_effect_repaint(NUM_LOCK_INDEX);
    if (prev_led_state.caps_lock && !led_state.caps_lock) r6_sparse_effect_repaint(CAPS_LOCK_INDEX);
    prev_led_state = led_state;
    return true;
}
#endif

void eeconfig_init_kb(void) {
    default_layer_set(1U << WIN_BASE_LAYER);
    eeconfig_update_default_layer(1U << WIN_BASE_LAYER);
    eeconfig_init_user();
}

void factory_reset_nofity(void) {}

void keyboard_post_init_kb(void) {
    gpio_set_pin_output_push_pull(LED_MAC_OS_PIN);
    gpio_set_pin_output_push_pull(LED_WIN_OS_PIN);
    gpio_write_pin(LED_MAC_OS_PIN, !LED_OS_PIN_ON_STATE);
    gpio_write_pin(LED_WIN_OS_PIN, !LED_OS_PIN_ON_STATE);
    /* Stock firmware drives B14 low at boot (purpose unknown); replicate for parity. */
    gpio_set_pin_output_push_pull(B14);
    gpio_write_pin(B14, 0);
#ifndef LK_WIRELESS_ENABLE
    charge_indicator_init();
#endif

    keychron_common_init();
    keyboard_post_init_user();
    power_on_indicator_timer = timer_read32();
}

void keychron_task_kb(void) {
#ifndef LK_WIRELESS_ENABLE
    charge_indicator_task();
#endif
#if defined(LK_WIRELESS_ENABLE) && defined(RGB_MATRIX_ENABLE)
    /* Transport-aware RGB idle timeout: infinite on wired (always lit), finite on
     * wireless so it sleeps to save battery. (The LED driver reinit on transport
     * change is handled by LED_DRIVER_REINIT_ON_TRANSPORT_CHANGE.) */
    static transport_t r6_last_transport = 0;
    static uint32_t r6_rerender_timer = 0;
    transport_t r6_tp = get_transport();
    if (r6_tp != r6_last_transport) {
        r6_last_transport = r6_tp;
        rgb_matrix_disable_timeout_set(r6_tp == TRANSPORT_USB ? RGB_MATRIX_TIMEOUT_INFINITE : RGB_MATRIX_SLEEP_TIMEOUT);
        rgb_matrix_disable_time_reset();
        /* PWM restore. The transport change browns out SNLED driver 1's PWM
         * registers, but snled27351_set_color skips the write (no dirty flag)
         * when the MCU-side buffer already holds the value, so a static effect
         * never rewrites the chip and the bottom rows stay dark. Zeroing the
         * MCU-side buffers makes the next frame differ, mark dirty, and flush
         * real colors to BOTH chips. Keychron's driver reinit already ran
         * synchronously inside the transport change (with its own settle wait),
         * so zero immediately for a seamless recovery, plus one silent backstop
         * in case the brown-out ever lags the edge (a zero-write on a healthy
         * chip is a single invisible frame). */
        rgb_matrix_set_color_all(0, 0, 0);
        r6_rerender_timer = timer_read32();
    }
    if (r6_rerender_timer && timer_elapsed32(r6_rerender_timer) > 1000) {
        r6_rerender_timer = 0;
        rgb_matrix_set_color_all(0, 0, 0);
    }
    /* In wired/USB mode the stack only clears the RGB suspend flag on wireless
     * activity, so keep RGB awake here. During a real host sleep the main loop
     * parks in the wireless suspend path and this task stops, so RGB still goes
     * dark when the PC actually sleeps. */
    if (r6_tp == TRANSPORT_USB) {
        rgb_matrix_set_suspend_state(false);
    }
#endif
#if defined(LK_WIRELESS_ENABLE) && defined(BAT_CHARGING_PIN) && defined(USB_POWER_SENSE_PIN) && defined(P24G_LED_PIN)
    /* MultiLink is a bi-color LED: RED (A8) while charging, GREEN (C9) when full.
     * Only driven on USB power; on battery the pins are left to indicator.c
     * (low-battery blink on A8, 2.4G indication on C9). Both are active-low. */
    if (gpio_read_pin(USB_POWER_SENSE_PIN) == USB_POWER_CONNECTED_LEVEL) {
        bool r6_charging = (gpio_read_pin(BAT_CHARGING_PIN) == BAT_CHARGING_LEVEL);
        gpio_write_pin(BAT_LOW_LED_PIN, r6_charging ? 0 : 1);  /* A8 red:   on while charging */
        gpio_write_pin(P24G_LED_PIN,    r6_charging ? 1 : 0);  /* C9 green: on when full      */
    }
#endif
    if (power_on_indicator_timer) {
        if (timer_elapsed32(power_on_indicator_timer) > POWER_ON_LED_DURATION) {
            power_on_indicator_timer = 0;
            gpio_write_pin(LED_CAPS_LOCK_PIN, host_keyboard_led_state().caps_lock ? LED_PIN_ON_STATE : !LED_PIN_ON_STATE);
            gpio_write_pin(LED_MAC_OS_PIN, !LED_OS_PIN_ON_STATE);
            gpio_write_pin(LED_WIN_OS_PIN, !LED_OS_PIN_ON_STATE);
        } else {
            gpio_write_pin(LED_CAPS_LOCK_PIN, LED_PIN_ON_STATE);
            gpio_write_pin(LED_MAC_OS_PIN, LED_OS_PIN_ON_STATE);
            gpio_write_pin(LED_WIN_OS_PIN, LED_OS_PIN_ON_STATE);
        }
    } else {
        if (get_highest_layer(default_layer_state) == MAC_BASE_LAYER) {
            gpio_write_pin(LED_MAC_OS_PIN, LED_OS_PIN_ON_STATE);
            gpio_write_pin(LED_WIN_OS_PIN, !LED_OS_PIN_ON_STATE);
        } else {
            gpio_write_pin(LED_MAC_OS_PIN, !LED_OS_PIN_ON_STATE);
            gpio_write_pin(LED_WIN_OS_PIN, LED_OS_PIN_ON_STATE);
        }
    }
}

void suspend_power_down_keychron_kb(void) {
    gpio_write_pin(LED_MAC_OS_PIN, !LED_OS_PIN_ON_STATE);
    gpio_write_pin(LED_WIN_OS_PIN, !LED_OS_PIN_ON_STATE);
    suspend_power_down_user();
}
