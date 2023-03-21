#include "main.h"

/*
 * print_alphabet_x10 - print letter a-z 10 times,
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		letter = 'a';
		_putchar('\n');
	}
}
