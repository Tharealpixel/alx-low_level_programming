#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 *		starting with 1 and 2 folled by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int c;
	unsigned long i = 0, i2 = 1, sum;

	for (c = 0; c < 50; c++)
	{
		sum = i + i2;
		printf("%lu", sum);

		i = i2;
		i2 = sum;

		if (c == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}

	return (0);
}
