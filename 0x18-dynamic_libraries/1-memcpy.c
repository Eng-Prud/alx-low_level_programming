#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: Pointer to the destination memoty area
 *@src: Pointer to the source memmory area
 *@n: Number of bytes to be copied
 *
 *Return: Pointer to the memory area @s
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
