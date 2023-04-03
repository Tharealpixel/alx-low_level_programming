#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int n;

	while(*s)
	{
		for (i = 0; accept[i]; i++)
		{	
			if(*s == accept[i])
			{
				n++;
			}
		}
	}
	return (n);
}
