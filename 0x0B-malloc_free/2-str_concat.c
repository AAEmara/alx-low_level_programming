#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: Pointer to character parameter for the first string to be concatenated
 * @s2: Pointer to character parameter for the second string to be
 * concatenated
 *
 * Return: NULL if memory allocation failed
 *	   Address of the pointer to the concatenated strings on success
 */

char *str_concat(char *s1, char *s2)
{
	int concat_len;
	char *str_ptr;
	/**
	 * Must check for s1 if it was passed NULL poitner or not.
	 */
	if (s1 == NULL)
	{
		/**
		 * Treated as an empty string.
		 */
		*s1 = '\0';
	}

	/**
	 * Must check for s2 if it was passed NULL pointer or not.
	 */

	if (s2 == NULL)
	{
		/**
		 * Treated as an empty string.
		 */
		*s2 = '\0';
	}

	concat_len = _strlen(s1) + _strlen(s2) + 2;
	str_ptr = (char *)malloc(sizeof(char) * concat_len);

	if (str_ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		str_ptr = _strcat(str_ptr, s1);
		str_ptr = _strcat(str_ptr, s2);
		return (str_ptr);
	}
}

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

	for (; i_dest <= (len_t - 1); i_dest++)
	{
		dest[i_dest] = src[i_src];
		i_src++;
	}

	dest[i_dest] = '\0';

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
