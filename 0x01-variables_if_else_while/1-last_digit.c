#include <stdlib.h>
#include <time.h>i
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
	if (ld > 5)
	{
		printf("Last digit of %d id %d and is greater than 5, n ld\n");
	}
	else if  (ld == 0)
	{
		printf("Last digit of %d is %d and is zero, n ld\n");
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0, n ld\n");
	}
	return (0);
}
