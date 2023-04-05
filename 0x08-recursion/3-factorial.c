#include "main.h"
/**
 * factorial - function that returns the factorial of a given number.
 *
 * @n : input number.
 *
 * Return : The factorial of @n. If @n is less than 0, returns -1.
 *         If @n is 0, returns 1.
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
