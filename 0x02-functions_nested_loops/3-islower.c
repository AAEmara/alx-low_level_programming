#include "main.h"

/**
 * _islower - Checks if the input character is lowercase or not.
 *
 * @c: Integer value of the character used to be checked in function.
 *
 * Return: 1 if lowercase and 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
