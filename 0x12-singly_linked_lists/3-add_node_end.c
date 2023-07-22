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
	list_t *new = malloc(sizeof(list_t));
	list_t *tmp;

	if (new == NULL)
	{
		return (NULL);
	}

	/**
	 * Creating the new node and filling its values.
	 */
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	tmp = *head;
	/**
	 * Reach the last node that points to NULL.
	 */
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = new;
	return (tmp->next);
}
