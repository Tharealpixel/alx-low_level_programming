#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet, followed by a new line
 */
void print_alphabet_x10(void)
{
	int i = 10;
	while(i<10){
	char letter = 'a';

	while (letter <= 'z')
	{
		printf(letter);
		letter++;
	}
	letter = 'a';
	 printf('\n');
        i++;
	}
}
