#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @c: char
 * @size: size of array
 * Return: pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int p;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size + 1);

	if (array == NULL)
	{
		return (NULL);
	}

	for (p = 0; p < size; p++)
	{
		array[p] = c;
	}
	return (array);
}
