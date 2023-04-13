#include "main.h"
#include <stdlib.h>
#include<string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, x;

	i = strlen(s1);
	j = strlen(s2);

	s = malloc(i + j + n + 1);
	for (x = 0; x < i; x++)
	{
		s[x] = s1[x];
	}
	for (x = 0; x < n; x++)
	{
		s[i + x] = ' ';
	}
	for (x = 0; x < j; x++)
	{
		s[i + n +x] = s2[x];
	}
	s[i + n + j] = '\0';
	return (s);
}	
