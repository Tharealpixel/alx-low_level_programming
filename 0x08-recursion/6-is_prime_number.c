#include "main.h"

/**
 * check_prime - Checks if a number is prime recursively
 *
 * @n: The number to check
 * @i: The divisor to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if ((n % i == 0) && (i <= n / 2))
	{
		return (0);
	}
	if ((n % i != 0) && (i * i <= n))
	{
		return (check_prime(n, i + 1));
	}
	if ((n % i != 0) && (i * i >= n)|| (n == 2))
	{
		return (1);
	}
}

/**
 * is_prime_number - Checks if a number is prime
 *
 * @n: The number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int i = 2;

	return (check_prime(n, i));
}
