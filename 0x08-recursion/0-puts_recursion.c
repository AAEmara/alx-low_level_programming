#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line in a recursive
 * way.
 *
 * @s: Pointer to Character value, which is the string to be printed.
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		_putchar('\n');
	}
	else
	{
		_putchar(*(s));
		_puts_recursion(s + 1);
	}
}
