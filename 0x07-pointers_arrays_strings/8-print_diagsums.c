#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

        for(i = 0; i < size; i++)
	{
                sum += a[i];
		a += size;
        }
	j = size - 1;
        while( j > 0)
        {
                sum += a[j];
		a -= size;
		j--;
        }
        printf("%d, %d\n", sum1, sum2);
}
