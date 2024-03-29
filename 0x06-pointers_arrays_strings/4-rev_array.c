#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 *
 * @a: Pointer to Integer value, where its array will be reversed.
 * @n: Integer value for the number of elements inside the array.
 *
 * Return: Nothing.
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i <= (n / 2); i++)
	{
		if (n == 0)
			break;
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
