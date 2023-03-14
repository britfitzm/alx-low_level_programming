#include "main.h"
#include <stdlib.h>

/**
 * free_grid - allocates a grid and frees up space
 * @grid: the grid to free
 * @height: height of grid
 * Return: free grid
 */

void free_grid(int **grid, int height)

{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
