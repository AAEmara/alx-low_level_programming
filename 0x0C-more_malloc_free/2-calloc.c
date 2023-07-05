#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc function.
 *
 * @nmemb: Unsigned integer value, which is the number of elements
 * in the array to be allocated.
 * @size: Unsigned integer value, which is the size to be allocated
 * for each single element of the array.
 *
 * Description: The function initializes the memory allocated with
 * zero values.
 *
 * Return: Address of the pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < nmemb; i++)
		{
			ptr[i] = 0;
		}
		return (ptr);
	}
}
