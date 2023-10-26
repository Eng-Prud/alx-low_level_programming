#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first unsigned int
 * @m: second int
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int result = n ^ m;

	while (result > 0)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
