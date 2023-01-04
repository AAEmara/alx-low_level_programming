#include "main.h"

/**
* print_alphabet_x10 - Prints the alphabet in lowercase followed by a newline
* 10 times.
*
* Return: No return.
*/
void print_alphabet_x10(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		int c;

		c = 96;

		while (c < 122)
		{
			c++;
			putchar(c);
		}
	}
}
