#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds and prints the largest prime factor of num
 *
 * @num: the number to find the largest prime factor of
 */

void largest_prime_factor(long int num)
{
	long int i;

	while (num % 2 == 0)
	{
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			num /= i;
		}
	}
	printf("%ld\n", num);
}

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}

