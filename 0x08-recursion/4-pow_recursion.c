#include "main.h"

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
