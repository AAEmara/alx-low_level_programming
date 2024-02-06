#include "search_algos.h"

/**
 * linear_search - Searches an array of integers for a target value.
 *
 * @array: Pointer to an `integer` list, which represents the first element
 * of an array.
 * @size: `Unsigned Integer` value, which represents the value of the array.
 * @value: `Integer` value to search for as a target value in the given array.
 *
 * Return: -1 if array is NULL or Not Available.
 *	   Index `Unsigned Integer` of the target in value in the array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
