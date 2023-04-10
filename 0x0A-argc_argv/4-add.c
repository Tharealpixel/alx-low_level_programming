#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: argument count
 * @argv: array
 *
 * Return: 0 if successful, else 1
 */
int main(int argc, char *argv[])
{
	long int sum = 0;
	long int i, num;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			if (num == 0 && *argv[i] != '0')
			{
				printf("Error\n");
				return (1);
			}
			sum += num;
		}
		printf("%ld\n", sum);
	}
	return (0);
}
