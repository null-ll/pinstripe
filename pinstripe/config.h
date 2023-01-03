/* Copyright 2021 null-ll
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x8427
#define DEVICE_VER      0x0001
#define MANUFACTURER    Noah L
#define PRODUCT         Pinstripe

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

#define MATRIX_ROW_PINS { B2, A1, B1, A0, B0 }
#define MATRIX_COL_PINS { D6, D5, C2, C3, C4, C5, D0, A7, A6, A5, A4, B4, A3, B3, A2 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* If defined, GRAVE_ESC will always act as ESC when CTRL is held.
 * This is userful for the Windows task manager shortcut (ctrl+shift+esc).
 */
// #define GRAVE_ESC_CTRL_OVERRIDE

#define ENCODERS_PAD_A { C7 }
#define ENCODERS_PAD_B { C6 }
#define ENCODER_RESOLUTION 4
#define TAP_CODE_DELAY 10

#ifdef OLED_DRIVER_ENABLE
    #define OLED_DISPLAY_128X64
    // #define OLED_FONT_H "glcdfont_pinstripe.c"
    // #define OLED_FONT_END 255
#endif

#define DS1307_ADDR (0x68 << 1)