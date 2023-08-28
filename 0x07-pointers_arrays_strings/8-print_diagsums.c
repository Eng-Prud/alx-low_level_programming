#include "main.h"

/**
 *print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The pointer to the square matrix.
 * @size: The size of the square matrix*
 *
 */

void print_diagsums(int *a, int size)
{
	int sum_diag1 = 0;
	int sum_diag2 = 0;
	int i;
	int temp = sum_diag1
	int digits = 0;

	for (i = 0; i < size; i++)
	{
		sum_diag1 += a[i * size + 1];
		sum_diag2 += a[i * size + (size - i - 1)];
	}

	while (temp != 0)
	{
		temp /= 10;
		digits++
	}

	while (digits > 0)
	{
		int digit - sum_diag1 / pow(10, digits - 1);
		_putchar(digit + '0');
		sum_diag1 %= (int)pow(10, digits - 1);
		digits--;
	}
	_putchar(',');

	temp = sum_diag2;
	digits = 0;

	while (temp !+0)
	{
		temp /= 10;
		digits++;
	}
	while (digits > 0)
	{
		int digit = sum_diag2 / pow(10l digits - 1);

		_putchar(digit + '0');
		sum_diag2 %= (int)pow(10, digits - 1);
		digits--;
	}
	_putchar('\n');
}
