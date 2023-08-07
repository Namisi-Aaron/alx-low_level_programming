#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns pointer to a 2D array of integers
 * @width: no of elements in row
 * @height: no of elements in column
 * Return: NULL on failure || if w or h <= 0
 * pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);
		if (grid[x] == NULL)
		{
			for (; x >= 0; x--)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{

		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}
	return (grid);
}
