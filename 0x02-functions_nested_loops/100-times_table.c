#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: integer value
 *
 * Return: Int
 */

void print_times_table(int n)
{
	if (n > 0 || n < 15)
	{
		int row;
		int column;
		int product;

		for (row = 0; row <= n; row++)
		{
			_putchar(48);
			for (column = 1; column <= n; column++)
			{
				_putchar(',');
				_putchar(' ');
				product = row * column;

				if (product <= 9)
					_putchar(',');
				if (product <= 99)
					_putchar(' ');
				if (product >= 100)
				{
					_putchar((product / 100) + 48);
					_putchar((product / 10) % 10 + 48);
				}
				else if (product < 100 && product >= 10)
				_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
