#include "lists.h"


/**
 * free_list - Frees a list of type `list_t`.
 *
 * @head: Pointer to a list_t data type, which is the singly linked list
 * that needs to be freed.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *curr = head;
	list_t *tmp;

	while(curr != NULL)
	{
		tmp = curr;
		curr = curr->next;

		free(tmp->str);
		free(tmp);
	}
}
