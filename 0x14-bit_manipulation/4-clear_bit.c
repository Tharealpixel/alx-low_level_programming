#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0
 * @n: A pointer to the int.
 * @index: The index for the bit to be set
 *
 * Return: 1 or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
