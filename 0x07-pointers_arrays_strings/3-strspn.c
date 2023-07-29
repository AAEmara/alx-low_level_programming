#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: Pointer to Character value, which represents the string that contains
 * the substring to be counted if it contains the full prefix given.
 * @accept: Pointer to Character value, which represents the prefix
 * to be compared with the substrings of the string given.
 *
 * Return: Unsigned Integer Value for matched prefix characters.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	/**
	 * Handling if any of the pointers is pointing to NULL.
	 */
	if (s == NULL || accept == NULL)
		return (0);

	/**
	 * First For Loop: looping on the string characters.
	 */
	for (i = 0; s[i] != '\0'; i++)
	{
		/**
		 * Second For Loop: looping on the comparison string chars.
		 */
		for (j = 0; accept[j] != '\0'; j++)
		{
			/**
			 * If a character matched count then break.
			 */
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}

		/**
		 * If nothing was found, exit the First For Loop.
		 */
		if (accept[j] == '\0')
			break;
	}

	return (count);
}
