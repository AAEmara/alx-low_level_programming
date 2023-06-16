#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to the newly allocated memory, where the
 * function copies the string given as a parameter to the newly allocated
 * memory.
 *
 * @str: Pointer to character value where the string wanted to be copied is
 * inserted as a parameter.
 *
 * Return: NULL if the `str` parameter is NULL
 *	   Base address of the duplicated string
 *	   or NULL if there is an insufficient memory for allocation.
 */

char *_strdup(char *str)
{
	int i = 0;
	int str_size = _strlen(str);
	char *ptr = (char *)malloc(sizeof(char) * str_size);

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			while (*(str + i) != '\0')
			{
				*(ptr + i) = *(str + i);
				i++;
			}

			return (ptr);
		}
	}
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
