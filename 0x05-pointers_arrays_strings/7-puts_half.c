#include "main.h"

/**
 *puts_half - function that prints half of a string, followed by a new line
 *@str: pointer to the string
 *n: half of characters
 */

void puts_half(char *str)
{
	int length_of_the_string = 0;
	int i = 0;
	int p = 0;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}
	if (length_of_the_string % 2 == 1)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		p = length_of_the_string / 2;
		while (str[p] != '\0')
		{
			_putchar(str[p]);
			p++;
		}
	}
	_putchar('\n');
}
