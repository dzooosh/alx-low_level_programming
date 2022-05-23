#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2d grid of array
 * @grid: grid from 2d array of integers
 * @height: height of the grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
