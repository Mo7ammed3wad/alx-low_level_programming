#include <stdlib.h>
#include "main.h"

/**
 * free_grid.
 */

void free_grid(int **grid, int height)
{
	int o;

	if (grid == NULL || height == 0)
		return;

	for (o = 0; o < height; o++)
		free(grid[o]);

	free(grid);
}
