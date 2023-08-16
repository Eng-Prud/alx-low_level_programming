#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always zero
 */

int main(void)
{
	int limit = 1024;
	int sum;
	int n;

	for (n = 1; n < limit; n++)
	{
		int i;

		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("Sum of multiples of 3 and 5: %d\n", sum);
	return (0);
}
