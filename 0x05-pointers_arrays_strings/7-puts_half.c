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
	
	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}
	if (length_of_the_string % 2 == 1)
	{
		i = (length_of_the_string - 1) / 2;
	}
	else
	{
		i = length_of_the_string / 2;
	}

	for (; i < length_of_the_string; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
