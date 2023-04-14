#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers containing a range of values
 *
 * @min: the minimum value (inclusive)
 * @max: the maximum value (inclusive)
 *
 * Return: On success, a pointer to the newly allocated array.
 *         On failure, NULL is returned.
 */
int *array_range(int min, int max)
{
	int *p, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	p = malloc(size * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = 0; i <= size; min++)
	{
		p[i] = min;
		i++;
	}
	return (p);
}
