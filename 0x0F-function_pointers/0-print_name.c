#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: arg 1 that is a char
 * @f: function pointer with void return
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
