#include <stdio.h>
#include <stdlib.h>

/**
 * coin_counter - counts the minimum number of coins needed to represent
 *                a given amount of money in cents.
 *
 * @cents: the amount of money in cents
 * @coins: a variable to hold the total number of coins counted
 *
 * Return: the minimum number of coins.
 */
int coin_counter(int cents, int coins)
{
	if (cents < 0)
		{
		printf("0\n");
		return (0);
		}
		if (cents >= 25)
		{
			coins += cents / 25;
			cents = cents % 25;
		}
		if (cents >= 10)
		{
			coins += cents / 10;
			cents = cents % 10;
		}
		if (cents >= 5)
		{
			coins += cents / 5;
			cents = cents % 5;
		}
		if (cents >= 2)
		{
			coins += cents / 2;
			cents = cents % 2;
		}
		if (cents == 1)
		{
			coins += 1;
		}
		return (coins);
}
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
		int coins = 0;

		cents = atoi(argv[1]);
		coins = coin_counter(cents, coins);
		printf("%d\n", coins);
	}
	return (0);
}
