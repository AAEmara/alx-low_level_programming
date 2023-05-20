#include <stdio.h>

/**
 * main - Prints all possible combinations of a single-digit numbers,
 * separated by a ',' followed by a space, then followed by a new line.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int start = 48;

	for (; start <= 57; start++)
	{
		putchar(start);

		if ((start >= 48) && (start < 57))
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
