#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a `dlistint_t` list.
 *
 * @head: Pointer to a an array of Pointers to a `dlistint_t` list type,
 * which represents the head of the doubling linked list.
 * @n: Constant Integer value, which represents the data inside the node.
 *
 * Return: Address of the new node (Success)
 *	   NULL (Failure).
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *curr;

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

	curr = *head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	new_node->prev = curr;
	curr->next = new_node;
	return (new_node);
}
