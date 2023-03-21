#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet, followed by a new line
 */
void print_alphabet(void)
{
	int i = 10;
	while(i<10){
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	}

	_putchar('\n');
}
