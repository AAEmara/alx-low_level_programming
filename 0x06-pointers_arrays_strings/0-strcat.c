#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer that points to a Character value, where the `src`
 * string should be concatenated to.
 * @src: Pointer that points to a Character value, where it contains
 * the string that should be concatenated to `dest`.
 *
 * Return: Base Address of `dest`.
 */

char *_strcat(char *dest, char *src)
{
	int len_src = _strlen(src);
	int i_dest = _strlen(dest);
	int len_t = len_src + i_dest;
	int i_src = 0;

	for (; i_dest <= len_t; i_dest++)
	{
		dest[i_dest] = src[i_src];
		i_src++;
	}

	dest[i_dest + 1] = '\0';

	return (dest);
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
