#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters passed to the function
 * @...: var number of parameters
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ag;

	va_start(ag, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ag, int);

	va_end(ag);

	return (sum);
}

