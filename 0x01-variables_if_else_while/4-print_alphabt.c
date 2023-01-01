#include <stdio.h>

/**
* main - Entry point of the program.
*
* Decscription: Prints the alphabet in lowercase, except 'e' and 'q' chars.
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

		if (i != 101 && i != 113)
			putchar(i);
	}

	putchar('\n');
	return (0);
}
