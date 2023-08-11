#include <stdio.h>
/**
 *main - Entry level
 *putchar - output alphabet in reverse in std output
 *
 *Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}

	putchar('\n');

	return (0);
}

