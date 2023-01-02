#include <stdio.h>
#include "main.h"

void print_alphabet(void);

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

/**
* main - Entry point of the program.
*
* @parameter: No parameters are used.
*
* Description: Prints the alphabets in lowercase in ascending order
* by calling the print_alphabet() function.
*
* Return: Always 0 (Success).
*/
int main(void)
{
	print_alphabet();
	return (0);
}
