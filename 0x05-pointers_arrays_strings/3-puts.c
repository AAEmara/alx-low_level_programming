#include "main.h"

/**
 * _puts - Prints a string followed by a newline.
 * @str: Pointer to a Character value.
 *
 * Return: Nothing.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
