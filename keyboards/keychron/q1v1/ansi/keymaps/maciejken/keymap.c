/* Copyright 2021 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "keymap_polish.h"

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Mac
    [0] = LAYOUT_ansi_82(
        KC_ESC,             KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RM_VALD,  RM_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_DEL,  KC_INS,
        KC_GRV,   KC_PSCR,  KC_X,     PL_SACU,  KC_F,     PL_ZACU,  KC_Q,     PL_ZDOT,  PL_CACU,  PL_NACU,  KC_V,     KC_LBRC,  KC_RBRC,  KC_BSPC,           KC_PGUP,
        KC_TAB,   KC_P,     KC_COMM,  KC_DOT,   KC_U,     KC_B,     KC_J,     KC_T,     KC_C,     KC_K,     KC_D,     KC_SLSH,  KC_EQL,   KC_BSLS,           KC_PGDN,
        KC_CAPS,  KC_Y,     KC_I,     KC_A,     KC_E,     KC_O,     KC_W,     KC_Z,     KC_R,     KC_N,     KC_S,     KC_MINS,            KC_ENT,            KC_HOME,
        KC_LSFT,            KC_SCLN,  KC_H,     PL_AOGO,  PL_EOGO,  PL_OACU,  PL_LSTR,  KC_M,     KC_L,     KC_G,     KC_QUOT,            KC_RSFT,  KC_UP,
        KC_LCTL,  MO(1),    KC_LGUI,                                KC_SPC,                                 KC_RGUI,  KC_RALT,  KC_RCTL,  KC_LEFT,  KC_DOWN, KC_RGHT),

    // Mac_fn
    [1] = LAYOUT_ansi_82(
        QK_BOOT,            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_SLEP, _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  _______,  _______,  _______,           _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_PERC,  _______,  _______,           _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_DOT,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,               _______,           _______,
        TG(4),              _______,  _______,  _______,  _______,  _______,  KC_CIRC,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,             _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______, _______),

    // Win
    [2] = LAYOUT_ansi_82(
        KC_ESC,             KC_BRID,  KC_BRIU,  KC_PSCR,  KC_CALC,  RM_VALD,  RM_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_DEL,  KC_INS,
        KC_GRV,   KC_PSCR,  KC_X,     PL_SACU,  KC_F,     PL_ZACU,  KC_Q,     PL_ZDOT,  PL_CACU,  PL_NACU,  KC_V,     KC_LBRC,  KC_RBRC,  KC_BSPC,           KC_PGUP,
        KC_TAB,   KC_P,     KC_COMM,  KC_DOT,   KC_U,     KC_B,     KC_J,     KC_T,     KC_C,     KC_K,     KC_D,     KC_SLSH,  KC_EQL,   KC_BSLS,           KC_PGDN,
        KC_CAPS,  KC_Y,     KC_I,     KC_A,     KC_E,     KC_O,     KC_W,     KC_Z,     KC_R,     KC_N,     KC_S,     KC_MINS,            KC_ENT,            KC_HOME,
        KC_LSFT,            KC_SCLN,  KC_H,     PL_AOGO,  PL_EOGO,  PL_OACU,  PL_LSTR,  KC_M,     KC_L,     KC_G,     KC_QUOT,            KC_RSFT,  KC_UP,
        KC_LCTL,  MO(3),    KC_LGUI,                                KC_SPC,                                 KC_RGUI,  KC_RALT,  KC_RCTL,  KC_LEFT,  KC_DOWN, KC_RGHT),

    // Win_fn
    [3] = LAYOUT_ansi_82(
        KC_PWR,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_SLEP, RM_SATU,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  _______,  _______,  _______,           RM_HUEU,
        RM_TOGG,  _______,  _______,  _______,  _______,  _______,  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_PERC,  _______,  _______,           RM_HUED,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_DOT,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,               _______,           RM_SATD,
        _______,            _______,  _______,  _______,  _______,  _______,  KC_CIRC,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,             _______,  RM_SPDU,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  RM_PREV,  RM_SPDD, RM_NEXT),
    
    // Mac QWERTY
    [4] = LAYOUT_ansi_82(
        KC_ESC,             KC_BRID,  KC_BRIU,  KC_NO,    KC_NO,    RM_VALD,  RM_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_DEL,   KC_INS,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,
        KC_LCTL,  MO(5),    KC_LCMD,                                KC_SPC,                                 KC_RCMD,  KC_ROPT,    KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [5] = LAYOUT_ansi_82(
        _______,            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        RM_TOGG,  RM_NEXT,  RM_VALU,  RM_HUEU,  RM_SATU,  RM_SPDU,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  RM_PREV,  RM_VALD,  RM_HUED,  RM_SATD,  RM_SPDD,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        TG(4),              _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______),
    
    // Win_dvorak
    // [4] = LAYOUT_ansi_82(
    //     KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,  KC_INS,
    //     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_LBRC,  KC_RBRC,  KC_BSPC,           KC_PGUP,
    //     KC_TAB,   KC_QUOT,  KC_COMM,  KC_DOT,   KC_P,     KC_Y,     KC_F,     KC_G,     KC_C,     KC_R,     KC_L,     KC_SLSH,  KC_EQL,   KC_BSLS,           KC_PGDN,
    //     KC_CAPS,  KC_A,     KC_O,     KC_E,     KC_U,     KC_I,     KC_D,     KC_H,     KC_T,     KC_N,     KC_S,     KC_MINS,            KC_ENT,            KC_HOME,
    //     KC_LSFT,            KC_SCLN,  KC_Q,     KC_J,     KC_K,     KC_X,     KC_B,     KC_M,     KC_W,     KC_V,     KC_Z,               KC_RSFT,  KC_UP,
    //     KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 TG(4),    KC_RGUI,  KC_RCTL,  KC_LEFT,  KC_DOWN, KC_RGHT)
};
