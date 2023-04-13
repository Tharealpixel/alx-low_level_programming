#include "main.h"
#include <stdlib.h>
#include<string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: lenght of s2 given
 *
 * Return: s or Null if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = strlen(s1);
	j = strlen(s2);
	if (n >= j)
		n = j;

	s = malloc(i + n + 1);
	if (s == NULL)
		return (NULL);

	for (x = 0; x < i; x++)
	{
		s[x] = s1[x];
	}
	for (x = 0; x < n; x++)
	{
		s[i + x] = s2[x];
	}
	s[i + n] = '\0';
	return (s);
}
