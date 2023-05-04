#include "main.h"

/**
 * str_length - Returns the length of a string
 *
 * @s: The string to check
 *
 * Return: The length of the string
 */
int str_len(char *s)
{
	int length = 0;
	while (*s)
	{
		length++;
		s++;
	}
	return length;
}

/**
 * is_palindrome - Checks if a string is a palindrome
 *
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = str_len(s);
	int i;

	if (length <= 1)
		return (1);

	if (*s == *(s + length - 1))
		return (is_palindrome(s + 1) && is_palindrome(s + len - 2));
	else
		return (0);
}
