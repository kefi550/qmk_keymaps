#include QMK_KEYBOARD_H

#define MASTER_LEFT

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum layer_number {
    _QWERTY = 0,
    _RAISE,
    _LOWER,
    _SHIFT,
};

#define KC_ KC_TRNS
#define KC_RST RESET
#define KC_R_SPC LT(_RAISE, KC_SPC)
#define KC_L_TAB LT(_LOWER, KC_TAB)
#define SFT_BSPC SFT_T(KC_BSPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT( \
    //,--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------.
       KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,     KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
       KC_LCTL , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,     KC_H   , KC_J   , KC_K   , KC_L   , KC_COLN, KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
       KC_LGUI , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,     KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RCTL,
    //`--------+--------+--------+--------+--------+--------/   \--------+--------+--------+--------+--------+--------'
                       KC_LALT,MO(_RAISE),KC_SPC,SFT_T(KC_ESC),SFT_T(KC_ESC),KC_ENT,MO(_LOWER),KC_RALT
    //                 `---------+--------+--------+--------'   `--------+--------+--------+--------'
    ),

    [_RAISE] = LAYOUT( \
    //,--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------.
       KC_TAB  , KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC,     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
       KC_LCTL , KC_DQUO, KC_PIPE, KC_TILD, KC_BTN1, KC_BTN2,     KC_LCBR, KC_RCBR, KC_UNDS, KC_MINS, KC_SCLN, KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
       KC_LGUI , KC_QUOT, KC_BSLS, KC_GRV , KC_PLUS, KC_EQL ,     KC_LBRC, KC_RBRC, KC_LT  , KC_GT  , KC_QUES, KC_RCTL,
    //`--------+--------+--------+--------+--------+--------/   \--------+--------+--------+--------+--------+--------'
                         KC_LALT , KC_NO ,KC_SPC,SFT_T(KC_ESC),SFT_T(KC_ESC),KC_ENT,MO(_SHIFT),KC_RALT
    //                  `--------+--------+--------+--------'   `--------+--------+--------+--------'
    ),

    [_LOWER] = LAYOUT( \
    //,--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------.
       KC_TAB  , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,     KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
       KC_LCTL , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,     KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_SCLN, KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
       KC_LGUI , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,     KC_BTN1, KC_BTN2, KC_LT  , KC_GT  , KC_QUES, KC_RCTL,
    //`--------+--------+--------+--------+--------+--------/   \--------+--------+--------+--------+--------+--------'
                       KC_LALT,MO(_SHIFT),KC_SPC,SFT_T(KC_ESC),SFT_T(KC_ESC),KC_ENT, KC_NO , KC_RALT
    //                  `--------+--------+--------+--------'   `--------+--------+--------+--------'
    ),
    //   KC_TAB  , KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC,     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
    ////|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
    //   KC_LCTL ,KC_NO   , KC_PIPE, KC_TILD, KC_BTN1, KC_BTN2,     KC_LCBR, KC_RCBR, KC_UNDS, KC_MINS, KC_SCLN, KC_BSPC,
    ////|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
    //   KC_LGUI , KC_QUOT, KC_BSLS, KC_GRV , KC_PLUS, KC_EQL ,     KC_LBRC, KC_RBRC, KC_LT  , KC_GT  , KC_QUES, KC_RCTL,
    ////`--------+--------+--------+--------+--------+--------/   \--------+--------+--------+--------+--------+--------'
    //                     KC_LALT , KC_NO ,KC_SPC,SFT_T(KC_ESC),SFT_T(KC_ESC),KC_ENT,MO(_SHIFT),KC_RALT
    ////                  `--------+--------+--------+--------'   `--------+--------+--------+--------'
    //),

    [_SHIFT] = LAYOUT( \
    //,--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------.
       KC_TAB  , S(KC_Q), S(KC_W), S(KC_E), S(KC_R), S(KC_T),     S(KC_Y), S(KC_U), S(KC_I), S(KC_O), S(KC_P), KC_RST ,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
       KC_LCTL , S(KC_A), S(KC_S), S(KC_D), S(KC_F), S(KC_G),     S(KC_H), S(KC_J), S(KC_K), S(KC_L),S(KC_COLN),KC_LSFT,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
       KC_LGUI , S(KC_Z), S(KC_X), S(KC_C), S(KC_V), S(KC_B),     S(KC_N), S(KC_M),S(KC_COMM),S(KC_DOT),S(KC_SLSH),KC_RCTL,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
                         KC_LALT , KC_NO  , KC_SPC , KC_NO  ,     KC_NO  , KC_ENT , KC_NO  , KC_RALT
    //                  `--------+--------+--------+--------'   `--------+--------+--------+--------'
    ),
};
