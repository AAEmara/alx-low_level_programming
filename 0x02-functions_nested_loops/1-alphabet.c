#include "main.h"

/**
 * print_alphabet - Prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0 (Success).
 */

void print_alphabet(void)
{
	char start = 'a';

	for (; start <= 'z'; start++)
	{
		_putchar(start);
	}
	_putchar('\n');
}
