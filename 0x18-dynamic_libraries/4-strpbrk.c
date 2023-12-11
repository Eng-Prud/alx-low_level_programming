#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String to search
 * @accept: String containing bytes to search for
 *
 *Return: A pointer to the byte in s that matches one of the bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			return (s);
		}

		s++;
	}

	return (NULL);
}
