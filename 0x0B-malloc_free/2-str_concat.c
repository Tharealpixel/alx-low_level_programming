#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * str_concat - Concatenates two strings.
 * @s1: First string to concatenate.
 * @s2: Second string to concatenate.
 *
 * Return: If successful, a concatenated string @s. Otherwise, returns NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *s;

	len1 = strlen(s1);
	len2 = strlen(s2);

	s = malloc(len1 + len2 + 1);
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		s[len1 + i] = s2[i];
	}
	s[len1 + len2] = '\0';
	return (s);
}
