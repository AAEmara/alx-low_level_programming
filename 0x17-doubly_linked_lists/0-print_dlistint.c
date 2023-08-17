#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a `dlistint_t` list.
 *
 * @h: Pointer to a Constant `dlistint_t` list, which represents the head
 * of the doubly linked list.
 *
 * Return: Number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
