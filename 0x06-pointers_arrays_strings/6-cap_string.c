#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: input  string
 * Return: Pointer to the modified string
 */

char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}
	while (str[i] != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n' || *str == ',' ||
		*str == ';' || *str == '.' || *str == '!' || *str == '?' || *str == '"' ||
		*str == '(' || *str == ')' || *str == '{' || *str == '}')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		else
		{
			i++;
		}
	}
	return (str);
}
