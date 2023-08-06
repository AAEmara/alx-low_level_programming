#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a `listint_t` list.
 *
 * @head: Pointer to an array of Pointers to a `listint_t` list, which
 * represents the head of the of the singly linked list.
 * @n: Constant Integer value, which represents the data inside the node.
 *
 * Return: Address of the new element (Success)
 *	   NULL (Failure)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *curr;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

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

	curr->next = new_node;
	return (curr->next);
}
