#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 * _putchar - outputs the numbers
 *
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
