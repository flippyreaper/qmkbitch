#include QMK_KEYBOARD_H

enum unicode_name {
  GRIN, // grinning face 😊
  TJOY, // tears of joy 😂
  SMILE, // grining face with smiling eyes 😁
};
  const uint32_t PROGMEM unicode_map[] = {
  [GRIN] = 0x1F600,
  [TJOY] = 0x1F602,
  [SMILE] = 0x1F601,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


		
	//Default Layer
	//Layer 0
	LAYOUT( 
		KC_ESC,  X_PLUS,  X_ES,    X_SS,    X_CC,     X_RR,   X_ZZ,   X_YY,   X_AA,   X_II,    X_EE,    X_MINS,  X_CARK, X_BSLS,  KC_X, 
		X_FN,    KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    X_LBRC,  X_RBRC, KC_BSPC,
		X_NUMB,  KC_A,    KC_S,    KC_D,    KC_F,     KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    X_SCLN,  X_APOS,   KC_ENT, 
		X_LSFT,  KC_NO, KC_Z,    KC_X,    KC_C,     KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  X_SLSH,  KC_RSFT, X_SYS,
		KC_LCTL, KC_LGUI, KC_LALT, KC_NO, KC_SPC, KC_NO,  KC_RALT, KC_X, KC_NO, KC_X, KC_RCTRL),
		
	//Shift + US layer
	//Shift
	//Layer 1
	LAYOUT( 
		X_TILD, X_EXLM, X_AT , X_HASH, X_DLR, X_PERC, X_CIRC, X_AMPR, X_ASTR, X_LPRN, X_RPRN, X_UNDS, X_HACK, X_PIPE, KC_X,
		_______, LSFT(KC_Q), LSFT(KC_W), LSFT(KC_E), LSFT(KC_R), LSFT(KC_T), LSFT(KC_Y), LSFT(KC_U), LSFT(KC_I), LSFT(KC_O), LSFT(KC_P), X_LCBR, X_RCBR, KC_BSPC,
		_______, LSFT(KC_A), LSFT(KC_S), LSFT(KC_D), LSFT(KC_F), LSFT(KC_G), LSFT(KC_H), LSFT(KC_J), LSFT(KC_K), LSFT(KC_L), X_COLN, X_DQT,  KC_ENT, 
		_______, KC_NO, LSFT(KC_Z), LSFT(KC_X), LSFT(KC_C), LSFT(KC_V), LSFT(KC_B), LSFT(KC_N), LSFT(KC_M), X_LABK, X_RABK, X_QUES, KC_RSFT, _______,
		_______, _______, _______,KC_NO, _______,KC_NO, _______, _______,KC_NO, _______, _______),  

		
		
	//Czech Layer
	//Layer 2
	LAYOUT(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS,  KC_X,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC,KC_BSPC, 
		X_NUMB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, 
		KC_LSFT, KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N,KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_UP, X_SYS,  
		_______, _______, _______,KC_NO, _______,KC_NO, _______, KC_LEFT,KC_NO, KC_DOWN, KC_RIGHT), 	
		
		

	//Second Layer / Number layer
	//Caps
	//Layer 3
	LAYOUT(
		KC_GRV, LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5), LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_0), X_EQLS, X_PLUS, X_PIPE, KC_DEL,
		_______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______,KC_PGUP, KC_UP, KC_PGDN, KC_PSCR, X_USHC, _______,  KC_DEL,
		_______, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, KC_HOME,KC_LEFT, KC_DOWN, KC_RGHT, X_USKR, _______,  _______, KC_X, 
		_______, KC_NO, _______, _______, _______, _______,KC_END, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______,KC_NO, _______,KC_NO, _______, _______,KC_NO, _______, _______),  

 
		
	//Cooking layer
	//Layer 4
	LAYOUT(
		KC_ESC, LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5), LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_0), X_EQLS, X_PLUS, X_PIPE, KC_DEL,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC,KC_BSPC, 
		MO(5), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, 
		KC_LSFT, KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N,KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_UP, X_SYS,  
		_______, _______, _______,KC_NO, _______,KC_NO, _______, KC_LEFT,KC_NO, KC_DOWN, KC_RIGHT),  
		
		
		
		//TEEST
	//Caps
	//Layer 5
	LAYOUT(
		KC_GRV, LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5), LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_0), X_EQLS, X_PLUS, X_PIPE, KC_DEL,
		_______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______,KC_PGUP, KC_UP, KC_PGDN, KC_PSCR, X_USHC, _______,  KC_DEL,
		_______, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, KC_HOME,KC_LEFT, KC_DOWN, KC_RGHT, X_USKR, _______,  _______, KC_X, 
		_______, KC_NO, _______, _______, _______, _______,KC_END, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______,KC_NO, _______,KC_NO, _______, _______,KC_NO, _______, _______),  
		
		
	//Unused layer
	//Layer 6
	LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  
		_______, KC_NO,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, KC_NO,   _______, KC_NO,   _______, _______, KC_NO,   _______, _______),  
		
		
		
	//Unused layer
	//Layer 7
	LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  
		_______, KC_NO,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, KC_NO,   _______, KC_NO,   _______, _______, KC_NO,   _______, _______),  	//Unused layer
	
	
	//Unused layer
	//Layer 8
	LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  
		_______, KC_NO,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, KC_NO,   _______, KC_NO,   _______, _______, KC_NO,   _______, _______),  
		
	
		
		
	//F-Row layer
	//Layer 9
	LAYOUT(
		KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11, KC_F12,  KC_DEL, _______,
		 TO(0), TO(1), TO(2), TO(3), TO(4), TO(5), TO(6), TO(7), TO(8), TO(9), _______, X(SMILE), X(TJOY), X(GRIN), 
KC_CAPS, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD,  _______, _______, _______, _______,  
		_______, KC_NO,   BL_DEC, BL_TOGG, BL_INC, BL_STEP, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, KC_NO,   RESET, KC_NO,   _______, _______, KC_NO,   _______, _______),  
		
	
	 
	
};
