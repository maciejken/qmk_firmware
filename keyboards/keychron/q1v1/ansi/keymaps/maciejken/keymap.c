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
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_LBRC,  KC_RBRC,  KC_BSPC,           KC_PGUP,
        KC_TAB,   KC_QUOT,  KC_COMM,  KC_DOT,   KC_P,     KC_Y,     KC_F,     KC_G,     KC_C,     KC_R,     KC_L,     KC_SLSH,  KC_EQL,   KC_BSLS,           KC_PGDN,
        KC_CAPS,  KC_A,     KC_O,     KC_E,     KC_U,     KC_I,     KC_D,     KC_H,     KC_T,     KC_N,     KC_S,     KC_MINS,            KC_ENT,            KC_HOME,
        KC_LSFT,            KC_SCLN,  KC_Q,     KC_J,     KC_K,     KC_X,     KC_B,     KC_M,     KC_W,     KC_V,     KC_Z,               KC_RSFT,  KC_UP,
        KC_LCTL,  KC_LGUI,  KC_LOPT,                                KC_SPC,                                 MO(1),    KC_RGUI, KC_RCTL,   KC_LEFT,  KC_DOWN, KC_RGHT),

    // Mac_fn
    [1] = LAYOUT_ansi_82(
        QK_BOOT,            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______, RM_SATU,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,           RM_HUEU,
        RM_TOGG,  RM_NEXT,  PL_NACU,  PL_SACU,  PL_CACU,  PL_ZACU,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,           RM_HUED,
        _______,  PL_AOGO,  PL_OACU,  PL_EOGO,  PL_LSTR,  PL_ZDOT,  _______,  _______,  _______,  _______,  _______,  _______,            _______,           RM_SATD,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  RM_SPDU,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  RM_PREV,  RM_SPDD, RM_NEXT),

    // Win
    [2] = LAYOUT_ansi_82(
        KC_ESC,             KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RM_VALD,  RM_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_DEL,  KC_INS,
        KC_GRV,   KC_LPRN,  KC_QUOT,  PL_SACU,  KC_F,     PL_ZACU,  KC_EQL,   KC_MINS,  PL_CACU,  PL_NACU,  KC_RPRN,  KC_LBRC,  KC_RBRC,  KC_BSPC,           KC_PGUP,
        KC_TAB,   KC_P,     KC_COMM,  KC_DOT,   KC_U,     KC_B,     KC_J,     KC_T,     KC_C,     KC_K,     KC_D,     KC_QUES,  KC_Q,     KC_BSLS,           KC_PGDN,
        KC_CAPS,  KC_Y,     KC_I,     KC_A,     KC_E,     KC_O,     KC_W,     KC_Z,     KC_R,     KC_N,     KC_S,     PL_ZDOT,            KC_ENT,            KC_HOME,
        KC_LSFT,            KC_X,     KC_H,     PL_AOGO,  PL_EOGO,  PL_OACU,  PL_LSTR,  KC_M,     KC_L,     KC_G,     KC_V,               KC_RSFT,  KC_UP,
        KC_LCTL,  KC_LGUI,  TG(3),                                  KC_SPC,                                 MO(3),    KC_RGUI,  KC_RCTL,  KC_LEFT,  KC_DOWN, KC_RGHT),

    // Win_fn
    [3] = LAYOUT_ansi_82(
        RM_TOGG,            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______, RM_SATU,
        _______,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_7,     KC_8,     KC_9,     KC_9,     KC_PLUS,  _______,  _______,           RM_HUEU,
        _______,  _______,  KC_SCLN,  KC_COLN,  _______,  _______,  _______,  KC_4,     KC_5,     KC_6,     KC_6,     KC_SLSH,  _______,  _______,           RM_HUED,
        _______,  _______,  _______,  _______,  KC_AMPR,  _______,  _______,  KC_1,     KC_2,     KC_3,     KC_PLUS,  KC_MINS,            _______,           RM_SATD,
        TG(4),              _______,  _______,  _______,  _______,  _______,  KC_ASTR,  KC_0,     KC_HASH,  _______,  _______,            TG(4),    RM_SPDU,
        _______,  _______,  TG(3),                                  _______,                                TG(3),    _______,  _______,  RM_PREV,  RM_SPDD, RM_NEXT),
    
    // Win_dvorak
    [4] = LAYOUT_ansi_82(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,  KC_INS,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_LBRC,  KC_RBRC,  KC_BSPC,           KC_PGUP,
        KC_TAB,   KC_QUOT,  KC_COMM,  KC_DOT,   KC_P,     KC_Y,     KC_F,     KC_G,     KC_C,     KC_R,     KC_L,     KC_SLSH,  KC_EQL,   KC_BSLS,           KC_PGDN,
        KC_CAPS,  KC_A,     KC_O,     KC_E,     KC_U,     KC_I,     KC_D,     KC_H,     KC_T,     KC_N,     KC_S,     KC_MINS,            KC_ENT,            KC_HOME,
        KC_LSFT,            KC_SCLN,  KC_Q,     KC_J,     KC_K,     KC_X,     KC_B,     KC_M,     KC_W,     KC_V,     KC_Z,               KC_RSFT,  KC_UP,
        KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 TG(4),    KC_RGUI,  KC_RCTL,  KC_LEFT,  KC_DOWN, KC_RGHT)
};
