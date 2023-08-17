#include "main.h"

/**
 * print_line - function that draws a straight a line in the terminal
 * _putchar - function used to print
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
