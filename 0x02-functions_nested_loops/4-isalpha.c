#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 * @c: Integer value for the character to be checked in function.
 *
 * Return: 1 if letter or 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) | (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
