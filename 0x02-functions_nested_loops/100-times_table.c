#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: integer value
 *
 * Return: Int
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int row;
		int column;
		int product;

		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = row * column;

				if (column == 0)
					_putchar('0');
				else
				{
					_putchar(',');
					_putchar(' ');
				if (product < 10)
					_putchar(' ');
				else
					_putchar((product / 100) + '0');
				if (product < 100)
					_putchar(' ');
				else
					_putchar((product / 10) % 10 + '0');
				_putchar(product % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
