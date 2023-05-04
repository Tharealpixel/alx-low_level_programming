#include "main.h"

/**
 * set_bit - sets byte to 1
 * @n: pointer to int
 * @index: byte ti be changed to 1
 * Return: 1 or -1 if failed.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
