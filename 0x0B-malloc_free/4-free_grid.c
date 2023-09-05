#include "main.h"
#include <stdlib.h>

/**
 * free_grid - unction that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: array to be frees
 * @height: rows in the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
