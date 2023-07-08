#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 to a given index.
 *
 * @n: Pointer to Unsigned Long Integer Value to be changed.
 * @index: Unsigned Integer value, represents the index of the bit that
 * will be changed (starting from index 0).
 *
 * Return: -1 if Failed.
 *	    1 if Succeeded.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		*n |= 1 << index;
		return (1);
	}
}
