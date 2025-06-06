// ----------------------------------------------------- 
// NOTE: THIS HEADER IS ALSO INCLUDED BY ASSEMBLER SO 
//       SHOULD ONLY CONSIST OF PREPROCESSOR DIRECTIVES 
// ----------------------------------------------------- 
  
// This header may be included by other board headers as "boards/alyx_base_v2.h" 
  
#ifndef _BOARDS_ALYX_BASE_V2_H 
#define _BOARDS_ALYX_BASE_V2_H 
  
// For board detection 
#define alyx_base_v2 

#ifndef PICO_RP2040_B2_SUPPORTED
#define PICO_RP2040_B2_SUPPORTED 1
#endif

// --- LED ---
#ifndef PICO_DEFAULT_LED_PIN
#define PICO_DEFAULT_LED_PIN 0
#endif
// no PICO_DEFAULT_WS2812_PIN
  
// --- UART --- 
#ifndef PICO_DEFAULT_UART 
#define PICO_DEFAULT_UART 0 
#endif 
#ifndef PICO_DEFAULT_UART_TX_PIN 
#define PICO_DEFAULT_UART_TX_PIN 12 
#endif 
#ifndef PICO_DEFAULT_UART_RX_PIN 
#define PICO_DEFAULT_UART_RX_PIN 13 
#endif 
  
// --- I2C --- 
#ifndef PICO_DEFAULT_I2C 
#define PICO_DEFAULT_I2C 1 
#endif 
#ifndef PICO_DEFAULT_I2C_SDA_PIN 
#define PICO_DEFAULT_I2C_SDA_PIN 2 
#endif 
#ifndef PICO_DEFAULT_I2C_SCL_PIN 
#define PICO_DEFAULT_I2C_SCL_PIN 3 
#endif 
  
// --- SPI --- 
#ifndef PICO_DEFAULT_SPI 
#define PICO_DEFAULT_SPI 0 
#endif 
#ifndef PICO_DEFAULT_SPI_SCK_PIN 
#define PICO_DEFAULT_SPI_SCK_PIN 18 
#endif 
#ifndef PICO_DEFAULT_SPI_TX_PIN 
#define PICO_DEFAULT_SPI_TX_PIN 19 
#endif 
#ifndef PICO_DEFAULT_SPI_RX_PIN 
#define PICO_DEFAULT_SPI_RX_PIN 20 
#endif 
#ifndef PICO_DEFAULT_SPI_CSN_PIN 
#define PICO_DEFAULT_SPI_CSN_PIN 21 
#endif 
  
// --- FLASH --- 
  
#define PICO_BOOT_STAGE2_CHOOSE_W25Q080 1 
#define PICO_XOSC_STARTUP_DELAY_MULTIPLIER 64
  
#ifndef PICO_FLASH_SPI_CLKDIV 
#define PICO_FLASH_SPI_CLKDIV 2 
#endif 
  
#ifndef PICO_FLASH_SIZE_BYTES 
#define PICO_FLASH_SIZE_BYTES (2 * 1024 * 1024) 
#endif 
  
#endif
