#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: counts no of commands
 * @av:Array of argument strings
 * Return: pointer to new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *result;
	int len = 0;
	int i = 0;
	int j = 0;
	int k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}

	result = malloc((len + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[k++] = av[i][j];
		}
		result[k++] = '\n';
	}
	result[k] = '\0';
	return (result);
}
