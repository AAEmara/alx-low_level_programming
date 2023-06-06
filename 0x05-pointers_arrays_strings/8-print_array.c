#include "main.h"

/**
 * print_array - Prints an array of integers, followed by a new line.
 * @a: Pointer to an Integer value (integer array).
 * @n: Integer value parameter for the number of elements in the `a` array.
 *
 * Return: Nothing.
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (i == 0)
			printf("%d", *(a + i));
		else if (i > 0)
			printf(", %d", *(a + i));
	}

	putchar('\n');
}
