#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - Calls the right function based on operand
 *
 * @s: a character pointer pointing to a symbol from the program argument
 *
 * Return: the right function
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*s == *ops[i].op)
			return(ops[i].f);
		i++;
	}
	return (NULL);
}
