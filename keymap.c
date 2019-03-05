
#include "config.h"

#define GRAVE_MODS  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT)|MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)|MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))
#define _BL 0
#define _FL 1

#define LAYOUT( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012,                                     \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112,       K114, K115, K116, K117, K118, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, K215, K216, K217,       \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312,       K314, K315, K316, K317, K318, \
	K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K410, K411,       K413, K414, K415, K416, K417,       \
	K500, K501, K502,             K505,                   K509, K510, K511, K512, K513, K514, K515,       K517, K518  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  KC_NO, K114,  K115,  K116,  K117,  K118 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214,  K215,  K216,  K217,  KC_NO }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  KC_NO, K314,  K315,  K316,  K317,  K318 }, \
	{ K400,  K401,  K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410,  K411,  KC_NO, K413,  K414,  K415,  K416,  K417,  KC_NO }, \
	{ K500,  K501,  K502,  KC_NO, KC_NO, K505,  KC_NO, KC_NO, KC_NO, K509,  K510,  K511,  K512,  K513,  K514,  K515,  KC_NO, K517,  K518 }  \
}
	
const uint16_t PROGMEM keymaps[][6][19] = {

	[_BL] = LAYOUT(
	KC_ESCAPE,    F1,  F2,    F3,    F4,    F5,     F6,    F7,    KC_F8,     KC_F9,      KC_F10,      KC_F11,     KC_F12,
	KC_GRV,     KC_1,  KC_2,  KC_3,  KC_4,  KC_5,   KC_6,  KC_7,  KC_8,   KC_9,    KC_0,     KC_MINUS,   KC_BSPACE,          KC_DEL,     KC_NUMLOCK,  KC_KP_SLASH,  KC_KP_ASTERISK,  KC_KP_MINUS,
	KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,      KC_Y,     KC_U,     KC_I,      KC_O,       KC_P,       KC_LBRC,    KC_RBRC,   KC_EQUAL,   KC_BSLASH,  KC_7,       KC_8,    KC_9,   
    KC_CAPS,    KC_A,     KC_S,     KC_D,     KC_F,     KC_G,      KC_H,     KC_J,     KC_K,      KC_L,       KC_SCOLON,     KC_QUOTE,    KC_ENTER,           KC_PGUP,    KC_4,       KC_5,    KC_6,          KC_KP_PLUS,
	KC_LSHIFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,      KC_N,     KC_M,     KC_COMMA,  KC_DOT,     KC_SLASH,    KC_RSHIFT,          KC_UP,      KC_PGDN,    KC_1,       KC_2,    KC_3,    
	KC_LCTL,    KC_LGUI,  KC_LALT,                KC_SPACE,                        KC_RALT,    TG(_FL),  KC_RCTL,    KC_LEFT,  KC_DOWN,     KC_RIGHT,    KC_0,                KC_DEL,          KC_ENTER
						),

	[_FL] = LAYOUT(
TG(_FL),  KC_MEDIA_PLAY_PAUSE,  KC_AUDIO_MUTE,   KC_AUDIO_VOL_DOWN,  KC_AUDIO_VOL_UP,  KC_MEDIA_PREV_TRACK,  KC_MEDIA_NEXT_TRACK,  KC_CALCULATOR,  KC_WWW_SEARCH, KC_PSCREEN, KC_MY_COMPUTER,   KC_SYSTEM_SLEEP,  KC_SYSTEM_POWER,
KC_NO,    KC_NO,    KC_NO,        KC_NO,           KC_NO,         KC_NO,             KC_NO,             KC_NO,        KC_NO,      KC_NO, KC_NO,   KC_NO,         KC_NO,                KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO,    KC_NO,    KC_NO,        KC_NO,           KC_NO,         KC_NO,             KC_NO,             KC_NO,        KC_NO,      KC_NO, KC_NO,   KC_NO,         KC_NO,         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO,    KC_NO,    KC_NO,        KC_NO,           KC_NO,         KC_NO,             KC_NO,             KC_NO,        KC_NO,      KC_NO, KC_NO,   KC_NO,         KC_NO,                KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO,    KC_NO,    KC_NO,        KC_NO,           KC_NO,         KC_NO,             KC_NO,             KC_NO,        KC_NO,      KC_NO, KC_NO,   KC_NO,                        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO,    TG(_FL),  KC_NO,                                        TG(_FL),                                                        KC_NO, TG(_FL), KC_NO,         KC_NO,         KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO
	)
};

#include QMK_KEYBOARD_H