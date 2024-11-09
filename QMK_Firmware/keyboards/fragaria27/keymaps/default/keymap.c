// Copyright 2024 James Gzowski
// SPDX-License-Identifier: GPL-2.0-or-later
//WORK IN PROGRESS, STILL CONFIGURING LAYERC
#include QMK_KEYBOARD_H
#define FORCE_NKRO
#define COMBO_COUNT 18
enum custom_layer {
    _LAYERA,
    _LAYERB,
    _LAYERC
};
enum combos {
//layerA
    QF_W,
    FG_P,
    GL_J,
    LY_U,
    YMINS_SCLN,
    AS_R,
    SD_T,
    DN_H,
    NI_E,
    IQUOT_O,
    ZC_X,
    CB_V,
    BM_K,
    MDOT_COMM,
    COMMEQL_SLSH,
    SPCENT_LALT,
    ESCLCTL_TAB,
    MINSQUOT_GRV,
//LayerB
    ONETHREE_TWO,
    THREEFIVE_FOUR,
    FIVESEVEN_SIX,
    SEVENNINE_EIGHT,
    NINEGRV_ZERO,
    F1F3_F2,
    F3F5_F4,
    F5F7_F6,
    F7F9_F8,
    F9PEQL_F10,
    F11LBRC_F12,
//LayerC

};
//LayerA - COLEMAK
const uint16_t PROGMEM qf_combo[] = {KC_Q, KC_F, COMBO_END};
const uint16_t PROGMEM fg_combo[] = {KC_F, KC_G, COMBO_END};
const uint16_t PROGMEM gl_combo[] = {KC_G, KC_L, COMBO_END};
const uint16_t PROGMEM ly_combo[] = {KC_L, KC_Y, COMBO_END};
const uint16_t PROGMEM ymins_combo[] = {KC_Y, KC_MINS, COMBO_END};
const uint16_t PROGMEM as_combo[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM sd_combo[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM dn_combo[] = {KC_D, KC_N, COMBO_END};
const uint16_t PROGMEM ni_combo[] = {KC_N, KC_I, COMBO_END};
const uint16_t PROGMEM iquot_combo[] = {KC_I, KC_QUOT, COMBO_END};
const uint16_t PROGMEM zc_combo[] = {KC_Z, KC_C, COMBO_END};
const uint16_t PROGMEM cb_combo[] = {KC_C, KC_B, COMBO_END};
const uint16_t PROGMEM bm_combo[] = {KC_B, KC_M, COMBO_END};
const uint16_t PROGMEM mdot_combo[] = {KC_M, KC_DOT, COMBO_END};
const uint16_t PROGMEM commeql_combo[] = {KC_COMM, KC_EQL, COMBO_END};
const uint16_t PROGMEM spcent_combo[] = {KC_SPC, KC_ENT, COMBO_END};
const uint16_t PROGMEM esclctl_combo[] = {KC_ESC, KC_LCTL, COMBO_END};
const uint16_t PROGMEM minsquot_combo[] = {KC_MINS, KC_QUOT, COMBO_END};
//LayerB - Numeric
const uint16_t PROGMEM onethree_combo[] = {KC_1, KC_3, COMBO_END};
const uint16_t PROGMEM threefive_combo[] = {KC_3, KC_5, COMBO_END};
const uint16_t PROGMEM fiveseven_combo[] = {KC_5, KC_7, COMBO_END};
const uint16_t PROGMEM sevennine_combo[] = {KC_7, KC_9, COMBO_END};
const uint16_t PROGMEM ninegrv_combo[] = {KC_9, KC_GRV, COMBO_END};
const uint16_t PROGMEM f1f3_combo[] = {KC_F1, KC_F3, COMBO_END};
const uint16_t PROGMEM f3f5_combo[] = {KC_F3, KC_F5, COMBO_END};
const uint16_t PROGMEM f5f7_combo[] = {KC_F5, KC_F7, COMBO_END};
const uint16_t PROGMEM f7f9_combo[] = {KC_F7, KC_F9, COMBO_END};
const uint16_t PROGMEM f9peql_combo[] = {KC_F9, KC_PEQL, COMBO_END};
const uint16_t PROGMEM f11lbrc_combo[] = {KC_F11, KC_LBRC, COMBO_END};
//LayerC - Symbols / RGB

combo_t key_combos[COMBO_COUNT] = {
//LayerA - COLEMAK
    [QF_W] = COMBO(qf_combo, KC_W),
    [FG_P] = COMBO(fg_combo, KC_P),
    [GL_J] = COMBO(gl_combo, KC_J),
    [LY_U] = COMBO(ly_combo, KC_U),
    [YMINS_SCLN] = COMBO(ymins_combo, KC_SCLN),
    [AS_R] = COMBO(as_combo, KC_R),
    [SD_T] = COMBO(sd_combo, KC_T),
    [DN_H] = COMBO(dn_combo, KC_H),
    [NI_E] = COMBO(ni_combo, KC_E),
    [IQUOT_O] = COMBO(iquot_combo, KC_O),
    [ZC_X] = COMBO(zc_combo, KC_X),
    [CB_V] = COMBO(cb_combo, KC_V),
    [BM_K] = COMBO(bm_combo, KC_K),
    [MDOT_COMM] = COMBO(mdot_combo, KC_COMM),
    [COMMEQL_SLSH] = COMBO(commeql_combo, KC_SLSH),
    [SPCENT_LALT] = COMBO(spcent_combo, KC_LALT),
    [ESCLCTL_TAB] = COMBO(esclctl_combo, KC_TAB),
    [MINSQUOT_GRV] = COMBO(minsquot_combo, KC_GRV),
//LayerB - Numeric
    [ONETHREE_TWO] = COMBO(onethree_combo, KC_2),
    [THREEFIVE_FOUR] = COMBO(threefive_combo, KC_4),
    [FIVESEVEN_SIX] = COMBO(fiveseven_combo, KC_6),
    [SEVENNINE_EIGHT] = COMBO(sevennine_combo, KC_8),
    [NINEGRV_ZERO] = COMBO(ninegrv_combo, KC_0),
    [F1F3_F2] = COMBO(f1f3_combo, KC_F2),
    [F3F5_F4] = COMBO(f3f5_combo, KC_F4),
    [F5F7_F6] = COMBO(f5f7_combo, KC_F6),
    [F7F9_F8] = COMBO(f7f9_combo, KC_F8),
    [F9PEQL_F10] = COMBO(f9peql_combo, KC_F10),
    [F11LBRC_F12] = COMBO(f11lbrc_combo, KC_F12)
//LayerC - Symbols / RGB
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_LAYERA] = LAYOUT_7x4(
    KC_ESC  ,KC_Q    ,KC_F	 ,KC_G	     ,KC_L   ,KC_Y   ,KC_MINS,
    KC_LCTL ,KC_A    ,KC_S       ,KC_D       ,KC_N   ,KC_I   ,KC_QUOT,
    KC_LSFT ,KC_Z    ,KC_C       ,KC_B       ,KC_M   ,KC_DOT ,KC_EQL,
	     KC_BSLS ,MO(_LAYERC),MO(_LAYERB),KC_LWIN,KC_SPC ,KC_ENT
),
    [_LAYERB] = LAYOUT_7x4(
    KC_ESC  ,KC_1    ,KC_3       ,KC_5       ,KC_7   ,KC_9   ,KC_GRV,
    KC_LCTL ,KC_F1   ,KC_F3      ,KC_F5      ,KC_F7  ,KC_F9  ,KC_PEQL,
    KC_LSFT ,KC_F11  ,KC_LBRC    ,KC_RBRC    ,KC_PGDN,KC_PGUP,KC_PLUS,
             KC_BSLS ,_______    ,_______    ,KC_LWIN,KC_SPC ,KC_ENT
),
    [_LAYERC] = LAYOUT_7x4(
    KC_ESC   ,KC_LPRN,KC_LCBR    ,KC_ASTR    ,KC_7   ,KC_9   ,KC_GRV,
    KC_LCTL  ,KC_F1  ,KC_F3      ,KC_F5      ,KC_F7  ,KC_F9  ,KC_PEQL,
    KC_LSFT  ,KC_F11 ,KC_LBRC    ,KC_RBRC    ,KC_PGDN,KC_PGUP,KC_PLUS,
              KC_BSLS,_______    ,_______    ,KC_LWIN,KC_SPC ,KC_ENT
)
};

