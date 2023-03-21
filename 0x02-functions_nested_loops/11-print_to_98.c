#include "main.h"
#include <stdio.h>

/**
 * print natural numbers from 0 to 98
 *
 * Numbers kept  separated by a comma, followed by a space
 *
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
	
		for (i = n; i < 98; i++)
		{
			printf("%d, ",n);
		}
	}
	else
	{
		for (i = n; i > 98; --i)
		{
			printf("%d, ",n);
		}
		printf("\n");
	}
}
