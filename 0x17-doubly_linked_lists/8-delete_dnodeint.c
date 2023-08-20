#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index of a
 * `dlistint_t` linked list.
 *
 * @head: Pointer to an array of pointers to a `dlistint_t` linked list type,
 * which represents the header node of the doubly linked list.
 * @index: Unsigned Integer Value, represents the index of the node to be
 * deleted.
 *
 * Return: 1 (Success)
 *	   -1 (Failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *curr = *head;
	unsigned int count = 0;

	if (curr == NULL)
		return (-1);

	else if (index == 0)
	{
		tmp = curr;
		*head = curr->next;
		free(tmp);
		return (1);
	}

	while (count != (index - 1) && curr != NULL)
	{
		curr = curr->next;
		count++;
	}

	if (count != (index - 1))
		return (-1);

	tmp = curr->next;
	if (curr->next != NULL)
	{	
		curr->next = curr->next->next;
		curr->next->prev = curr;
	}
	free(tmp);

	return (1);
}
