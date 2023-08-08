#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2D grid
 * @grid: the grid created by alloc_grid()
 * @height: no of column elements of grid
 */
void free_grid(int **grid, int height)
{
	int x;

	x = 0;
	for (; x < height; x++)
		free(grid[x]);
	free(grid);
}
