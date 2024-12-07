#pragma once

/* Split */
#define USB_VBUS_PIN GP13
#define SPLIT_HAND_PIN GP21

/* Layer */
#define DYNAMIC_KEYMAP_LAYER_COUNT 6

/* RP2040- and hardware-specific config */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
#define PICO_XOSC_STARTUP_DELAY_MULTIPLIER 64
