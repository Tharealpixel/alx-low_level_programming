#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: Number of command line arguments
 * @argv: Array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		while (*argv)
		{
			i++;
			argv++;
		}
		printf("%d\n", i - 1);
	}
	return (0);
}
