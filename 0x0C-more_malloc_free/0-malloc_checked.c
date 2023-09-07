#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  function that allocates memory using malloc
 * @b: unsigned int
 * Return: pointer
 * exit: status value of 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *check;

	check = malloc(b);

	if (check == NULL)
		exit(98);
	return (check);
}
