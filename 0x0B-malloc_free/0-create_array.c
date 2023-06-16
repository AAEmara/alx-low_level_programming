#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initialize it with
 * a specific character.
 * @size: Unsigned Integer value parameter indicating the size of the array.
 * @c: Character value parameter that the array will be initialized with it.
 *
 * Return: NULL if size is 0 or it fails,
 *	   Address of the Pointer.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = (char *)malloc(sizeof(c) * size);
	
		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{	
			while (i < size)
			{
				arr[i] = c;
				i++;
			}
			return (arr);
		}
	}
}
