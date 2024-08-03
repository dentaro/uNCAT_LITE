

//********************************************************************************
// IO PINS CONFIGURATION
//********************************************************************************

#define IO_BUTTON0  0
#define IO_BUTTON47 47

//--------------------------------------------------------------------------------
// LCD DISPLAY CONFIG
//--------------------------------------------------------------------------------

#define TFT_MOSI   13  // SDA
#define TFT_MISO   12//-1
#define TFT_SCLK   14  // SCL
#define TFT_DC     4
#define TFT_CS     15
#define TFT_RST    2
#define TFT_BCK_LT 32 

//--------------------------------------------------------------------------------
// MICROSD CARD
//--------------------------------------------------------------------------------

#define SD_SPI_DRIVER_SELECT 2

//#define SOFTSD_MOSI_PIN 15             // [SD MOSI]
//#define SOFTSD_MISO_PIN 2             // [SD MISO]
//#define SOFTSD_SCK_PIN  14             // [SD SCK]
//#define SD_CS_PIN       13             // [CS]

#define SOFTSD_MOSI_PIN 23             // [SD MOSI]
#define SOFTSD_MISO_PIN 19             // [SD MISO]
#define SOFTSD_SCK_PIN  18             // [SD SCK]
#define SD_CS_PIN       5             // [CS]

//--------------------------------------------------------------------------------
// NES CONTROLLER CONFIG
//--------------------------------------------------------------------------------
#define NESCTRL_Data    -1//48             // The data pin for the NES controller
#define NESCTRL_Clock   -1//18             // The clock pin for the NES controller ---[ 330R ]--- +3.3V (Must be pulled up to +3.3V)
#define NESCTRL_Latch   -1//17             // The latch pin for the NES controller (STROBE) is pulled up by default on ESP32

//--------------------------------------------------------------------------------
// PWM AUDIO CONFIG
//--------------------------------------------------------------------------------

#define PWMAUDIO_CONFIG_LEFT_CHANNEL_GPIO -1//38
#define PWMAUDIO_CONFIG_RIGHT_CHANNEL_GPIO -1//39

//********************************************************************************
//********************************************************************************
#define SD_SPI_HOST SPI3_HOST

//  #define SOFTSD_MOSI_PIN 15             // [SD MOSI]
//  #define SOFTSD_MISO_PIN 2             // [SD MISO]
//  #define SOFTSD_SCK_PIN 14              // [SD SCK]
//  #define SD_CS_PIN 13                   // [CS]

  #define SOFTSD_MOSI_PIN 23             // [SD MOSI]
  #define SOFTSD_MISO_PIN 19             // [SD MISO]
  #define SOFTSD_SCK_PIN 18              // [SD SCK]
  #define SD_CS_PIN 5                   // [CS]
  
#define CONFIG_HW_SD_PIN_NUM_MISO SOFTSD_MISO_PIN
#define  CONFIG_HW_SD_PIN_NUM_MOSI SOFTSD_MOSI_PIN
#define  CONFIG_HW_SD_PIN_NUM_CLK SOFTSD_SCK_PIN
#define  CONFIG_HW_SD_PIN_NUM_CS SD_CS_PIN 

#define CONFIG_HW_BUTTON_PIN_NUM_UP 0
#define CONFIG_HW_BUTTON_PIN_NUM_RIGHT 1
#define CONFIG_HW_BUTTON_PIN_NUM_DOWN 2
#define CONFIG_HW_BUTTON_PIN_NUM_LEFT 3
#define CONFIG_HW_BUTTON_PIN_NUM_BUTTON1 4
#define CONFIG_HW_BUTTON_PIN_NUM_BUTTON2 5
