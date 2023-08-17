#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked `dlistint_t`
 * list.
 *
 * @h: Pointer to a Constant `dlistint_t` list, which represents the header
 * node of the doubly linked list.
 *
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
