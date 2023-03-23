#include "main.h"

/**
 * Checks the ASCII value of c
 * @c:if c is between 65 and 90: return 1
 * else return 0
 */


int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
