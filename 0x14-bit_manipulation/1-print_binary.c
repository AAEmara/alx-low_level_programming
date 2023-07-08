#include "main.h"

/**
 * print_binary - Prints a binary representation of a given number.
 *
 * @n: Unsigned Long Integer value, which is the given number to be printed
 * as in binary numbering system.
 *
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	unsigned long int base = 1;
	int i;

	for (i = 1; base < n; i++)
	{
		base = _pow_recursion(2, i);
	}
	i--;
	base = _pow_recursion(2, i);

	if (n == 0)
		_putchar('0');
	else if (base > n)
		i--;

	if (n != 0)
	{
		for (; i >= 0; i--)
		{
			if ((n >> i) & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}

/**
 * _pow_recursion - Calculates the power of a number.
 *
 * @x: Integer value, which represents the base.
 * @y: Integer value, which represents the exponent.
 *
 * Return: Integer value for the calculated Power.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
