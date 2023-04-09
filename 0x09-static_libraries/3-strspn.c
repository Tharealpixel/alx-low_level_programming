#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Initial segment searched.
 * @accept: Second string compared to.
 *
 * Return: The number of bytes common in the to pointers.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			return (i);
	}
	return (i);
}
