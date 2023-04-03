#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

        for(i = 0; i < size; i++)
	{
                sum += a[i];
        }
	j = size - 1;
        while( j > 0)
        {
                sum += a[j];
		j--;
        }
        printf("%d, %d\n", sum1, sum2);
}
	printf("%d, %d\n", sum1, sum2);
}
