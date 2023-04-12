#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 *
 * @grid: double pointer 2d grid
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid != 0 && height != 0)
	{
		for (height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
