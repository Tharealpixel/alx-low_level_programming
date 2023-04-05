#include "main.h"
/**
 * factorial - function that returns the factorial of a given number.
 *
 * @n : input number.
 *
 * @f : the result.
 *
 * Return : If n is lower than 0, the function should return -1 to indicate an error
 *          Factorial of 0 is 1.
 */

int factorial(int n)
{
	int f = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (f);
	}
	else
	{
	f = n * factorial(n - 1);
	}
	return (f);
}
