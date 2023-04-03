#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int sum1;
	int sum2;
	int i, j;

	for(i = 0; i < size; i++)
	{
		sum += a[i];
	}
	for(j = size; j > 0; j--)
	{
		sum += a[j];
	}
	printf("%d, %d\n", sum1, sum2);
}
