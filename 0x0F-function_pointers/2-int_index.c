#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 *
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: first element or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
		{
			return (index);
		}
	}
	return (-1);
}
