/* Copyright 2019 MechMerlin
 * Copyright 2020 @ben_roe (keycapsss.com)
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

/* Select hand configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define OLED_FONT_H "keyboards/keycapsss/kimiko/keymaps/default/glcdfont.c"
// #define OLED_FONT_WIDTH 5
// #define OLED_FONT_HEIGHT 7

#ifdef RGBLIGHT_ENABLE
#   define RGBLIGHT_HUE_STEP 8
#   define RGBLIGHT_SAT_STEP 8
#   define RGBLIGHT_VAL_STEP 8
#   define RGBLIGHT_SLEEP       /* the RGB lighting will be switched off when the host goes to sleep */
/*== all animations enable ==*/
#   define RGBLIGHT_ANIMATIONS
/*== or choose animations to save space ==*/
// #   define RGBLIGHT_EFFECT_BREATHING
// #   define RGBLIGHT_EFFECT_RAINBOW_MOOD
// #   define RGBLIGHT_EFFECT_RAINBOW_SWIRL
// #   define RGBLIGHT_EFFECT_SNAKE
// #   define RGBLIGHT_EFFECT_KNIGHT
// #   define RGBLIGHT_EFFECT_CHRISTMAS
// #   define RGBLIGHT_EFFECT_STATIC_GRADIENT
// #   define RGBLIGHT_EFFECT_RGB_TEST
// #   define RGBLIGHT_EFFECT_ALTERNATING
#endif

// If you are using an Elite C rev3 on the slave side, uncomment the lines below:
// #define SPLIT_USB_DETECT
// #define NO_USB_STARTUP_CHECK

#define VIAL_KEYBOARD_UID {0x80, 0x9F, 0xA5, 0x3D, 0x0D, 0xCD, 0x43, 0xA4}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 9 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 4 }

#define RGBLIGHT_DISABLE_KEYCODES // We only want the RGB_MATRIX keycodes

//#define VIALRGB_NO_DIRECT
#define WS2812_DI_PIN D3
#define RGB_MATRIX_LED_COUNT 60
#define RGB_MATRIX_SPLIT {30,30}
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 180 // limits maximum brightness of LEDs to N out of 255. If not defined maximum brightness is set to 255
#define RGB_TRIGGER_ON_KEYDOWN            // Triggers RGB keypress events on key down. This makes RGB control feel more responsive. This may cause RGB to not function properly on some boards
// #define RGB_DISABLE_WHEN_USB_SUSPENDED    // turn off effects when suspended

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
// Effects
#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_DUAL_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define ENABLE_RGB_MATRIX_RAINDROPS
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define ENABLE_RGB_MATRIX_HUE_BREATHING
#define ENABLE_RGB_MATRIX_HUE_PENDULUM
#define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#define ENABLE_RGB_MATRIX_PIXEL_FLOW
#define ENABLE_RGB_MATRIX_PIXEL_RAIN
// Framebuffer Effects
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN
// Reactive Effects
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define ENABLE_RGB_MATRIX_SPLASH
#define ENABLE_RGB_MATRIX_MULTISPLASH
#define ENABLE_RGB_MATRIX_SOLID_SPLASH
#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH


// was having some trouble with both sides being detected as slave.
// maybe this helps.
#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_WATCHDOG_TIMEOUT 3000
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000
#define SPLIT_USB_TIMEOUT_POLL 10
#define NO_USB_STARTUP_CHECK
