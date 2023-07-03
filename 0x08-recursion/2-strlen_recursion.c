#include "main.h"

/**
 * _strlen_recursion - Counts the length of a given string and returns it.
 *
 * @s: Pointer to Character value, which is the string to have its length
 * counted.
 *
 * Return: Length of the given string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
