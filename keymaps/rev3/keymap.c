#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
    KC_ESC,  KC_1, KC_2, KC_3, KC_4, KC_5, KC_GRAVE,  KC_6,   KC_7,    KC_8,  KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_DEL,
    KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T,            KC_Y,   KC_U,    KC_I,  KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
    KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G,            KC_H,   KC_J,    KC_K,  KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,            KC_B,   KC_N,    KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
              KC_LALT, KC_LCMD,  KC_SPC,                KC_SPC,   KC_RCMD,    KC_LEFT, KC_DOWN, KC_UP, KC_RGHT
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
            if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
  }
  return true;
}

