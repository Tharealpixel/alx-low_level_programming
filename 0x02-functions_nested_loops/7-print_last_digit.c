#include "main.h"

/**
 * print_last_digit - print last digit of a number.
 *
 * @r: takes number input
 *
 * Return: lastDigit
*/

int print_last_digit(int r)
{
	int last_digit = r % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
