#include "main.h"

/**
 * leet - Encodes the given string into 1377.
 *
 * @str: Pointer to Character value string.
 *
 * Return: Address of the string.
 */
char *leet(char *str)
{
	int i, j;
	char leet[] = {'a', '4', 'A', '4',
		      'e', '3', 'E', '3',
		      'o', '0', 'O', '0',
		      't', '7', 'T', '7',
		      'l', '1', 'L', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (str[i] == leet[j])
			{
				str[i] = leet[j + 1];
				break;
			}
		}
	}
	return (str);
}
