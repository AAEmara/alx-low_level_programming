#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: Integer value for the input to be checked by the function.
 *
 * Return: 1 if uppercase
 *	   0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
