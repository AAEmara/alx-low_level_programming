#include "main.h"
#include <math.h>

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
	if (n == 0)
		_putchar('0');
	while (n != 0)
	{
		if (n >= base)
		{
			for (i = 1; base < n; i++)
			{
				base = _pow_recursion(2, i);
			}
			if (n < base)
			{
				i -= 2;
				base = _pow_recursion(2, i);
				n -= base;
			}
			else if (n == base)
			{
				
				n -= base;
			}
			_putchar('1');
		}
		else if (n <= base)
		{
			i -= 1;
			base = _pow_recursion(2, i);
			for (; base > n; i--)
			{
				_putchar('0');
				base = _pow_recursion(2, i - 1);
			}
			_putchar('1');
			n -= base;
			if (n == 0 && i - 1 == 0)
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
