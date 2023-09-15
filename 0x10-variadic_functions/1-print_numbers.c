#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: No of integers passes
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list count;
	unsigned int p;
	int num;

	va_start(count, n);

	for (p = 0; p < n; p++)
	{
		num = va_arg(count, int);
		printf("%d", num);

		if (separator != NULL && p < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(count);

}
