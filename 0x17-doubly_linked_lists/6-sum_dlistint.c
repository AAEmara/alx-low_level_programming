#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data of a `dlistint_t` linked
 * list.
 * @head: Pointer to a `dlistint_t` linked list type, which represents the
 * head of the doubly linked list.
 *
 * Return: Sum of the data or 0 if empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	int sum = 0;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
