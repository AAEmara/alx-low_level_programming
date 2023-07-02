#include "lists.h"

/**
 * list_t - Adds a new node of at the end of a linked list.
 *
 * @head: Pointer to a Pointer that points to a list_t Structure.
 * @str: Pointer to Character value, which is the string to be copied
 * to the structure.
 *
 * Return: NULL if it Fails
 *	   Address of the new element if it Succeeds.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->str = strdup(str);
		new->len = strlen(str);
		temp->next = new;

		*head = temp;
		return (*head);
	}
}
