#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a singly linked list
 * with a `listint_t` type defined data type.
 *
 * @head: Pointer to an array of Pointers to singly linked list of defined
 * type `listint-t`.
 * @n: Constant Integer Value, represents the data inside the node.
 *
 * Return: Address of the newly add node (Success)
 *	   NULL (Failure).
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(new_node));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	new_node->next = *head;
	*head = new_node;
	return (*head);
}
