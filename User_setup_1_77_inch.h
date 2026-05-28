//                            USER DEFINED SETTINGS
//   1.77" ST7735 TFT (128x160) setup for TFT_eSPI
//   


// ##################################################################################
//
// Section 1. Call up the right driver file and any options for it
//
// ##################################################################################

// Display type - only define if RPi display
//#define RPI_DRIVER

// Only define one driver
#define ST7735_DRIVER // supports both stt7735 & stt7735s

// Colour order (try RGB if colours are swapped)
#define TFT_RGB_ORDER TFT_BGR

// ST7735 display size (portrait)
#define TFT_WIDTH  128
#define TFT_HEIGHT 160

// For 1.77" ST7735 modules this is usually correct
#define ST7735_GREENTAB160x80
// If display is shifted or colours wrong try instead:
//#define ST7735_GREENTAB
//#define ST7735_REDTAB
//#define ST7735_BLACKTAB

// Inversion options (enable only if needed)
//#define TFT_INVERSION_ON
//#define TFT_INVERSION_OFF

// Backlight logic level
#define TFT_BACKLIGHT_ON LOW


// ##################################################################################
//
// Section 2. Define the pins that are used to interface with the display here
//
// ##################################################################################

// ESP32 SPI pins for 1.77" ST7735 TFT


// you can change i used it for my esp32 devkit v1 DOIT
#define TFT_CS    17
#define TFT_DC    16
#define TFT_RST    5

#define TOUCH_CS  -1

#define TFT_MISO  19
#define TFT_MOSI  23
#define TFT_SCLK  18

//#define TFT_BL   32


// ##################################################################################
//
// Section 3. Define the fonts that are to be used here
//
// ##################################################################################

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
//#define LOAD_FONT8N //optional
#define LOAD_GFXFF

// Smooth fonts
#define SMOOTH_FONT


// ##################################################################################
//
// Section 4. Other options
//
// ##################################################################################

// ST7735 usually works reliably up to 27mh
#define SPI_FREQUENCY  26000000 // i use 26mhz only

// reduced SPI frequency for reading TFT
#define SPI_READ_FREQUENCY  20000000

// touch controller freq ( but we don't need this im adding it anyways )
#define SPI_TOUCH_FREQUENCY  2500000

// use HSPI instead of VSPI if needed
//#define USE_HSPI_PORT

// Transactions support
//#define SUPPORT_TRANSACTIONS


// modifed from justcallmekoko's user setup
