#include "main.h"

/**
 * _memset: function that fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: the constant byte
 * @n: number of bytes of the memory area pointed to by @s
 *
 * Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	
	/**
	 * @i:declaring an unsigned since
	 * the value is non-negative
	 *
	 */
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
