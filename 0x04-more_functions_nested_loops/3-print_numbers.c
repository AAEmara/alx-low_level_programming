#include "main.h"

/**
 * print_numbers - Prints the numbers in the range of 0 to 9, followed by
 * a new line.
 *
 * Return: Nothing.
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);

	_putchar('\n');
}
