#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer
 * @s: the pointer to convert
 * Return: An integer
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int sign = 1;
	unsigned int is_digit = 0;

	while (s[c])
	{
		if (s[c] == '-')
		{
			sign *= -1;
		}
		while (s[c] >= '0' && s[c] <= '9')
		{
			is_digit = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (is_digit == ni)
		{
			break;
		}
		c++;
	}
	return (ni * sign);

}
