#include "main.h"

/*
 * print_alphabet_x10 - print letter a-z 10time,
 *
 * followed by new line
 */
 void print_alphabet_x10(void)
{
	char letter 'a';
	int i = 0;

	while (i < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		letter = 'a';
		_putchar('\n');
		i++;
	}
}
