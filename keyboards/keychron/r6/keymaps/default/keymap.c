/* SPDX-License-Identifier: GPL-2.0-or-later */
#include QMK_KEYBOARD_H
#include "keychron_common.h"

enum layers { MAC_BASE, MAC_FN, WIN_BASE, WIN_FN };
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_ansi_100(
        KC_ESC, KC_BRID, KC_BRIU, KC_MAC_MISSION_CONTROL, KC_MAC_LAUCHPAD, UG_VALD, UG_VALU, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, KC_MAC_SCREEN_SHOT, _______, _______,
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_INS, KC_HOME, KC_PGUP, KC_NUM, KC_PSLS, KC_PAST, KC_PMNS,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, KC_END, KC_PGDN, KC_P7, KC_P8, KC_P9, KC_PPLS,
        LSFT_T(KC_CAPS), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_P4, KC_P5, KC_P6,
        SC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, SC_RSPC, KC_UP, KC_P1, KC_P2, KC_P3,
        KC_LCTL, KC_LOPTN, KC_LCMMD, KC_SPC, KC_RCMMD, KC_ROPTN, MO(1), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_P0, KC_PDOT, KC_PENT
    ),
    [MAC_FN] = LAYOUT_ansi_100(
        _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______, _______, _______,
        _______, BT_HST1, BT_HST2, BT_HST3, P2P4G, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        UG_TOGG, UG_NEXT, UG_VALU, UG_HUEU, UG_SATU, UG_SPDU, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        OS_TOGGL, UG_PREV, UG_VALD, UG_HUED, UG_SATD, UG_SPDD, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, BAT_LVL, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [WIN_BASE] = LAYOUT_ansi_100(
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SCRL, KC_PAUS,
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_INS, KC_HOME, KC_PGUP, KC_NUM, KC_PSLS, KC_PAST, KC_PMNS,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, KC_END, KC_PGDN, KC_P7, KC_P8, KC_P9, KC_PPLS,
        LSFT_T(KC_CAPS), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_P4, KC_P5, KC_P6,
        SC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, SC_RSPC, KC_UP, KC_P1, KC_P2, KC_P3,
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_APP, MO(3), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_P0, KC_PDOT, KC_PENT
    ),
    [WIN_FN] = LAYOUT_ansi_100(
        _______, KC_BRID, KC_BRIU, KC_WIN_TASK_VIEW, KC_WIN_FILE_EXPLORER, UG_VALD, UG_VALU, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, _______,
        _______, BT_HST1, BT_HST2, BT_HST3, P2P4G, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        UG_TOGG, UG_NEXT, UG_VALU, UG_HUEU, UG_SATU, UG_SPDU, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        OS_TOGGL, UG_PREV, UG_VALD, UG_HUED, UG_SATD, UG_SPDD, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, BAT_LVL, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, GU_TOGG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
};
