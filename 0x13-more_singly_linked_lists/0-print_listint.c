#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t lis
 * @h: head of the list
 *
 * Return: nodes count
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
