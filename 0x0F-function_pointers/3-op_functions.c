#include "3-calc.h"
/**
 * op_add - adds two ints
 *
 * @a: int a
 * @b: int b
 *
 * Return: sum of @a and @b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two ints
 *
 * @a: int a
 * @b: int b
 *
 * Return: difference of @a and @b
*/
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplies two ints
 *
 * @a: int a
 * @b: int b
 *
 * Return: product of @a and @b
*/
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divides two ints
 *
 * @a: int a
 * @b: int b
 *
 * Return: results of division
*/
int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - remainder of division  between two ints
 *
 * @a: int a
 * @b: int b
 *
 * Return: returns the remainder of the division of a by b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
