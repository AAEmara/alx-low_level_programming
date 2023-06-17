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
	/* Checking if the `str` pointer is given a NULL Pointer
	   Before continuing the program
	*/

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		/* Moved the initializations here, so it won't access the
		   `str` pointer when it is pointing to a NULL and cause 
		   Segmentation Fault.
		*/

		int str_size = _strlen(str) + 1;
		char *ptr = (char *)malloc(sizeof(char) * str_size);

		/* Checking if malloc function failed to allocate memory
		   to `ptr` pointer.
		*/

		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			_strcpy(ptr, str);

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

/**
 * _strcpy - Copies a string pointed to by `src` pointer including '\0'
 * to the buffer pointed to by `dest` pointer.a
 * @dest: Pointer that points to a Charcter value (string or array of chars.)
 * that the `src` pointers copies the orginal string to it.
 * @src: Pointer that points to a Character value  (string or array of chars.)
 * that it copies to `dest`.
 *
 * Return: Base address to the array of Charcaters `dest`.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
