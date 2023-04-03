#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the sum of even-valued
 *		Fibonacci sequence not exceed
 *		4 million
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long i = 0, i2 = 1, sum;
	float total_sum;

	while (1)
	{
		sum = i + i2;

		if (sum > 4000000)
		{
			break;
			
		}
		if ((sum % 2) == 0)
		{
			total_sum += sum;
		}

		i = i2;
		i2 = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
