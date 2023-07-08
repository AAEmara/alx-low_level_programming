#include "main.h"

/**
 * clear_bit - Sets the value of a bit to Zero at a given index.
 *
 * @n: Pointer to Unsigned Long Integer, which is the given number to have
 * its bit converted to zero at a certain index.
 * @index: Unsigned Integer, which is the index of the bit to be convered to
 * Zero.
 *
 * Return: -1 if Failed.
 *	   1 if Succeeded.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		/*
		 * Shift the 1 bit by index wanted to be converted to 0
		 * Negate the whole resulted set of bits so the 0s would
		 * be converted to 1s and Vice Versa
		 * Perform the AND bitwise operator between the given number
		 * and the bits made
		 */
		*n &= ~(1 << index);
		return (1);
	}
}
