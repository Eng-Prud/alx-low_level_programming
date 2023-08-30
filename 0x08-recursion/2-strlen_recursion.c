#include "main.h"

/**
 *_strlen_recursion - Function that returns length of a string
 *@s: String whose length is being printed
 *Return: 0 if null character is reached
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
