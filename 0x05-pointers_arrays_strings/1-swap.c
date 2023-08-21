#include "main.h"

/**
 *swap_int - function that swaps the values of two integers
 *temp - store the value pointed to by *a, then swaps the values of *a and *b
 * using the pointers
 *@a: integer 1
 *@b: integer 2
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
