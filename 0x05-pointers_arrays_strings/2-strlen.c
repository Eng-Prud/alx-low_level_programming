#include "main.h"

/**
 *_strlen - Function that returns the length of s
 *length - returns the length of a string using a pointer
 *@s: pointer
 *Return: Length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
