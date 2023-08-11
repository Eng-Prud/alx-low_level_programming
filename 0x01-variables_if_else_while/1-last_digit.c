#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *printf - outputs the last digit
 *n%10 - calculates modulus, printed as last digit
 *
 *Return: always 0 (SUCCESS)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	printf("Last digit of %d is %d and is", n, ld);
	if (ld > 5)
	{
		printf(" greater than 5\n");
	}
	else if (ld == 0)
	{
		printf(" 0\n");
	}
	else
	{
		printf(" less than 6 and not 0\n");
	}
	return (0);
}
