#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * _putchar - prints
 * @# - character used to print the square
 * @size: size of the square
 */

void print_square(int size)
{
	int row;
	int column;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
