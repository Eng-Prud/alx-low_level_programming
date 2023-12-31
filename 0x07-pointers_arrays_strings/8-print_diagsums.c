#include "main.h"
#include <stdio.h>

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

	for (i = 0; i < size; i++)
	{
		sum_diag1 = sum_diag1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum_diag2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum_diag1, sum_diag2);
}
