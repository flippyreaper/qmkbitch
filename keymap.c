#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT( \
  KC_PSLS,  KC_PAST,    KC_PMNS,    KC_LSFT,    KC_LCTRL,   KC_ESC,  		      XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX, \
  KC_P7,    KC_P8,      KC_P9,      KC_SCLN,    KC_H,      KC_J,     		   	  XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX, \
  KC_P4,    KC_P5,      KC_P6,      KC_ENT,     KC_UP,       KC_ENT,   			  XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX, \
  KC_P1,    KC_P2,      KC_P3,      KC_LEFT,    KC_DOWN,      KC_RIGHT,   	 		  XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX, \
  KC_P0,    KC_PDOT,    KC_PPLS,    KC_F6,    KC_VOLD,    KC_VOLU,  			  XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX \
)


};



void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);

}
