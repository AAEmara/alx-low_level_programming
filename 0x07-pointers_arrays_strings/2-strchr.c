#include "main.h"

/**
 * _strchr - Locates a character in a string.
 *
 * @s: Pointer to Character value, a string that will be compared to the given
 * character.
 * @c: Character value, that will be used in comparison with the string.
 *
 * Return: Address of the character in the string that matches.
 *	   NULL if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}

	if (*s == '\0' && c == '\0')
		return (s);

	return (NULL);
}
