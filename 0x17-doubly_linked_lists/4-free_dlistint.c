#include "lists.h"

/**
 * free_dlistint  - Frees a `dlistint_t` list.
 *
 * @head: Pointer to a `dlistint_t` list type, which represents the
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
