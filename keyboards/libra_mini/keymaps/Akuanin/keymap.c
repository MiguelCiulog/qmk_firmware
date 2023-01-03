/* SPDX-License-Identifier: GPL-2.0-or-later */

#define KC_LSQB S(KC_LBRC) // Left square bracket
#define KC_RSQB S(KC_RBRC) // Right square bracket

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   /**/  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,  KC_BSPC, 
		KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   /**/  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENTER, 
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   /**/  MO(3),   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOTE, 
		KC_ESC,  KC_LGUI, 		   KC_LALT, MO(1),   		 /**/  KC_SPACE,   		 MO(2), 				    KC_LBRC, KC_RBRC
	),

	[1] = LAYOUT(
		KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   /**/  KC_6,    KC_7,    KC_8,           KC_9,    KC_0,         KC_TRNS, KC_TRNS,
		KC_TAB,  KC_TRNS, KC_PSCR, KC_SCRL, KC_PGUP, KC_HOME,/**/  KC_LEFT, KC_DOWN, KC_UP,          KC_RGHT, KC_QUOT,      KC_BSLS,
		KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_PGDN, KC_END, /**/  KC_TRNS, KC_MINS, LSFT(KC_MINUS), KC_EQL,  LSFT(KC_EQL), KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS,  		   KC_TRNS, MO(3),      	 /**/  KC_TRNS, 		 KC_TRNS,		                         LSFT(KC_LBRC), LSFT(KC_RBRC)
	),

	[2] = LAYOUT(
		LSFT(KC_GRV), LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5),/**/ LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_0), LCTL(KC_DEL), LCTL(KC_BSPC),
		KC_TRNS,      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   /**/ KC_TRNS,    KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_TRNS,    KC_TRNS,
		KC_TRNS,      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   /**/ KC_TRNS,    KC_LBRC,    KC_LSQB,    KC_RSQB,    KC_RBRC,    KC_TRNS,      KC_TRNS,
		KC_TRNS,      KC_TRNS,    KC_TRNS,    KC_TRNS,                           /**/  MO(3),                 KC_TRNS,                            KC_TRNS, KC_TRNS
	),

	[3] = LAYOUT(
		KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  /**/  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,/**/  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,/**/  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  
		KC_TRNS, KC_TRNS,  		   KC_TRNS, KC_TRNS,    	 /**/  KC_TRNS, 		 KC_TRNS,				    KC_TRNS, KC_TRNS
	),

};
