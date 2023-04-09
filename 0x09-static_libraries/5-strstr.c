#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle in
 * the string haystack
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the substring in the string,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while(*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
			{
				break;
			}
		}
		if (!needle[i])
		{
			return(haystack);
		}
		haystack ++;
	}
	return ('\0');
}
