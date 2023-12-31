#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			if (hour <= 23 && minute <= 59)
			{
				_putchar(hour / 10 + '0');
				_putchar(hour % 10 + '0');
				_putchar(58);
				_putchar(minute / 10 + '0');
				_putchar(minute % 10 + '0');
				_putchar('\n');
			}
		}
	}
}
