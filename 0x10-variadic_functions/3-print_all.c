#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Function that prints anything
 * @format: List of types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	char *separator = "";
	unsigned int p = 0;
	char *string;

	va_start(arg, format);

	while (format && format[p])
	{
		switch (format[p])
		{
			case 'c':
				printf("%s%c", separator, va_arg(arg, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(arg, double));
				break;
			case 's':
				{
					string = va_arg(arg, char *);
					if (string == NULL)
						string = "(nil)";
					printf("%s%s", separator, string);
				}
				break;
			default:
				p++;
				continue;
		}
		separator = ", ";
		p++;
	}
	printf("\n");
	va_end(arg);
}
