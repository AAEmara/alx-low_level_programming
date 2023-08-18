#include "lists.h"

/**
 * pop_listint - Deletes the head node of a `listint_t` linked list,
 * and returns the head node's data.
 *
 * @head: Pointer to an array of pointers to a `listint_t` linked list,
 * which represents the head of singly linked list.
 *
 * Return: Node's Data
 *	   0 if empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int value;

	if (*head == NULL)
		return (0);

	tmp = *head;
	value = tmp->n;
	*head = (*head)->next;
	tmp->next = NULL;
	free(tmp);
	return (value);
}
