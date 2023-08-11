#include <stdio.h>
/**
 *main - Enttry point
 *putchar - Prints alphabet in lower and upper casein std output
 *
 *Return: Always 0 (SUCCESS)
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}
