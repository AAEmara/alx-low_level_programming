#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 *
 * @h: Pointer to an array of pointers to `dlistint_t` linked list type,
 * which represents the header of the doubly linked list.
 * @idx: Unsigned Integer Value, represents the value of the index.
 * @n: Integer Value, represents the value of the data inside the inserted
 * node.
 *
 * Return: Address of the inserted new node (Success)
 *	   NULL (Failure).
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int count = 0;
	dlistint_t *curr = *h;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0 || curr == NULL)
	{
		new_node->next = curr;
		*h = new_node;
		return (*h);
	}

	while (count != (idx - 1) && curr != NULL)
	{
		curr = curr->next;
		count++;
	}

	if (count != (idx - 1))
		return (NULL);

	new_node->next = curr->next;
	if (curr->next != NULL)
		curr->next->prev = new_node;

	curr->next = new_node;
	new_node->prev = curr;

	return (curr);
}
