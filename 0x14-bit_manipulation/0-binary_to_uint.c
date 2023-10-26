#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 * @b: ptr to a string of 0 and 1 chars
 * Return: he converted number, or 0 if b is not 0/1, ob is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_no = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		converted_no = (converted_no << 1) | (*b - '0');
		b++;
	}

	return (converted_no);
}
