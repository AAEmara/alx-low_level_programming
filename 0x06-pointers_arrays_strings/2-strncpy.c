#include "main.h"

/**
 * _strncpy - Copies a string with atmost n bytes.
 *
 * @dest: Pointer to character value, indicating the destination that
 * the string will be copied to.
 * @src: Pointer to character value, indicating the orginal string
 * to be copied.
 * @n: Integer value that indicates the number of bytes to be copied from
 * the `src` string.
 *
 * Return: Address of the Pointer to Character `dest`.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
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
