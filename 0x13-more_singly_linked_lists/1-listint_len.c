#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list of defined
 * type `listint_t`.
 *
 * @h: Pointer to a Constant `listint_t` type defined value, which represents
 * a node in singly linked list.
 *
 * Return: Number of elements in a linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
