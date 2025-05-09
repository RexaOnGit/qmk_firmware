#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _UP1 1
#define _UP2 2
#define _UP3 3

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,        KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_MINS,
        KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,        KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSLS,
        KC_LSFT, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,        KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
        KC_LCTL, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,        KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,
        KC_LALT,KC_CAPS,KC_INS ,KC_LBRC,KC_RBRC,                       KC_EQL , KC_UP ,KC_DOWN,KC_RALT,KC_RCTL,
                                        KC_BSPC,KC_SPC ,        KC_ENT, KC_DEL,
                                        KC_GRV ,KC_LWIN,        KC_HOME,KC_END
    ),

    [_UP1] = LAYOUT(
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,                        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                                        KC_TRNS,KC_TRNS,        KC_TRNS,KC_TRNS,
                                        KC_TRNS,KC_TRNS,        KC_TRNS,KC_TRNS
    ),

    [_UP2] = LAYOUT(
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,                        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                                        KC_TRNS,KC_TRNS,        KC_TRNS,KC_TRNS,
                                        KC_TRNS,KC_TRNS,        KC_TRNS,KC_TRNS
    ),

    [_UP3] = LAYOUT(
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,                        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                                        KC_TRNS,KC_TRNS,        KC_TRNS,KC_TRNS,
                                        KC_TRNS,KC_TRNS,        KC_TRNS,KC_TRNS
    )
};

void keyboard_post_init_user(void) {
    // Customise these values to desired behaviour
    debug_enable=true;
    //debug_matrix=true;
    debug_keyboard=true;
    //debug_mouse=true;
}
