#include "main.h"

/**
 * malloc_checked - allocating memory using malloc memory management function.
 *
 * @b: Unsigned Integer value for the amount of bytes to be allocated in
 * memory.
 *
 * Return: 98 if malloc Fails
 *	   Address of the allocated memory if malloc Succeeds.
 */

void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
		exit (98);

	return (malloc(b));
}
