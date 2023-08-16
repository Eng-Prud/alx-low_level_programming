#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: integer value
 *
 * Return: Int
 */

void print_times_table(int n)
{
		int row;
		int column;
		int product;
	
		if (n >= 0 && n <= 15)
		{
			for (row = 0; row <= n; row++)
			{
				_putchar(0);
				for (column = 1; column <= n; column++)
				{
					_putchar(',');
					_putchar(' ');
					product = row * column;
					if (product <= 99)
					{
						_putchar(' ');
					if (product <= 9)
					{
						_putchar(' ');
						if (product >= 100)
						{
							_putchar((product / 100) + '0');
							_putchar(((product / 10)) % 10 + '0');
						}	
						else if (prodduct <= 99 && product >= 10);
						{
							_putchar((product / 10) + '0');
						}
						_putchar((product % 10) + 'e');
					}
					_putchar('\n');
					}
				}
			}
		}
}
