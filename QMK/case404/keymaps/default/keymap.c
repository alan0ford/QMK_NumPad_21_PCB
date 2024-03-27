#include "case404.h"

#define _BASE 0
#define _EXTRA 1

enum custom_keycodes {
    MACRO_1 = SAFE_RANGE,
	MACRO_2
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
		case MACRO_1:
			SEND_STRING(SS_DOWN(X_LWIN)SS_DOWN(X_LSFT)SS_TAP(X_S)SS_UP(X_LSFT)SS_UP(X_LWIN));
			return false;
		case MACRO_2:
			SEND_STRING(SS_TAP(X_F5));
			return false;
        }
    }
    return true;
};

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
		MACRO_1, MACRO_2, KC_F8, KC_F9, 
		LT(1, KC_SPC), KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS, 
		KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_PLUS, 
		KC_KP_4, KC_KP_5, KC_KP_6, 
		KC_KP_1, KC_KP_2, KC_KP_3, MT(MOD_LALT, KC_PENT), 
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
		KC_TRNS, KC_BSPC, KC_TAB, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, 
		KC_HOME, KC_UP, KC_PGUP, KC_VOLU, 
		KC_LEFT, QK_BOOT, KC_RGHT, 
		KC_END, KC_DOWN, KC_PGDN, KC_TRNS, 
		KC_MUTE, KC_DEL)

};

void matrix_scan_user(void) {
	
}