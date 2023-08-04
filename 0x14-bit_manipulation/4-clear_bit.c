#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 *
 * @n: Pointer to Unsigned Long Integer Value, representing the value that
 * contains the bit to be converted.
 * @index: Unsigned Integer Value, representing the index of the bit.
 *
 * Return: -1 if error
 *	   1 if success.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
