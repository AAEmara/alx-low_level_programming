#include <stdio.h>
#include "main.h"

/**
* print_alphabet - A function that prints alphabets in lowercase format.
*
* @parameters: No parameters are used.
*
* Description: Prints the full sequence of alphabets in their original order
* whenever the print_alphabet() function is invoked.
*
* Return: No Return.
*/
void print_alphabet(void)
{
	int i;

	i = 96;

	while (i < 122)
	{
		i++;
		putchar(i);
	}

	putchar('\n');
	return;
}
