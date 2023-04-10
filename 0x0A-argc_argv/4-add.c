#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isdigit - checks if input is digit between 0 - 9
 *
 * @c: input
 *
 * Return: 1 if is digit, 0 if not
*/

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

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
			if (*argv[i] == '-')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				while (*argv[i])
				{
					if (_isdigit(*argv[i]) == 0)
					{
						printf("Error\n");
						return (1);
					}
					argv[i]++;
				}
			}
			sum += num;
		}
		printf("%ld\n", sum);
	}
	return (0);
}
