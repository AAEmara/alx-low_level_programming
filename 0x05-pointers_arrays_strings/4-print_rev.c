#include "main.h"

/**
 * print_rev - Prints a string in a reverse order.
 * @s: Pointer to a Character value.
 *
 * Return: Nothing.
 */

void print_rev(char *s)
{
	int len = _strlen(s);

	for (; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
