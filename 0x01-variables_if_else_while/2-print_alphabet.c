#include <stdio.h>
/**
 *main - Entry point
 *putchar - prints to standard output
 *
 *Return: always 0 (SUCCESS)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
