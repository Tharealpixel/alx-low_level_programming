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
	for (n = 0;n <= 98;n++)
	{
		int x;

		x = n + 98;
		printf(" %d,",x);
	}
	printf("\n");
}
