#define HW_VENDOR HardwareModel_PRIVATE_HW


#undef GPS_RX_PIN
#undef GPS_TX_PIN
//#define GPS_RX_PIN 36
//#define GPS_TX_PIN 33

#ifndef USE_JTAG  // gpio15 is TDO for JTAG, so no I2C on this board while doing jtag
#define I2C_SDA 4 // I2C pins for this board
#define I2C_SCL 15
#endif

//#define RESET_OLED 16 // If defined, this pin will be used to reset the display controller

#define VEXT_ENABLE 21 // active low, powers the oled display and the lora antenna boost
#define LED_PIN 25     // If defined we will blink this LED
#define BUTTON_PIN 0   // If defined, this will be used for user button presses

#define USE_RF95
#define LORA_DIO0 16 // a No connect on the SX1262 module
#ifndef USE_JTAG
#define LORA_RESET 17
#endif

#define LORA_DIO1 27 // Not really used
#define LORA_DIO2 14 // Not really used

#define RF95_SCK  18
#define RF95_MISO 19
#define RF95_MOSI 23
#define RF95_NSS  22

// ratio of voltage divider = 3.20 (R12=100k, R10=220k)
//#define ADC_MULTIPLIER 3.2
//#define BATTERY_PIN 13 // A battery voltage measurement pin, voltage divider connected here to measure battery voltage
