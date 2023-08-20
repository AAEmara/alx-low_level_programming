#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at the index given of a
 * `listint_t` linked list.
 *
 * @head: Pointer to an array of pointers to a `listint_t` list type, which
 * represents the header of the singly linked list given.
 * @index: Unsigned Integer Value, which represents the value of the index
 * of the related node to be deleted.
 *
 * Return: 1 (Success)
 *	   -1 (Failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *curr = *head;
	unsigned int count = 0;

	if (curr == NULL)
	{
		return (-1);	
	}
	else if (index == 0)
	{
		tmp = *head;
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
	curr->next = tmp->next;
	tmp->next = NULL;
	free(tmp);
	return (1);
}
