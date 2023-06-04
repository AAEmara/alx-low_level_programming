#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer that points to an integer value.
 * @b: Pointer that points to an integer value.
 *
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
