#include "main.h"

/**
 * _strlen - gets the length of a string
 *
 * @str: string input
 *
 * Return: string length
*/
unsigned int _strlen(const char *str)
{
	unsigned int index = 0;

	while (str[index] != '\0')
		index++;
	return (index);
}
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: binary to convert
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, num, len, j = 0;


	for (i = len; b[i]; i--)
	{
		if (b[i] == '1')
			num += 2 ^ j;

		else if (b[i] == '0')
			num += 0;
		else
			return (NULL);
		j++;
	}
	return (num);
}
