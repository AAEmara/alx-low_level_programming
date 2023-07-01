#include "lists.h"

/**
 * list_len - Returns the number of elements inside a linked list of
 * the defined type `list_t`.
 * @h: Pointer to a Structure of type list_t.
 *
 * Return: The number of elements in the given linked list.
 */
size_t list_len(const list_t *h)
{
	int sum = 0;
	int status = 1;

	while (status)
	{
		if (h == NULL)
		{
			status = 0;
		}
		else if (h->next == NULL)
		{
			sum++;
			status = 0;
		}
		else
		{
			sum++;
			h = h->next;
		}
	}
	return (sum);
}
