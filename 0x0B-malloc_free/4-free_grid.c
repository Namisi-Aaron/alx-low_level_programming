#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2D grid
 * @grid: the grid created
 * @height: no of column elements of grid
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
