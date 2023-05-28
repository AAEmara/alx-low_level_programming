#include "main.h"

/**
 * _isdigit - Checks for a digit in the range of 0 to 9.
 * @c: Integer value for input to be checked as a digit in the
 * range of 0 to 9.
 *
 * Return: 1 if digit
 *	   0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
