#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: Pointer to an 8x8 array of characters representing the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; a[i][7]; i++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[i][n]);

		_putchar('\n');
	}
}
