#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 *
 * @s: Pointer to Character value, which is the string to be reversed.
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
