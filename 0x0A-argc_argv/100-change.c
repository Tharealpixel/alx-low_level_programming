#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 *        to make change for an amount of money.
 *
 * @argc: count
 * @argv: array
 *
 * Return: 0 if one arg, else 1
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int cents;
		int x = 0;

		cents = atoi(argv[1]);
		if (cents < 0)
		{
		printf("0\n");
		return 0;
		}
		if (cents >= 25)
		{
			x += c / 25;
			c = c % 25;
		}
		if (cents >= 10)
		{
			x += c / 10;
			c = c % 10;
		}
		if (cents >= 5)
		{
			x += c / 5;
			c = c % 5;
		}
		if (c >= 2)
		{
			x += c / 2;
			c = c % 2;
		}
		if (c == 1)
		{
			x += 1;
		}
		printf("%d\n", x);
	}
	return (0);
}
