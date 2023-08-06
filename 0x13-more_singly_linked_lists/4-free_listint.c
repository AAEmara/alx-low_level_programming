#include "lists.h"

/**
 * free_listsint - Frees a `listint_t` list.
 *
 * @head: Pointer to a `listint_t` list, which represents the header of the
 * singly linked list given.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;

		free(tmp);
	}
}
