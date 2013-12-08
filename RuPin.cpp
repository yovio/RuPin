#include <RF24.h>
#include <RF24Network.h>
#include "RuPin.h"

RuPin::RuPin()
{
	// Setup for GPIO P1-22(GPIO 25) CSN - P1-24(GPIO 8) CE with SPI Speed @ 8Mhz
	radio = radio(RPI_V2_GPIO_P1_24, RPI_V2_GPIO_P1_22, BCM2835_SPI_SPEED_8MHZ);
}