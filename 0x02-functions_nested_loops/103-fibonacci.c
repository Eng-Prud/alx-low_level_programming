#include <stdio.h>

/**
 * main - Entry Level
 * Printf - Displays the sum of even valued terms
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int i = 0;
	long previous = 1;
	long current = 2;
	long sum = current;

	while (current + previous < 4000000)
	{
		current += previous;
		if (current % 2 == 0)
		{
			sum += current;
			previous = current - previous;
			++i;
		}
		printf("%ld\n", sum);
	}
	return (0);
}
