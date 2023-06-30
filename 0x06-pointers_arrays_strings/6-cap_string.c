#include "main.h"

/**
 * cap_string - Capitalizes all the words of a string.
 * @str: Pointer to Character value, where the string is going to be
 * capitalized.
 *
 * Description: This function takes a string and capitalizes it, except
 * the following characters (space, '\t', '\n', ',', ';', '.', '!', '?',
 * '"', '(', ')', '{', '}').
 * Return: Address of the string
 */
char *cap_string(char *str)
{
	int i, j;
	char arr_c[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(',
			')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			for (j = 0; arr_c[j] != '\0'; j++)
			{
				if (arr_c[j] == str[i])
				{
					if (str[i + 1] >= 'a' &&
					    str[i + 1] <= 'z')
					{	str[i + 1] -= 32;
					}
				}
			}
		}
	}
	return (str);
}
