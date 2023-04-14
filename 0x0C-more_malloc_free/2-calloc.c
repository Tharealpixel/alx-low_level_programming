#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - a function that allocates
 *           memory for an array using malloc
 *
 * @nmemb: size of array
 * @size: size of each element
 *
 * Return: pointer or NULL if it fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	ptr  = malloc(size * nmemb);

	if (ptr == 0)
		return (NULL);

	memset(ptr, 0, nmemb * size);
	return (ptr);

}
