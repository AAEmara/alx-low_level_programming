#include <stdio.h>

/**
* main - Entry point of the program.
*
* Decscription: Prints the alphabet in lowercase (reverse order).
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	i = 122;

	while (i > 96)
	{
		putchar(i);
		--i;
	}

	putchar('\n');
	return (0);
}

