#include "main.h"

/**
 * more_numbers - prints from 0 to 14 ten times
 * _putchar - prints numbers
 *
 */

void more_numbers(void)
{
	int j;
	int i;

	for (j = 0; j < 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
