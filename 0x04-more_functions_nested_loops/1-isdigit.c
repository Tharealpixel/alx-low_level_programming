#include "main.h"

/**
 * _isdigit : checks if input c is a digit from 0 to 9
 *
 * @c: input for digit
 *
 * return 1 if c is digit, 0 if not
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
