#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to be fliped to get from
 * one number to another.
 *
 * @n: Unsigned Long Integer, First number in comparison.
 * @m: Unsigned Long Integer, Second number in comparison.
 *
 * Return: Number of bits to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int new;

	new = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		if ((new >> i) & 1)
		{
			count++;
		}
	}
	return (count);
}
