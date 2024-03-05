#include "21pcb.h"

#define _BASE 0
#define _EXTRA 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// LAYER 0 - BASE
//    ,---------------------------.
//    |      |      |      |      |
//    |------+------+------+------|
//    |      |      |      |      |
//    |------+------+------+------|
//    |      |      |      |      |
//    |------+------+------+      |
//    |      |      |      |      |
//    |------+------+------+------|
//    |      |      |      |      |
//    |------+------+------+      |
//    |             |      |      |
//    `---------------------------'
	[_BASE] = LAYOUT(
		KC_F2, KC_F3, KC_F8, KC_F9, 
		MO(1), KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS, 
		KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_PLUS, 
		KC_KP_4, KC_KP_5, KC_KP_6, 
		KC_KP_1, KC_KP_2, KC_KP_3, LALT(KC_KP_ENTER), 
		KC_KP_0, KC_KP_DOT),

		
// LAYER 1 - EXTRA
//    ,---------------------------.
//    |      |      |      |      |
//    |------+------+------+------|
//    |      |      |      |      |
//    |------+------+------+------|
//    |      |      |      |      |
//    |------+------+------+      |
//    |      |      |      |      |
//    |------+------+------+------|
//    |      |      |      |      |
//    |------+------+------+      |
//    |             |      |      |
//    `---------------------------'
	[_EXTRA] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLU, 
		KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_MUTE, KC_TRNS)

};

void matrix_scan_user(void) {
	
}