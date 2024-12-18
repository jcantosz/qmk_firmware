// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define XXX KC_NO

/****************************************************************************************************
*
* Keymap: Default Layer in Qwerty
*
* ,-------------------------------------------------------------------------------------------------------------------.
* | Esc    |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F8  |  F9  |  F10 |  F12 | PSCR | SLCK | PAUS |  FN0 |  BOOT  |
* |--------+------+------+------+------+------+---------------------------+------+------+------+------+------+--------|
* | =+     |  1!  |  2@  |  3#  |  4$  |  5%  |                           |  6^  |  7&  |  8*  |  9(  |  0)  | -_     |
* |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* | Tab    |   Q  |   W  |   E  |   R  |   T  |                           |   Y  |   U  |   I  |   O  |   P  | \|     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Caps   |   A  |   S  |   D  |   F  |   G  |                           |   H  |   J  |   K  |   L  |  ;:  | '"     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Shift  |   Z  |   X  |   C  |   V  |   B  |                           |   N  |   M  |  ,.  |  .>  |  /?  | Shift  |
* `--------+------+------+------+------+-------                           `------+------+------+------+------+--------'
*          | `~   | INS  | Left | Right|                                         | Up   | Down |  [{  |  ]}  |
*          `---------------------------'                                         `---------------------------'
*                                        ,-------------.         ,-------------.
*                                        | Ctrl | Alt  |         | Gui  | Ctrl |
*                                 ,------|------|------|         |------+------+------.
*                                 |      |      | Home |         | PgUp |      |      |
*                                 | BkSp | Del  |------|         |------|Return| Space|
*                                 |      |      | End  |         | PgDn |      |      |
*                                 `--------------------'         `--------------------'
*/

#ifdef RETAIN_NON_APLHA_KEYS

#define LAYOUT_miryoku(\
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09,\
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19,\
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29,\
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39\
)\
LAYOUT( \
    KC_ESCAPE,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_PSCR, KC_SCRL, KC_PAUS,  KC_NO,   QK_BOOT, \
\
    KC_EQL,      KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                                         KC_6,   KC_7,    KC_8,    KC_9,     KC_0,    KC_MINS, \
    KC_TAB,      K00,     K01,     K02,     K03,     K04,                                                          K05,    K06,     K07,     K08,      K09,     KC_BSLS, \
    KC_CAPS,     K10,     K11,     K12,     K13,     K14,                                                          K15,    K16,     K17,     K18,      K19,     KC_QUOT, \
    KC_LSFT,     K20,     K21,     K22,     K23,     K24,                                                          K25,    K26,     K27,     K28,      K29,     KC_RSFT, \
              KC_GRV,   KC_INS,   KC_LEFT,  KC_RGHT,                                                                       KC_UP,   KC_DOWN, KC_LBRC,  KC_RBRC,          \
\
                                                     KC_LCTL,  KC_LALT,                                  KC_RGUI,  KC_RCTL,                                              \
                                                               KC_HOME,                                            KC_PGUP,                                              \
                                            K32,     K33,      K34,                                      K35,      K36,    K37                                           \
)

#else

#define LAYOUT_miryoku(\
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09,\
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19,\
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29,\
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39\
)\
LAYOUT( \
    XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, QK_BOOT, \
    XXX, XXX, XXX, XXX, XXX, XXX,                               XXX, XXX, XXX, XXX, XXX, XXX, \
    XXX, K00, K01, K02, K03, K04,                               K05, K06, K07, K08, K09, XXX, \
    XXX, K10, K11, K12, K13, K14,                               K15, K16, K17, K18, K19, XXX, \
    XXX, K20, K21, K22, K23, K24,                               K25, K26, K27, K28, K29, XXX, \
         XXX, XXX, XXX, XXX,                                         XXX, XXX, XXX, XXX, \
                                 XXX,  XXX,            XXX, XXX, \
                                       XXX,            XXX, \
                             K32, K33, K34,            K35, K36, K37 \
)

#endif
