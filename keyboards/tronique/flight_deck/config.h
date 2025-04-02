

/*
 * Serial configuration
 */
//#define SERIAL_USART_DRIVER SIOD0
#define SERIAL_USART_FULL_DUPLEX    // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN	GP0     // Set gpio pins for usart
#define SERIAL_USART_RX_PIN	GP1
#define SERIAL_PIO_USE_PIO1         // Force the usage of PIO1 peripheral


#define EE_HANDS


/*
 * Bootmagic setup
 */
#define BOOTMAGIC_ROW_RIGHT 6
#define BOOTMAGIC_COLUMN_RIGHT 5


/*
 * Flash configuration
 */
#define RP2040_FLASH_GENERIC_03H
#define EXTERNAL_FLASH_SPI_SLAVE_SELECT_PIN 56
#define EXTERNAL_FLASH_SPI_CLOCK_DIVISOR 2
#define EXTERNAL_FLASH_SIZE (2048 * 1024)
