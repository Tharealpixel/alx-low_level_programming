#include "3-calc.h"
#include <stdio.h>
#include <string.h> /*for atoi*/
#include <stdlib.h> /*for exit*/

/**
 * main - Program Entry
 *
 * Description: Program that takes 4 arguments where 2 are
 *              int variables plus an operator to perform
 *              a function between the two numbers
 *
 *              Usage: ./calc num1 operator num2
 *                         |     |       |     |_ argv[3]
 *                         |     |       |_ argv[2]
 *                         |     |_ argv[1]
 *                         |_ argv[0]
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0-on success
*/
int main(int argc, char *argv[])
{
	int a, b;
	char *oper;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	oper = argv[2];

	if (get_op_func(oper) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*oper == '/' || *oper == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(oper)(a, b));

	return (0);
}
