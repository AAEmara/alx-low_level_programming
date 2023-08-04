#include "main.h"

/**
 * get_bit - Gets the value of the bit.
 *
 * @n: Unsigned Long Integer value, representing the number to be used.
 * @index: Unsigned Integer value, representing the index of the bit in the
 * used number.
 *
 * Return: -1 if error
 *	   Integer value representing the bit index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
