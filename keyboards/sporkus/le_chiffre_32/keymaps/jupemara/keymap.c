// Copyright 2023 sporkus
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "../../rgb.c"

#define LT_LW LT(_LOWER, KC_LANG2)
#define LT_RS LT(_RAISE, KC_LANG1)
#define MT_ENAL MT(MOD_RALT, KC_ENT)
#define MT_SFBS MT(MOD_LSFT, KC_BSPC)
#define MT_CTAB MT(MOD_LCTL, KC_TAB)
#define MT_EGUI MT(MOD_LGUI, KC_ESC)
#define MT_SFB2 MT(MOD_LSFT, KC_BTN2)
#define TAB_R LCTL(KC_TAB)
#define TAB_L LSFT(LCTL(KC_TAB))
#define SS_MEM LGUI(LSFT(LCTL(KC_4)))
#define SS_DSK LGUI(LSFT(KC_4))
#define EMOJI G(C(KC_SPC))
#define CDEL S(G(KC_BSPC))

// Just something for quick testing, not meant to be used
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
         KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,      RGB_TOG,     KC_Y,   KC_U,   KC_I,    KC_O,   KC_P,
         KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                   KC_H,   KC_J,   KC_K,    KC_L,   KC_QUOT,
         KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,                   KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH,
                 KC_ESC, LT(1, KC_ESC),  KC_SPC,                 KC_SPC, LT(2, KC_BSPC)
    ),

    [1] = LAYOUT(
         _______,  _______,  _______,  _______,  _______,  QK_BOOT,  _______,  KC_7,     KC_8,     KC_9,     KC_0,
         _______,  _______,  _______,  _______,  _______,            _______,  KC_4,     KC_5,     KC_6,     _______,
         _______,  _______,  _______,  _______,  _______,            _______,  KC_1,     KC_2,     KC_3,     _______,
                                       _______,  _______,            _______,  _______
    ),

    [2] = LAYOUT(
         _______,  _______,  _______,  _______,  _______,  QK_BOOT,  _______,  _______,   _______,   _______,    _______,
         _______,  _______,  _______,  _______,  _______,            KC_LEFT,  KC_DOWN,   KC_UP,     KC_LEFT,    _______,
         _______,  _______,  _______,  _______,  _______,            _______,  _______,   _______,   _______,    _______,
                                       _______,  _______,            _______,  _______
    )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] =   { ENCODER_CCW_CW(RGB_HUD, RGB_HUI) },
    [2] =   { ENCODER_CCW_CW(RGB_VAD, RGB_VAI) }
};
#endif

