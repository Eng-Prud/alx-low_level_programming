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
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
