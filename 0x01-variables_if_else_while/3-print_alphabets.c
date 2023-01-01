#include <stdio.h>

/**
* main - Entry point of the program.
*
* Decscription: Prints the alphabet in lowercase, and uppercase.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	i = 96;

	while (i < 122)
	{
		++i;
		putchar(i);
	}

	i = 64;

	while (i < 90)
	{
		++i;
		putchar(i);
	}

	putchar('\n');
	return (0);
}
