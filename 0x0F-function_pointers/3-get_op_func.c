#include "3-calc.h"
#include <string.h>
#include <stddef.h>


op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};

/**
 * get_op_func - Function that selects correct operation
 * @s: opperator
 * @Return: Return ptr to function
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
