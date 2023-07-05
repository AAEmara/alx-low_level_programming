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
 * zero values and return a casted pointer to void instead of a
 * pointer to character as mentioned in the implementation.
 *
 * Return: Address of the pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/**
	 * Declared the pointer with character data type to point to each byte
	 * of memory dynamically allocated and set it to zero later
	 */
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
		/**
		 * Initializes each byte for the allocated memory by 0 or
		 * equivalently NULL, depending on the data type.
		 */
		for (i = 0; i < (nmemb * size); i++)
		{
			ptr[i] = 0;
		}
		return (ptr);
	}
}
