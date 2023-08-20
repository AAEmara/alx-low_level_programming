#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 *
 * @head: Pointer to an array of Pointers that points to a `listint_t` linked
 * list type, which represents the header of a singly linked list.
 * @idx: Unsigned Integer Value, which represents the index of the node to be
 * inserted.
 * @n: Integer Value, represents the data inside the inserted node.
 *
 * Return: Address of the new node inserted (Success)
 *	   NULL (Failure)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr = *head;
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int count = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0 || curr == NULL)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	while (count != idx - 1 && curr != NULL)
	{
		curr = curr->next;
		count++;
	}

	if (count != (idx - 1))
		return (NULL);

	new_node->next = curr->next;
	curr->next = new_node;
	return (new_node);
}
