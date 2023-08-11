#include <stdio.h>
/**
 *main - Entry point
 *putchar - outputs all single digits from 0
 *
 *Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit);
		digit++;
	}

	putchar('\n');

	return (0);
}
