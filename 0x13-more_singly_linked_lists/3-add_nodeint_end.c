#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: node pointer
 * @index: The index to set the value
 *
 * Return: 1 or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n ^= (1 << index);
	return (1);
}
