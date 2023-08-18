#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a `listint_t` linked list.
 *
 * @head: Pointer to a `listint_t` linked list type, and represents the header
 * node of the singly linked list.
 * @index: Unsigned Integer Value, represents the index of the node to be
 * returned.
 *
 * Return: Address of the requested node (Success)
 *	   NULL if it doen't exist (Failure).
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *curr = head;

	while (count != index && curr != NULL)
	{
		curr = curr->next;
		count++;
	}

	if (count != index)
		return (NULL);

	return (curr);
}
