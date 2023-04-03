#include "main.h"
#include <stdio.h>

/**
 * numLength - returns the length of string
 *
 * @num: operand number
 *
 * Return: number of digits
*/

int numLength(int num)
{
	int length = 0;

	if (!num)
		return (1);

	while (num)
	{
		num = num / 10;
		length = length + 1;
	}

	return (length);
}

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers
 *	starting with 1 and 2 followed by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int count, initials;
	unsigned long f1 = 1, f2 = 2, sum, max = 100000000, f1a = 0, f2a = 0, suma = 0;

	for (cont = 1; cont <= 98; cont++)
	{
		if (f1a > 0)
		{
			printf("%lu", f1a);
		}
		initials = numLength(max) - 1 - numLength(f1);

		while (f1a > 0 && initials > 0)
		{
			printf("%d", 0);
			initials--;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % max;
		sumo = f1a + f2a + (f1 + f2) / mx;
		f1 = f2;
		f1a = f2a;
		f2 = sum;
		f2o = suma;

		if (cont != 98)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
