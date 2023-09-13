#include "function_pointers.h"

/**
 * int_index - Function to search for an integer
 * @array: array to chose nos from
 * @size: no of element in the array
 * @cmp: Function pointer
 * Return: -1 for failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (p = 0; p < size; p++)
	{
		if (cmp(array[p]) != 0)
		{
			return ((int)p);
		}
	}
	return (-1);
}
