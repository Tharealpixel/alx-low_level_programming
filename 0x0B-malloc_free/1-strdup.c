#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer
 *			to a newly allocated space in memory,
 *			which contains a copy of the string given as a parameter.
 * @str: string to be duplicated
 *
 * Return: dup or Null.
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	dup = malloc(len + 1);
	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[len] = '\0';
	return (dup);
}
