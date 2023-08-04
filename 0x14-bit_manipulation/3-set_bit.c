#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 *
 * @n: Pointer to Unsigned Long Integer Value.
 * @index: Unsigned Integer Value, representing the index.
 *
 * Return: -1 if error.
 *	   1 if success.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/**
	 * getting the number of bits
	 */
	if (index > sizeof(*n) * 8)
		return (-1);

	*n |= (1 << index);
	return (1);
}
