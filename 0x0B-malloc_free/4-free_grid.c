#include "holberton.h"
#include <stdlib.h>

/**
 *  * free_grid - free the space in a 2D array prev. called by alloc_grid
 *   * @grid: memory to free in 2D array
 *    * @height: rows for grid
 *     **/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
		free(grid);
}
