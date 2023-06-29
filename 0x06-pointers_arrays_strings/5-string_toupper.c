#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to
 * uppercase.
 *
 * @str: Pointer to Character value, the string to be converted to
 * uppercase letters.
 *
 * Return: Address of string.
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else
		{
			continue;
		}
	}
	return (str);
}
