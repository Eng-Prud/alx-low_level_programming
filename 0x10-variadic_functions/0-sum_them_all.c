#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns sum of parameters
 * @n: Constant unsigned int
 * Return: Sum to function
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int p;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (p = 0; p < n; p++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
