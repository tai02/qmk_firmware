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
    KC_ESC,    KC_1,    KC_2,    KC_3,     KC_4,                KC_5,  KC_6,                    KC_7,    KC_8,   KC_9,     KC_0,    JP_MINS, JP_CIRC, JP_YEN,  KC_BSPC,
    KC_TAB,    KC_Q,    KC_W,    KC_E,     KC_R,                KC_T,                           KC_Y,    KC_U,   KC_I,     KC_O,    KC_P,    JP_AT,   JP_LBRC, KC_ENT,
    KC_LCTRL,  KC_A,    KC_S,    KC_D,     KC_F,                KC_G,                           KC_H,    KC_J,   KC_K,     KC_L,    JP_SCLN, JP_COLN, JP_RBRC,
    KC_LSHIFT, KC_Z,    KC_X,    KC_C,     KC_V,                KC_B,                           KC_N,    KC_M,   JP_COMM,  JP_DOT,  JP_SLSH, JP_BSLS, KC_UP,   KC_RSHIFT,
    MO(FUNC),  KC_ESC,  KC_LALT, KC_LGUI,  LT(FUNC, KC_LANG2), KC_SPC,                         KC_BSPC, KC_ENT, KC_LANG1, KC_RGUI, KC_RALT, KC_LEFT, KC_DOWN, KC_RIGHT
  ),
  [FUNC] = LAYOUT(
    /* Left */                                                                     /* Right */
    _______,         LGUI(KC_1),    LGUI(KC_2),    LGUI(KC_3),     LGUI(KC_4), LGUI(KC_5),  LGUI(KC_6),              LGUI(KC_7),    LGUI(KC_8),   LGUI(KC_9),     LGUI(KC_0),    LGUI(JP_MINS), LGUI(JP_CIRC), LGUI(JP_YEN),  LGUI(KC_BSPC),
    LGUI(KC_TAB),    LGUI(KC_Q),    LGUI(KC_W),    LGUI(KC_E),     LGUI(KC_R), LGUI(KC_T),                           LGUI(KC_Y),    LGUI(KC_U),   LGUI(KC_I),     LGUI(KC_O),    LGUI(KC_P),    LGUI(JP_AT),   LGUI(JP_LBRC), LGUI(KC_ENT),
    LGUI(KC_LCTRL),  LGUI(KC_A),    LGUI(KC_S),    LGUI(KC_D),     LGUI(KC_F), LGUI(KC_G),                           KC_LEFT,       KC_DOWN,      KC_UP,          KC_RIGHT,      LGUI(JP_SCLN), LGUI(JP_COLN), LGUI(JP_RBRC),
    LGUI(KC_LSHIFT), LGUI(KC_Z),    LGUI(KC_X),    LGUI(KC_C),     LGUI(KC_V), LGUI(KC_B),                           LGUI(KC_N),    LGUI(KC_M),   LGUI(JP_COMM),  LGUI(JP_DOT),  LGUI(JP_SLSH), LGUI(JP_BSLS), LGUI(KC_UP),   LGUI(KC_RSHIFT),
    _______,         _______,       LGUI(KC_LALT), _______,        _______,    LGUI(KC_SPC),                         LGUI(KC_BSPC), LGUI(KC_ENT), LGUI(KC_LANG1), LGUI(KC_RGUI), LGUI(KC_RALT), LGUI(KC_LEFT), LGUI(KC_DOWN), LGUI(KC_RIGHT)
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
