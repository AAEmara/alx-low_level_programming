#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer data type.
 *
 * @b: Pointer to a Constant Character value (string literal).
 *
 * Return: 0 if there is one or more chars in the string which aren't 0 or 1.
 *	   0 if the pointer b is pointing to NULL.
 *	   Unsigned Integer that represents the converted number if Succeeded.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, decimal = 0;

	if (b == NULL)
	{
		return (0);
	}
	len = strlen(b) - 1;

	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] == '1')
		{
			decimal += _pow_recursion(2, len);
		}
		else if (b[i] == '0')
		{
			decimal += 0;
		}
		else
		{
			return (0);
		}
		len--;
	}
	return (decimal);
}

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
