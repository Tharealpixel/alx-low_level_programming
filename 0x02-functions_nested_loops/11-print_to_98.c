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
		print(" %d",n)
	}
	else
	{
	
		for (n < 98; n++)
		{
			print(" %d",n);
		}
		for (n > 98; n--)
		{
			print(" %d",n);
		}
		printf("\n");
	}
}
