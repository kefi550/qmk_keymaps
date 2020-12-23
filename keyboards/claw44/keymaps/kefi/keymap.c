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
};

#define KC_ KC_TRNS
#define KC_RST RESET
#define KC_R_SPC LT(_RAISE, KC_SPC)
#define KC_L_TAB LT(_LOWER, KC_TAB)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT( \
    //,--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------.
       KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,     KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_ESC,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
       KC_LCTL , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,     KC_H   , KC_J   , KC_K   , KC_L   , KC_COLN, KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
       KC_LGUI , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,     KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
    //`--------+--------+--------+--------+--------+--------/   \--------+--------+--------+--------+--------+--------'
                         KC_LALT ,KC_R_SPC, KC_LSFT, KC_ESC ,     KC_RCTL, KC_ENT ,KC_L_TAB, KC_RALT
    //                 `---------+--------+--------+--------'   `--------+--------+--------+--------'
    ),

    [_RAISE] = LAYOUT( \
    //,--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------.
       KC_TAB  , KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC,     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_ESC,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
       KC_LCTL , KC_DQUO, KC_PIPE, KC_TILD, KC_BTN1, KC_BTN2,     KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_COLN, KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
       KC_LGUI , _______, _______, _______, KC_UNDS, KC_LCBR,     KC_RCBR, KC_PLUS, KC_LT  , KC_GT  , KC_QUES, KC_RALT,
    //`--------+--------+--------+--------+--------+--------/   \--------+--------+--------+--------+--------+--------'
                         KC_LALT ,KC_R_SPC, KC_LSFT, KC_ESC ,     KC_RCTL, KC_ENT ,KC_L_TAB, KC_RALT
    //                  `--------+--------+--------+--------'   `--------+--------+--------+--------'
    ),

    [_LOWER] = LAYOUT( \
    //,--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------.
       KC_TAB  , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,     KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_ESC,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
       KC_LCTL , KC_QUOT, KC_BSLS, KC_GRV , KC_BTN1, KC_BTN2,     KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_SCLN, KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
       KC_LGUI , _______, _______, _______, KC_MINS, KC_LBRC,     KC_RBRC, KC_EQL , KC_COMM, KC_DOT , KC_SLSH, KC_RALT,
    //`--------+--------+--------+--------+--------+--------/   \--------+--------+--------+--------+--------+--------'
                         KC_LALT ,KC_R_SPC, KC_LSFT, KC_ESC ,     KC_RCTL, KC_ENT ,KC_L_TAB, KC_RALT
    //                  `--------+--------+--------+--------'   `--------+--------+--------+--------'
    ),
};
