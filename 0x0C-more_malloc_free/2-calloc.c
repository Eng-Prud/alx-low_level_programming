#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: no of elements in array
 * @size: size in bytes
 * Return: NULL if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}

	memset(array, 0, nmemb * size);

	return (array);
}
