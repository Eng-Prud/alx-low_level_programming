#include "main.h"

/**
 *_puts_recursion - Function to print a string followed by a new line
 *@s: String to be printed
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
