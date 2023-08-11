#include <stdio.h>
/**
 *main - Entry point
 *putchar - prints alphabet except q and e
 *
 *Return: Always 0 (SUCCESS)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');

	return (0);
}

