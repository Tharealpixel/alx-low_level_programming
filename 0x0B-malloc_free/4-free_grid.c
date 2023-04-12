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
	int i;

	if (grid != 0 && height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
