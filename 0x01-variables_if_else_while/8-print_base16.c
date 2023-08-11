#include <stdio.h>
/**
 *main - Entry level
 *putchar - outputs all numbers from base 16 in lowercase
 *
 *Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	for (b = 97; b <= 102; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}

