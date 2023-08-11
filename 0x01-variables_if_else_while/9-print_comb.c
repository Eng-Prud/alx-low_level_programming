#include <stdio.h>
/**
 *main - Entry level
 *putchar - prints all possible cominations of single digit numbers
 *
 *Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

