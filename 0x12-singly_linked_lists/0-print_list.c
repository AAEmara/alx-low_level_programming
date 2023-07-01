#include "lists.h"

/**
 * print_list - Prints all the elements of the given list.
 *
 * @h: Pointer to list_t defined data type where its elements are going
 * to be printed.
 *
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
	int status = 1;
	int sum = 0;

	while (status)
	{
		if (h == NULL)
		{
			status = 0;
		}
		else if (h->next == NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			sum++;
			status = 0;
		}
		else
		{
			if (h->str == NULL)
				printf("[%d] %s\n", 0, "(nil)");
			else
				printf("[%d] %s\n", h->len, h->str);
			sum++;
			h = h->next;
		}
	}
	return (sum);
}
