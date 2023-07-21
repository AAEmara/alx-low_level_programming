#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 *
 * @array: Pointer to integer value, which represents array of integers.
 * @size: Integer value, represents the size of an array of integers.
 * @cmp: Pointer to function value, that is used to compare the integer
 * values of the given array.
 *
 * Return: Integer value for the Index of the element in the array
 *	   -1 (If it doesn't match or size is less than or equal 0)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	else if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
				return (i);
		}
	}
	return (-1);
}
