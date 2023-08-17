#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a `dlistint_t` list.
 *
 * @head: Pointer to an array of pointer to a `dlistint_t` list type, which
 * represents the head of the doubly linked list.
 * @n: Constant integer value, represents the data inside the newly added
 * node.
 *
 * Return: Address of the newly added node (Success)
 *	   Null (Failure)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	new_node->next = *head;
	new_node->next->prev = new_node;
	*head = new_node;
	return (*head);
}
