#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flipeed to have quals
 * @n: The number
 * @m: The second number
 *
 * Return: minimum to flipbits to have n & m equals
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, flips = 0;

	while (x > 0)
	{
		flips += (x & 1);
		x >>= 1;
	}

	return (flips);
}
