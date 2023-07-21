#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each element
 * of an array.
 *
 * @array: Pointer to Integer value, which contains an array of elements that
 * the function will execute on it.
 * @size: size_t (unsigned integer value) defined data type, which is the size
 * of the array.
 * @action: Pointer to function value, that takes an integer value and returns
 * nothing.
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
