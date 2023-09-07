#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: returns pointer to new array
 */

int *array_range(int min, int max)
{
	int *new_array;
	int size;
	int p;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;

	new_array = malloc(sizeof(int) * size);

	if (new_array == NULL)
	{
		return (NULL);
	}

	for (p = 0; p < size; p++)
	{
		new_array[p] = min + p;
	}

	return (new_array);
}
