#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 *
 * @h: Pointer to a Constant Struct of defined type `listint_t`.
 *
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *curr = h;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		n++;
	}
	return (n);
}
