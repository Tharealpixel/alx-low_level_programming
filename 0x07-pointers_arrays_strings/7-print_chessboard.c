#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: Pointer to an 8x8 array of characters representing the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i}[7]; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
