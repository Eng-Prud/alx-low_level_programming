#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int row;
	int column;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			int product = row * column;

			if (column != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((product % 10) + '0');
			}
			else if (product >= 10 && product < 100)
			{
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			if (column == 9)
			{
				_putchar('$');
			}
		}
		_putchar('\n');
	}
}
