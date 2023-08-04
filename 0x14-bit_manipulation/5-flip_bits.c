#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to be fliped to get
 * from one number to another.
 *
 * @n: Unsigned Long Integer Value, represents the first value.
 * @m: Unsigned Long Integer VAlue, rerpesents the second value.
 *
 * Return: Unsigned Integer Values for the number of bits to be fliped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int counter = 0, i = 0;
	int result = n ^ m;

	while (i < sizeof(n) * 8)
	{
		if ((result & 1) == 1)
			counter++;

		result >>= 1;
		i++;
	}
	return (counter);
}
