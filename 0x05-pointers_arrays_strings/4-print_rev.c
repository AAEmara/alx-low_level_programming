#include "main.h"

/**
 * print_rev - Prints a string in a reverse order.
 * @s: Pointer to a Character value.
 *
 * Return: Nothing.
 */

void print_rev(char *s)
{
	int len = _strlen(s) - 1;

	for (; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer that points to a Character value.
 *
 * Return: String Length (Always +ve or Zero).
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
