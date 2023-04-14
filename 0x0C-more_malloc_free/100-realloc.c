#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 *
 * Return: pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *npt;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		npt = malloc(new_size);
		if (npt == NULL)
			return (NULL);
		return (npt);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	npt = malloc(new_size);
	if (npt == NULL)
		return (NULL);

	if (new_size > old_size)
		memcpy(npt, ptr, old_size);
	else
		memcpy(npt, ptr, new_size);

	free(ptr);

	return (npt);
}
