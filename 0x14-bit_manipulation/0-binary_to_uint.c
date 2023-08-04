#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned integer.
 *
 * @b: Pointer to a Constant Character Value.
 *
 * Return: Unsigned Integer Value that represents the decimal value
 *	   Zero if there was a character not in [0-9] range.
 */

unsigned int binary_to_uint(const char *b)
{
	int bin_len, i = 0;
	int value = 0;

	if (b == NULL)
		return (0);

	bin_len = _strlen(b) - 1;

	while (b[i] != '\0')
	{
		if (b[i] == '1')
			value += _pow_recursion(2, bin_len) * 1;

		else if (b[i] == '0')
			value += _pow_recursion(2, bin_len) * 0;

		else
			return (0);

		bin_len--;
		i++;
	}

	return (value);
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

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer that points to a Character value.
 *
 * Return: String Length (Always +ve or Zero).
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
