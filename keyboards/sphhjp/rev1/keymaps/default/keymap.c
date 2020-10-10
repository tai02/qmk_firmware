#include QMK_KEYBOARD_H
#include "keymap_jp.h"

enum layers{
    BASE,
    FUNC,
};

/* modify this keymap to customize. */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
    /* Left */                                                                     /* Right */
    KC_GRAVE,  KC_1,   KC_2,    KC_3,    KC_4,    KC_5, KC_6,                    KC_7,    KC_8,   KC_9,     KC_0,    JP_MINS, JP_CIRC, JP_YEN,  KC_BSPC,
    KC_TAB,    KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                          KC_Y,    KC_U,   KC_I,     KC_O,    KC_P,    JP_AT,   JP_LBRC, KC_ENT,
    KC_LCTRL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                          KC_H,    KC_J,   KC_K,     KC_L,    JP_SCLN, JP_COLN, JP_RBRC,
    KC_LSHIFT, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,                          KC_N,    KC_M,   JP_COMM,  JP_DOT,  JP_SLSH, JP_BSLS, KC_UP,   KC_RSHIFT,
    MO(FUNC),  KC_ESC, KC_LGUI, KC_LALT, KC_LGUI, KC_SPC,                        KC_BSPC, KC_ENT, KC_LANG1, KC_RGUI, KC_RALT, KC_LEFT, KC_DOWN, KC_RIGHT
  ),
  [FUNC] = LAYOUT(
    /* Left */                                                                     /* Right */
    _______, _______, _______, _______, _______, _______,  _______,              _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______, _______, _______
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

  }
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
