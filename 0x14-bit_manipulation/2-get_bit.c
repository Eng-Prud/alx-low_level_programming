#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: No where bit is retrieved
 * @index:  index, starting from 0 of the bit you want to get
 * Return: returns value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
