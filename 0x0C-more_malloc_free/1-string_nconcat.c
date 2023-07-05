#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: Pointer to character value, which is the first string to be
 * concatenated to.
 * @s2: Pointer to character value, which is the second string to be
 * concatenated after the second string.
 * @n: Unsigned integer value, which is used to idicate the number of
 * characters to be concatenated from the second string to the first
 * string.
 *
 * Return: NULL if malloc fails
 *	   Address of the string value.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = strlen(s1);
	char *str;

	if (n > strlen(s2))
		n = strlen(s2);
	else if (n < strlen(""))
		n = 0;

	str = malloc(sizeof(*s1) * (strlen(s1) + n) + 1);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	if (s1 == NULL)
		s1[0] = '\0';

	if (s2 == NULL)
		s2[0] = '\0';

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}

	for (i = 0; s2[i] != '\0' && i < n; i++)
	{
		str[j] = s2[i];
		j++;
	}
	str[j] = '\0';
	return (str);
}
