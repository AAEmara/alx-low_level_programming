#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success).
 */

void print_alphabet_x10(void)
{
	int i = 1;

	for (; i <= 10; i++)
	{
		char start = 'a';

		for (; start <= 'z'; start++)
		{
			_putchar(start);
		}
		_putchar('\n');
	}
}
