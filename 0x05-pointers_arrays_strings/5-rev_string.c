#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string.
 * @s: Pointer to a Character value.
 *
 * Return: Nothing.
 */

void rev_string(char *s)
{
	int len = _strlen(s) - 1;
	int stop = (len + 1) / 2;
	int i;
	char tmp;

	for (i = 0; i <= stop; i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		len--;
	}
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
