#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data of a `listint_t` linked
 * list.
 *
 * @head: Pointer to a `listint_t` linked list, which representes the header
 * node of the singly linked list.
 *
 * Return: Sum of the data in all of the nodes
 *	   0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr = head;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
