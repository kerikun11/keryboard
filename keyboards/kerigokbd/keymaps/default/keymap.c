#include QMK_KEYBOARD_H
#include <kerigokbd.h>

#ifdef LAYOUT_split_3x6_3_ex2
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3_ex2(
      KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     MO(5), MO(5),       KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G, LSG(KC_S), A(KC_PSCR),  KC_H,    KC_J,    KC_K,    KC_L, JP_MINS,  KC_ENT,
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, JP_COMM,  JP_DOT, JP_SLSH,  KC_DEL,
                                          KEY_ALT, KEY_NUM,  KC_ESC,     KC_SPC, KEY_FUN, KEY_WIN
  ),
  [1] = LAYOUT_split_3x6_3_ex2(
      _______, JP_EXLM, JP_DQUO, JP_HASH,  JP_DLR, JP_PERC, KC_VOLU,    KC_BRIU, JP_AMPR, JP_QUOT, JP_ASTR, JP_CIRC, JP_TILD, _______,
      _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, KC_VOLD,    KC_BRID,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,
      _______,  JP_GRV,   JP_AT, JP_SCLN, JP_COLN, JP_UNDS,                      JP_PIPE, JP_PLUS,  JP_EQL, _______, JP_BSLS, _______,
                                          _______, _______, _______,    _______, _______, KC_RALT
  ),
  [2] = LAYOUT_split_3x6_3_ex2(
      _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F11,     KC_F12,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, _______,
      _______, JP_LPRN, JP_LCBR, JP_RCBR, JP_LBRC, JP_RBRC, JP_ZKHK,    JP_EISU, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, JP_RPRN, _______,
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
                                          KC_LGUI, _______, _______,    _______, _______, _______
  ),
  [3] = LAYOUT_split_3x6_3_ex2(
      _______, JP_EXLM,   JP_AT, JP_HASH,  JP_DLR, JP_PERC, KC_VOLU,    KC_BRIU, JP_CIRC, JP_AMPR, JP_ASTR, JP_PLUS, JP_PIPE, _______,
      _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, KC_VOLD,    KC_BRID,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,
      _______, JP_TILD,  JP_GRV, JP_SCLN, JP_COLN, JP_UNDS,                      JP_QUOT, JP_DQUO, JP_COMM,  JP_DOT, JP_SLSH, _______,
                                          _______, _______, _______,    _______, _______, _______
  ),
  [4] = LAYOUT_split_3x6_3_ex2(
      _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F11,     KC_F12,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, _______,
      _______, XXXXXXX, XXXXXXX, JP_LPRN, JP_RPRN, XXXXXXX, JP_ZKHK,    JP_EISU, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT,  JP_EQL, _______,
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      JP_LBRC, JP_RBRC, JP_LCBR, JP_RCBR, JP_BSLS, _______,
                                          _______, _______, _______,    _______, _______, _______
  ),
  [5] = LAYOUT_split_3x6_3_ex2(
      XXXXXXX, RGB_SPI, RGB_VAI, RGB_SAI, RGB_HUI, RGB_MOD, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, RGB_SPD, RGB_VAD, RGB_SAD, RGB_HUD,RGB_RMOD, RGB_M_R,    RGB_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                          QK_BOOT, QK_BOOT, QK_BOOT,    QK_BOOT, QK_BOOT, QK_BOOT
  ),
};
#endif

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [1] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [2] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [3] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [4] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [5] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
};
#endif
