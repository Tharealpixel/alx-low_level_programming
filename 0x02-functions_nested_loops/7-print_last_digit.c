#include "main.h"

int print_last_digit(int r)
{
	int last_digit = r & 10 ;
	if (last_digit < 0)
	{
		last_digit = -last_digit ;
	}
	_putchar(last_digit);
	return (lats_digit);
}
