#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a
 * duplicate of the string str
 * @str: string to be duplicated
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *dup;
	int len = 0;
	int p;

	if  (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	dup = (char *)malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (p = 0; p < len; p++)
	{
		dup[p] = str[p];
	}

	return (dup);
}
