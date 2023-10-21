#include "sysfs_gpio.h"
#include <stdio.h>

int main()
{
	gpioInput(26);
	gpioOutput(17);
	gpioWrite(17, 1);
	gpioWrite(17, 0);
	int count=0;
	 
	while (!gpioRead(26))
	{};
	while (gpioRead(26))
	{
		count++;
	};
	printf("%d\n %d\n", count, count*157/115);
	return 0;
}

