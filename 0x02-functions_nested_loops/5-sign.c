#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: Integer value of the input to have its sign printed.
 *
 * Return: 1 if +ve, 0 if Zero, and -1 if -ve.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
