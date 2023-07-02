#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list of
 * the defined type list_t.
 *
 * @head: Pointer that points to a Pointer to list_t Structure.
 * @str: A constant Pointer to character value (string).
 *
 * Return: NULL if it Fails
 *	   Address of the new node if it Succeeds.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->next = *head;
		new->str = strdup(str);
		new->len = strlen(str);

		*head = new;
		return (*head);

	}
}
