#include "main.h"

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints
  *
  * Return: Nothing
  */

void print_number(int n)
{
	unsigned int i = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	while (n / i > 9)
	{
		i *= 10;
	}

	while (i != 0)
	{
		_putchar((n / i) % 10 + '0');
		i /= 10;
	}
}
