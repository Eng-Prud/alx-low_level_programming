#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - double pointer
 * @width: dimension 1
 * @height: dimension 2
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **alloc;
	int j;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	alloc = (int **)malloc(width * sizeof(int *));
	if (alloc == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		alloc[i] = (int *)malloc(height * sizeof(int));
		if (alloc[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(alloc[j]);
			}
			free(alloc);
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			alloc[i][j] = 0;
		}
	}
	return (alloc);
}
