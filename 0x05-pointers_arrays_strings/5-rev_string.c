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
	int stop = (len) / 2;
	int i;
	char tmp;

	/* Taking into consideration the odd string length */
	if (len % 2 == 0)
	{
		for (i = 0; i <= stop; i++)
		{
			tmp = s[i];
			s[i] = s[len];
			s[len] = tmp;
			len--;
		}
	}
	/* Taking into consideration the even string length */
	else if (len % 2 == 1)
	{
		for (i = 0; i < (stop + 1); i++)
		{
			tmp = s[i];
			s[i] = s[len];
			s[len] = tmp;
			len--;
		}
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
