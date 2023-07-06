#include "main.h"

/**
 * _memset - Fills the memory with a constant byte.
 *
 * @s: Pointer to character value, which is the dynamically allocated space
 * in the memory.
 * @b: Character value which represents the value that fills the dynamically
 * allocated memory.
 * @n: Unsigned integer value which represents the number of bytes from the
 * memory to be filled by the constant byte.
 *
 * Return: Address of the string.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
