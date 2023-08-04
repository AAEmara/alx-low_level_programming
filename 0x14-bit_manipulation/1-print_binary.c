#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: Unsigned Long Integer Value, that represents the number to be
 * printed in binary.
 *
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	int counter = 0, i;
	unsigned long int value;

	for (i = 63; i >= 0; i--)
	{
		value = (n >> i) & 1;

		if (value == 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter > 0 && value == 0)
			_putchar('0');
	}

	if (n == 0)
		_putchar('0');
}
