#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers.
 *
 * @array: Pointer to a list of "Integer" values.
 * @size: "Unsigned Integer" value, which represents the size of the array.
 * @value: "Integer" value, which represents the target to be searched for.
 *
 * Return: -1 if NULL or value not available.
 *	   Index of the target value if found in the given array.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t i = (left + right) / 2;
	size_t i_print;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("%s", "Searching in array:");
		for (i_print = left; i_print < right; i_print++)
			printf(" %d,", array[i_print]);
		printf(" %d\n", array[i_print]);

		if (array[i] == value)
			return (i);
		else if (array[i] < value)
			left = i + 1;
		else
			right = i - 1;
		i = (left + right) / 2;
	}
	return (-1);
}
