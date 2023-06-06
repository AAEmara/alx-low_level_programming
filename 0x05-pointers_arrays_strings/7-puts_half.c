#include "main.h"

/**
 * puts_half - Prints half of the string provided, followed by a newline.
 * @str: Pointer that points to a Character value (Character array).
 *
 * Return: Nothing.
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int i;

	/* Taking into consideration the even string length */
	if (len % 2 == 0)
	{
		i = len / 2;

		for (; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	/* Taking into consideration the odd string length */
	else if (len % 2 == 1)
	{
		i = ((len - 1) / 2) + 1;

		for (; i < len; i++)
		{
			_putchar(str[i]);
		}
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
