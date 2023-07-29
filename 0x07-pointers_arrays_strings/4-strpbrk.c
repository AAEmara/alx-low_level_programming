#include "main.h"

/**
 * _strpbrk - Searches a string for any set of bytes.
 *
 * @s: Pointer to Character value, which is the strings to be searched
 * inside.
 * @accept: Pointer to a character value, which are the set of bytes
 * to be compared with.
 *
 * Return: Address of the first byte to be found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	if (s == NULL || accept == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
