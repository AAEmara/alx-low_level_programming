#include "lists.h"

/**
 * free_listint2 - Frees a `listint_t` list and handling the dangling pointer
 * issue.
 *
 * @head: Pointer to an array of Pointers to `listint_t` lists, which
 * represents the nodes to be freed.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;

		free(tmp);
	}
	*head = NULL;
}
