#include "main.h"

/**
 * _strncpy -  function that copies a string
 * @dest: A pointer to the destination string
 * @src: A pointer to the source string
 * @n: Max number of characters to be copied from src
 * Return: returns result
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (result);
}
