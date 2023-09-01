#include "main.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: First string
 * @s2: Second string
 * Return:returns an integer
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	if (*s1 != '\0')
	{
		return (*s1);
	}
	else if (*s2 != '\0')
	{
		return (-*s2);
	}
	else
	{
		return (0);
	}
}
