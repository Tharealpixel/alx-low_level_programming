#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
