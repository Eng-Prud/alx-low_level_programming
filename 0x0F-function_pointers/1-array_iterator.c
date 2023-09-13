#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function as a parameter
 * @array: array holding function
 * @size: size of array
 * @action: Function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t p;

	for (p = 0; p < size; p++)
	{
		action(array[p]);
	}
}
