#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - prints the opcodes of a given function
 *
 * @start: pointer to the function to print the opcodes of
 * @num_bytes: number of bytes of opcodes to print
 *
 * Return: void
 */
void print_opcodes(unsigned char *start, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", *(start + i));
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own main function.
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 or 2 on failure
 */
int main(int argc, char **argv)
{
	int num_bytes = atoi(argv[1]);
	unsigned char *start = (unsigned char *) &main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(start, num_bytes);
	return (0);
}
