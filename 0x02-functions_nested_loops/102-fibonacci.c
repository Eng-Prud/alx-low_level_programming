#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int z = 0;
	long a = 1;
	long b = 2;

	while (z < 50)
	{
		if (z == 0)
			printf("%ld, ", a);
		else if (z == 1)
			printf(" %ld", b);
		else
		{
			b += a;
			a = b - a;
			printf(", %ld", b);
		}
		++z;
	}
	printf("\n");
	return (0);
}
