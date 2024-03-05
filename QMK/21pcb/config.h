#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
//#define VENDOR_ID       0x4130
//#define PRODUCT_ID      0x0077
//#define DEVICE_VER      0x0001
//#define MANUFACTURER    alan0ford
//#define PRODUCT         21pcb
//#define DESCRIPTION     NumPad

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { F4, B6, B5, B3, B4, B2 }
#define MATRIX_COL_PINS { F5, F6, F7, D4 }
//#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
//#define BACKLIGHT_PIN B5
//#ifdef BACKLIGHT_PIN
//#define BACKLIGHT_LEVELS 3
//#endif

/* Encoder settings */
/* #define NUMBER_OF_ENCODERS 1 è deprecato */
//#define ENCODERS_PAD_A { B2 }
//#define ENCODERS_PAD_B { B6 }
//#define ENCODER_RESOLUTION 4

/* OLED driver */
//#ifdef OLED_ENABLE
//#define OLED_DISPLAY_128X32
//#define OLED_TIMEOUT 300000
//#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
//#define PREVENT_STUCK_MODIFIERS

//#define RGB_DI_PIN B4
//#ifdef RGB_DI_PIN
//#define RGBLIGHT_ANIMATIONS
//#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//#define RGBLED_NUM 3
//#define RGBLIGHT_HUE_STEP 8
//#define RGBLIGHT_SAT_STEP 8
//#define RGBLIGHT_VAL_STEP 8
//#endif

#endif