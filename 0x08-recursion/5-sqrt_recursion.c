#include "main.h"

/**
 * find_sqrt - Recursively finds the square root of a number.
 * @n: The number to find the square root of.
 * @i: The current integer value to check.
 *
 * Return: The square root of n, or -1 if n does not have a natural square root.
 */
int find_sqrt(int n,int i)
{
	if (i*i != n && i <= n / 2)
	{
		i = find_sqrt (n, i + 1);
	}
	if (i*i == n)
	{
		return i;
	}
	else
	{
		return -1;
	}
}

/**
 * _sqrt_recursion - Returns the square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return -1;
	}
	else if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return find_sqrt(n, 1);
	}
}
