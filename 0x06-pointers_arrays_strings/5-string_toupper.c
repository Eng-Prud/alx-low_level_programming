#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of
 * a string to uppercase
 * @str: Input string
 * Return: returns pointer to the modified string
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
	}
	return (ptr);
}
