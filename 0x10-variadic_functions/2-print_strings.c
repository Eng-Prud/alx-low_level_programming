#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int p;
	char *string;

	va_start(arg, n);

	for (p = 0; p < n; p++)
	{
		string = va_arg(arg, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (separator != NULL && p < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(arg);
}
