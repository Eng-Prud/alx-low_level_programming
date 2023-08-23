#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: input  string
 * Return: Pointer to the modified string
 */

char *cap_string(char *str)
{
	int cap_next = 1;

	while (*str != 0)
	{
		if (cap_next && (*str >= 'a' && *str <= 'z'))
		{
			*str -= 32;
			cap_next = 0;
		}
		else if (*str == ' ' || *str == '\t' || *str == '\n' || *str == ',' ||
		*str == ';' || *str == '.' || *str == '!' || *str == '?' || *str == '"' ||
		*str == '(' || *str == ')' || *str == '{' || *str == '}')
		{
			cap_next = 1;
		}
		else
		{
			cap_next = 0;
		}

		if (*str >= 'A' && *str <= 'Z')
		{
			cap_next = 0;
		}
		str++;
	}
	return (str);
}
