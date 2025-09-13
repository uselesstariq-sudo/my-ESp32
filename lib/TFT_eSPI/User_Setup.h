\
    // User_Setup.h — configured for 3.5" ILI9488 320x480 SPI and Marauder default pins.
    // Paste into lib/TFT_eSPI/User_Setup.h (project-local copy)

    #ifndef USER_SETUP_H
    #define USER_SETUP_H

    // ===== DRIVER =====
    #define ILI9488_DRIVER      // ILI9488 3.5" 320x480 SPI display

    // ===== RESOLUTION =====
    #define TFT_WIDTH  320
    #define TFT_HEIGHT 480

    // ===== SPI PINS (Marauder default wiring) =====
    #define TFT_MISO 19
    #define TFT_MOSI 23
    #define TFT_SCLK 18
    #define TFT_CS   17
    #define TFT_DC   16
    #define TFT_RST  5
    #define TFT_BL   32    // backlight control (or tie to 3.3V)
    #define TOUCH_CS 21    // if your module has touch (XPT2046), else unused

    // ===== SPI SPEEDS =====
    #define SPI_FREQUENCY       27000000    // 27 MHz safe start
    #define SPI_READ_FREQUENCY  20000000
    #define SPI_TOUCH_FREQUENCY 2500000

    // ===== COLOR ORDER =====
    #define TFT_RGB_ORDER TFT_BGR

    #endif // USER_SETUP_H
