/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#define TARGET_BOARD_IDENTIFIER "F4BYMINI"

#define TARGET_XTAL_MHZ         16
//#define TARGET_XTAL_MHZ         8

#define CONFIG_START_FLASH_ADDRESS (0x08080000) //0x08080000 to 0x080A0000 (FLASH_Sector_8)
#define USBD_PRODUCT_STRING     "Swift-Flyer F4BYMINI"

#define LED0                    PC13
#define LED1                    PC14

#define BEEPER                  PA15
#define BEEPER_INVERTED

#define INVERTER_PIN_UART2     PB2

#define USE_ESC_SENSOR

// MPU9250 interrupt
#define USE_EXTI
#define MPU_INT_EXTI            PB0
#define USE_MPU_DATA_READY_SIGNAL
#define ENSURE_MPU_DATA_READY_IS_LOW

#define MPU9250_CS_PIN          PA4
#define MPU9250_SPI_INSTANCE    SPI1

#define ACC
#define USE_ACC_SPI_MPU9250
#define ACC_MPU9250_ALIGN       CW90_DEG

#define GYRO
#define USE_GYRO_SPI_MPU9250
#define GYRO_MPU9250_ALIGN      CW90_DEG

#define MAG
#define USE_MAG_HMC5883
#define USE_MAG_SPI_HMC5883
#define HMC5883_CS_PIN 			PC4
#define MAG_HMC5883_ALIGN       CW90_DEG
#define HMC5883_SPI_INSTANCE	SPI1

#define BARO
#define USE_BARO_MS5611
#define USE_BARO_SPI_MS5611
#define MS5611_CS_PIN          PC5
#define MS5611_SPI_INSTANCE    SPI1

#define USE_SDCARD

#define SDCARD_SPI_INSTANCE     SPI3
#define SDCARD_SPI_CS_PIN       PC10

// SPI3 is on the APB1 bus whose clock runs at 84MHz. Divide to under 400kHz for init:
#define SDCARD_SPI_INITIALIZATION_CLOCK_DIVIDER 256 // 328kHz
// Divide to under 25MHz for normal operation:
#define SDCARD_SPI_FULL_SPEED_CLOCK_DIVIDER     4 // 21MHz


#define SDCARD_DMA_CHANNEL_TX               DMA1_Stream5
#define SDCARD_DMA_CHANNEL_TX_COMPLETE_FLAG DMA_FLAG_TCIF5
#define SDCARD_DMA_CLK                      RCC_AHB1Periph_DMA1
#define SDCARD_DMA_CHANNEL                  DMA_Channel_0


#define USE_VCP
#define VBUS_SENSING_PIN        PA9

#define USE_UART1
#define UART1_RX_PIN            PB7
#define UART1_TX_PIN            PB6
#define UART1_AHB1_PERIPHERALS  RCC_AHB1Periph_DMA2

#define USE_UART2
#define UART2_RX_PIN            PA3
#define UART2_TX_PIN            PA2

#define USE_UART3
#define UART3_RX_PIN            PB11
#define UART3_TX_PIN            PB10

#define USE_UART4
#define UART4_RX_PIN            PA1
#define UART4_TX_PIN            PA0

//#define USE_UART5  - error in DMA!!!
//#define UART5_RX_PIN            PD2
//#define UART5_TX_PIN            PC12

#define SERIAL_PORT_COUNT       5 //VCP, UART1, UART2, UART3, UART4, ?UART5

#define USE_ESCSERIAL
#define ESCSERIAL_TIMER_TX_HARDWARE 0 // PWM 1

#define USE_SPI

#define USE_SPI_DEVICE_1 //sensors
#define SPI1_NSS_PIN            PA4
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7


#define USE_SPI_DEVICE_3 // fram, sd
#define SPI3_NSS_PIN            NONE
#define SPI3_SCK_PIN            PB3
#define SPI3_MISO_PIN           PB4
#define SPI3_MOSI_PIN           PB5

#define USE_I2C
#define I2C_DEVICE              (I2CDEV_1)  // PB8-SCL, PB9-SDA
#define USE_I2C_PULLUP
#define I2C1_SCL                PB8
#define I2C1_SDA                PB9

#define USE_ADC
#define BOARD_HAS_VOLTAGE_DIVIDER
#define VBAT_ADC_PIN            PC0
#define RSSI_ADC_PIN            PC2
#define CURRENT_METER_ADC_PIN   PC1

//#define TARGET_CONFIG

//#define DEFAULT_FEATURES        FEATURE_BLACKBOX
#define DEFAULT_RX_FEATURE      FEATURE_RX_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_SBUS
#define SERIALRX_UART           SERIAL_PORT_USART2
#define ENABLE_BLACKBOX_LOGGING_ON_SDCARD_BY_DEFAULT
#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD 0xffff

#define USABLE_TIMER_CHANNEL_COUNT 10
#define USED_TIMERS  ( TIM_N(1) |TIM_N(2) | TIM_N(3) | TIM_N(5) | TIM_N(8) | TIM_N(9) | TIM_N(12))

