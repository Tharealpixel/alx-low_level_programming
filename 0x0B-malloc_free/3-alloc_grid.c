#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocates a 2D array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: a pointer to the allocated 2D array, or NULL on failure
 */
int *alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);

	int *grd = malloc(sizeof(int) * width * height);
	if (grd == NULL)
		return (NULL);

	for (int i = 0; i < width * height; i++)
		grd[i] = 0;

	return (grd);
}
