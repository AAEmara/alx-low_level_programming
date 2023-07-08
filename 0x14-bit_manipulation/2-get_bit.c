#include "main.h"

/**
 * get_bit - Return the value of a bit at a given index.
 *
 * @n: Unsigned Long Integer value for the decimal number given.
 * @index: Unsigned Long Integer value for the bit index to be returned.
 *
 * Return: -1 if Error
 *	   Integer value representing the binary value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* Exceeding the 64 bit limit of Unsigned long int */
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
