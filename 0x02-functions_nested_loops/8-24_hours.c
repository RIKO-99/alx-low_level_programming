#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: time of the day
 *
 */
void jack_bauer(void);
{
	int minutes, hours;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			putchar((hour / 10) = '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}

	}
}
