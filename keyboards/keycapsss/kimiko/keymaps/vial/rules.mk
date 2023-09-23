OLED_DRIVER_ENABLE = yes   # Enables the use of OLED displays
OLED_ENABLE = yes
#OLED_DRIVER = SSD1306

VIA_ENABLE = yes		   # Enable via support
VIAL_ENABLE = yes		   # Enable vial support

LTO_ENABLE = yes

QMK_SETTINGS = yes
ENCODER_ENABLE = yes
ENCODER_MAP_ENABLE = yes

MOUSEKEY_ENABLE = yes      # Mouse keys
EXTRAKEY_ENABLE = yes      # Audio control and System control
RGB_MATRIX_DRIVER = WS2812
WS2812_DRIVER = vendor     # Use PIO on RP2040
RGB_MATRIX_ENABLE = yes
RGBLIGHT_ENABLE = no      # We'll use RGB_MATRIX instead
VIALRGB_ENABLE = yes
AUDIO_ENABLE = no          # Audio output

NKRO_ENABLE = yes

