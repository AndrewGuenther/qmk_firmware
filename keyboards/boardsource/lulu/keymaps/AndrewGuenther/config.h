#pragma once

#define MASTER_LEFT
#undef ENCODER_ENABLE

#ifdef RGB_MATRIX_ENABLE
    #define RGB_DISABLE_WHEN_USB_SUSPENDED  // turn off effects when suspended
    #define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR
    #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_COLOR
#endif
