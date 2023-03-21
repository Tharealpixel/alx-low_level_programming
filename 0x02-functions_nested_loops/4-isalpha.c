#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isalpha(int c);
{
	if (c<='A' && c>= 'Z' && c<='a' && c>='z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
