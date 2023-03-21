#include "main.h"

int print_last_digit(int r)
{
	int last_digit = r % 10 ;
	if (last_digit < 0)
	{
		last_digit = -last_digit ;
	}
	_putchar("%d\n", last_digit);
	return (last_digit);
}
