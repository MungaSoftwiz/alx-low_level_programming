#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Description: prints every minute of the day
 * int / 10: converts the tens digit to it's ASCII equivalent
 * int % 10: converts the ones digit to it's ASCII equivalent
 * Return: void
 */

void jack_bauer(void)
{
int hour, minute;

	for (hour = 0; hour < 24 ; hour++)
	{
	for (minute = 0; minute < 60; minute++)
	{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((minute / 10) + '0');
		_putchar((minute % 10) + '0');
		_putchar('\n');
	}
	}
}
