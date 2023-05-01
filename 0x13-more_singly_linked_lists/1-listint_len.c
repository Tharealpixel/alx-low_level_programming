#include "lists.h"

/**
 * listint_len - Returns the number of element in a linked list
 * @h: head of list
 *
 * Return: nodesnumber
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
