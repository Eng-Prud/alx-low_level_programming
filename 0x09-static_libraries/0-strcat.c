#include "main.h"

/**
 * _strcat - Pointer to the file
 * @dest: Source file
 * @src: file being concatenated
 * Return: returns the concatenated file
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (result);
}
