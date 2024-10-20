// Copyright 2024 James Gzowski
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum custom_layer {
	_LAYERA,
	_LAYERB,
	_LAYERC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_LAYERA] = LAYOUT_7x4(
	KC_1   ,KC_2	,KC_3	,KC_4	,KC_5	,KC_6	,KC_7,
	KC_Q   ,KC_W    ,KC_E   ,KC_R   ,KC_T   ,KC_Y   ,KC_U,
	KC_A   ,KC_S    ,KC_D   ,KC_F   ,KC_G   ,KC_H   ,KC_J,
		KC_X    ,KC_C   ,KC_V   ,KC_B   ,KC_N   ,KC_M
),
	[_LAYERB] = LAYOUT_7x4(
        KC_1   ,KC_2    ,KC_3   ,KC_4   ,KC_5   ,KC_6   ,KC_7,
        KC_Q   ,KC_W    ,KC_E   ,KC_R   ,KC_T   ,KC_Y   ,KC_U,
        KC_A   ,KC_S    ,KC_D   ,KC_F   ,KC_G   ,KC_H   ,KC_J,
                KC_X    ,KC_C   ,KC_V   ,KC_B   ,KC_N   ,KC_M
),
	[_LAYERC] = LAYOUT_7x4(
        KC_1   ,KC_2    ,KC_3   ,KC_4   ,KC_5   ,KC_6   ,KC_7,
        KC_Q   ,KC_W    ,KC_E   ,KC_R   ,KC_T   ,KC_Y   ,KC_U,
        KC_A   ,KC_S    ,KC_D   ,KC_F   ,KC_G   ,KC_H   ,KC_J,
                KC_X    ,KC_C   ,KC_V   ,KC_B   ,KC_N   ,KC_M
)
};
