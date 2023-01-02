#include <stdio.h>

/**
* main - Entry point of the program.
*
* Description: Prints numbers from [0-9] and lowercase chars from [a-f]
* using base 16 only.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	i = 47;

	while (i < 57)
	{
		i++;
		putchar(i);
	}

	i = 96;

	while (i < 102)
	{
		i++;
		putchar(i);
	}

	putchar('\n');
	return (0);
}
