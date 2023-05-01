#include "lists.h"

/**
 * add_nodeint - Adds a new node at the begein of a list
 * @head: head of list
 * @n: The integer for the new node to contain.
 *
 * Return:the address of the new element or Null if it fals to allocate.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
