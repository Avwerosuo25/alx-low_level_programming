#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - frees a 2-D array previously created by a function
 * @grid: the 2-dimensional grid to be freed
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
