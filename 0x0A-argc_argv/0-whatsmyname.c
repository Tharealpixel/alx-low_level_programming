#include <stdio.h>

/**
 * main - program that prints its name.
 * @argc: Number of command line arguments
 * @argv: Array 
 * Return: 0
 */
int main(int argc, char *argv[])
{
	argc = 1;

	printf("%s\n", argv[argc - 1]);
	return (0);
}
