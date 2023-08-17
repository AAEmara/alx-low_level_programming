#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a `dlistint_t` linked list.
 *
 * @head: Pointer to a `dlistint_t` list type, represents the head of the
 * doubly linked list.
 * @index: Unsigned Integer value, index of the node to be returned.
 *
 * Return: Address of the nth node (Success)
 *	   NULL (Failure).
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *curr = head;

	while (count != index && curr != NULL)
	{
		curr = curr->next;
		count++;
	}

	if (count != index)
		return (NULL);

	return (curr);
}
