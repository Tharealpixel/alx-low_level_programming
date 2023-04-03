#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to search
 * @accept: set of bytes to search for
 *
 * Return: pointer to byte in s that matches one of the bytes in accept
 *         or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	
	while(*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == *accept)
				return (s);
		}
		s++;
	}
	return (0);
}		
