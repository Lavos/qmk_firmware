/* Copyright 2015-2017 Jack Humbert
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

enum preonic_layers {
	_BASE,
	_BLUE,
	_RED, 
	_YELLOW
};

enum preonic_keycodes {
	BASE = SAFE_RANGE,
	BLUE,
	RED,
	YELLOW
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_preonic_grid( \
	GRAVE_ESC,	KC_EXLM,	KC_AT,		KC_HASH,	KC_DOLLAR,	KC_PERC,	KC_CIRC,	KC_AMPR,	KC_ASTR,	KC_MINUS,	KC_EQUAL,	KC_BSPC,\
	KC_TAB,		KC_Q,		KC_W,		KC_E,		KC_R,		KC_T,		KC_Y,		KC_U,		KC_I,		KC_O,		KC_P,		KC_DEL,	\
	KC_LOCK,	KC_A,		KC_S,		KC_D,		KC_F,		KC_G,		KC_H,		KC_J,		KC_K,		KC_L,		KC_SCLN,	KC_PGUP,\
	KC_LSFT,	KC_Z,		KC_X,		KC_C,		KC_V,		KC_B,		KC_N,		KC_M,		KC_COMM,	KC_DOT,		KC_SLSH,	KC_PGDOWN,\
	KC_LCTL,	KC_LALT,	LCTL(KC_A),	MO(_RED),	MO(_YELLOW),	KC_SPC,		KC_ENT,		MO(_BLUE),	KC_LGUI,	_______,	RCTL(KC_A),	KC_RCTL\
),

[_BLUE] = LAYOUT_preonic_grid( \
	KC_F1,		KC_F2,		KC_F3,		KC_F4,		KC_F5,		KC_F6,		KC_F7,		KC_F8,		KC_F9,		KC_F10,		KC_F11,		KC_F12,	\
	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,\
	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,\
	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,\
	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______ \
)
,
[_RED] = LAYOUT_preonic_grid( \
	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	KC_LPRN,	KC_RPRN,	KC_GRAVE,	KC_BSLASH,\
	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	KC_LCBR,	KC_RCBR,	_______,	KC_INSERT,\
	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	KC_LBRC,	KC_RBRC,	KC_QUOTE,	KC_HOME,\
	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	KC_LT,		KC_GT,		KC_UP,		KC_END,\
	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	KC_LEFT,	KC_DOWN,	KC_RIGHT\
),

[_YELLOW] = LAYOUT_preonic_grid( \
	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	KC_P7,		KC_P8,		KC_P9,		_______,\
	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	KC_P4,		KC_P5,		KC_P6,		_______,\
	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	KC_P1,		KC_P2,		KC_P3,		KC_NLCK,\
	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	KC_P0,		_______,	_______,	_______,\
	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______ \
),

};
