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

	while (i < 9)
	{
		print_alphabet();
		i++;
	}
}
