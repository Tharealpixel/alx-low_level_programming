#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the name of the file it was
 *              compiled from, followed by a new line
 *
 * Return: void
*/
void main(void)
{
	printf("%s\n", __FILE__);
}
