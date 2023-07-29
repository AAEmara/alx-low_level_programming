#include "main.h"

/**
 * _memcpy - Copies memory area.
 *
 * @dest: Pointer to character value, which is the area in memory where the
 * original string is copied to.
 * @src: Pointer to character value, which is the original string to be
 * copied.
 * @n: Unsigned integer value, which is the number of bytes to be copied.
 *
 * Return: Address of the string.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
