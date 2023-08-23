#include "main.h"

/**
 *_strncat -  Concatenate two strings with a maximum of n characters from src
 *@dest: Destination string
 *@src: Source string to be appended
 *@n: Maximum number of characters to be appendedi
 *Return: returns result
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (result);
}
