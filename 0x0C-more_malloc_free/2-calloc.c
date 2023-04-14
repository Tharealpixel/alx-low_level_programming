#include "main.h"
#include <stdlib.h>
#include <string.h>

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
