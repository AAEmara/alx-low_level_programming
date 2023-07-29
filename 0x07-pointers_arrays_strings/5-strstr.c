#include "main.h"

/**
 * _strstr - Locates a substring.
 *
 * @haystack: Pointer to a character value, represents the string to be
 * compared to the needle.
 * @needle: Pointer to a character value.
 *
 * Return: Address to the located substring.
 *	   NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, count = 0;
	int needle_len = strlen(needle);

	/**
	 * Checking if any of the pointers is NULL.
	 */
	if (haystack == NULL || needle == NULL)
		return (NULL);

	/**
	 * First For Loop on haystack string's characters.
	 */
	for (i = 0; haystack[i] != '\0'; i++)
	{
		/**
		 * Second For Loop on needle string's characters.
		 */
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] != needle[j])
			{
				count = 0;
				break;
			}
			else
			{
				count++;
				i++;
			}
		}

		/**
		 * If the matching characters equals needle's length:
		 * Return the address from the matching point.
		 */
		if (count == needle_len)
			return (haystack + i - count);
	}
	return (NULL);
}
