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
	if (n == 98)
	{
		printf(" %d",n);
	}
	else if (n < 98)
	{
	
		for (int i = n; i <= 98; i++)
		{
			printf(" %d",n);
		}
	}
	else
	{
		for (int i = n; i >= 98; i--)
		{
			printf(" %d",n);
		}
		printf("\n");
	}
}
