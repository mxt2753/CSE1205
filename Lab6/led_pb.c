#include "sysfs_gpio.h"

int main()
{
	gpioInput(26);
	gpioOutput(17);
	gpioWrite(17, 1);
	while (!gpioRead(26))
	{}
	gpioWrite (17, 0);
	return 0;
}
