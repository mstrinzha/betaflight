F405_TARGETS    += $(TARGET)
FEATURES        += SDCARD VCP
HSE_VALUE       = 16000000
OPBL=yes
TARGET_SRC = \
            drivers/accgyro/accgyro_spi_mpu9250.c \
            drivers/barometer/barometer_ms5611.c \
            drivers/barometer/barometer_spi_ms5611.c \
            drivers/compass/compass_hmc5883l.c \
            drivers/compass/compass_spi_hmc5883l.c
            
