/* SPDX-License-Identifier: GPL-2.0-or-later */

#define KC_LSQB S(KC_LBRC) // Left square bracket
#define KC_RSQB S(KC_RBRC) // Right square bracket

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   /**/  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,  KC_BSPC, 
		KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   /**/  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENTER, 
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   /**/  KC_NO,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, 
		KC_ESC,  KC_LGUI, 		   KC_LALT, LT(1, KC_SPC), 	 /**/  MO(2),   		 KC_RALT,				    KC_RCTL, KC_RGUI
	),

	[1] = LAYOUT(
		KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   /**/  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL, 
		KC_TAB,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,/**/  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSLS, KC_QUOT,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,/**/  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  
		KC_TRNS, KC_TRNS,  		   KC_TRNS, MO(3),      	 /**/  KC_TRNS, 		 KC_TRNS,				    KC_TRNS, KC_TRNS
	),

	[2] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,/**/  KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,/**/  KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,/**/  KC_TRNS, KC_LBRC, KC_LSQB, KC_RSQB, KC_RBRC, KC_TRNS, KC_TRNS,  
		KC_TRNS, KC_TRNS,  		    KC_TRNS, KC_TRNS,        /**/  MO(3),            KC_TRNS,                   KC_TRNS, KC_TRNS
	),

	[3] = LAYOUT(
		KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  /**/  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,/**/  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,/**/  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  
		KC_TRNS, KC_TRNS,  		   KC_TRNS, KC_TRNS,    	 /**/  KC_TRNS, 		 KC_TRNS,				    KC_TRNS, KC_TRNS
	),

};

// #include <print.h>
// #define POINTING_DEVICE_AUTO_MOUSE_ENABLE

// bool _dirUp = false;
// bool _dirDown = false;
// bool _dirLeft = false;
// bool _dirRight = false;

// bool _lastDirUp = false;
// bool _lastDirDown = false;
// bool _lastDirLeft = false;
// bool _lastDirRight = false;

// void update_keycode_status(uint16_t keycode, bool last, bool current) {
//     if (last != current) {
//         if (current) {
//             register_code16(keycode);
//         } else {
//             unregister_code16(keycode);
//         }
//     }
// }

// void refreshDirections(report_mouse_t mouse_report){
//     _lastDirUp = _dirUp;
//     _lastDirDown = _dirDown;
//     _lastDirLeft = _dirLeft;
//     _lastDirRight = _dirRight;

//     _dirUp = false;
//     _dirDown = false;
//     _dirLeft = false;
//     _dirRight = false;

//     if (mouse_report.x < 0) {
//         _dirLeft = true;
//     }
//     if (mouse_report.x > 0) {
//         _dirRight = true;
//     }
//     if (mouse_report.y < 0) {
//         _dirUp = true;
//     }
//     if (mouse_report.y > 0) {
//         _dirDown = true;
//     }
// }

// // pointing_device_init_user(void)
// report_mouse_t lastMouseReport;

// report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
//     // set_auto_mouse_enable(false);
//     lastMouseReport = pointing_device_get_report();

//     update_keycode_status(KC_UP, _lastDirUp, _dirUp);
//     update_keycode_status(KC_DOWN, _lastDirDown, _dirDown);
//     update_keycode_status(KC_LEFT, _lastDirLeft, _dirLeft);
//     update_keycode_status(KC_RIGHT, _lastDirRight, _dirRight);
//     refreshDirections(mouse_report);

//     // pointing_device_set_report(mouse_report);
//     // pointing_device_send();

//     return mouse_report;
// }

// void pointing_device_init_user(void) {
//     set_auto_mouse_enable(false);
// }

#include "print.h"
#ifdef JOYSTICK_ENABLE
#include "analog.h"

#define _CENTER 512
#define _DEAD 20
// #define _SHIFT 15 // last 15 steps upwards
                  //
#define _DOWN_TRESHOLD (_CENTER+_DEAD)
#define _UP_TRESHOLD (_CENTER-_DEAD)

    bool autorun = false;

    int16_t xPos = 0;
    int16_t yPos = 0;

    bool yDownHeld = false;
    bool yUpHeld = false;
    bool xLeftHeld = false;
    bool xRightHeld = false;
    // bool shiftHeld = false;

    void matrix_scan_user(void) {
        uprintf("xPos: %s", xPos);
        uprintf("yPos: %s", yPos);

        // W & S
        if (!autorun) {
            yPos = analogReadPin(B6);
            if (!yDownHeld && yPos >= _DOWN_TRESHOLD) {
                register_code(KC_UP);
                yDownHeld = true;
            } else if (yDownHeld && yPos < _DOWN_TRESHOLD) {
                yDownHeld = false;
                unregister_code(KC_UP);
            } else if (!yUpHeld && yPos <= _UP_TRESHOLD) {
                yUpHeld = true;
                register_code(KC_DOWN);
            } else if (yUpHeld && yPos > _UP_TRESHOLD) {
                yUpHeld = false;
                unregister_code(KC_DOWN);
            }
        }

        xPos = analogReadPin(D7);
        if (!xLeftHeld && xPos >= _DOWN_TRESHOLD) {
            register_code(KC_LEFT);
            xLeftHeld = true;
        } else if (xLeftHeld && xPos < _DOWN_TRESHOLD) {
            xLeftHeld = false;
            unregister_code(KC_LEFT);
        } else if (!xRightHeld && xPos <= _UP_TRESHOLD) {
            xRightHeld = true;
            register_code(KC_RIGHT);
        } else if (xRightHeld && xPos > _UP_TRESHOLD) {
            xRightHeld = false;
            unregister_code(KC_RIGHT);
        }

        // if (wasdShiftMode) {
        //   bool yShifted = yPos < _SHIFT;
        //   if (!shiftHeld && yShifted) {
        //     register_code(KC_LSFT);
        //     shiftHeld = true;
        //   } else if (shiftHeld && !yShifted) {
        //     unregister_code(KC_LSFT);
        //     shiftHeld = false;
        //   }
        // }
    }

    //joystick config
    joystick_config_t joystick_axes[JOYSTICK_AXIS_COUNT] = {
        JOYSTICK_AXIS_IN(D7, 0, 512, 1023),
        JOYSTICK_AXIS_IN(B6, 0, 512, 1023)
    };

#endif

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  // debug_mouse=true;
}

