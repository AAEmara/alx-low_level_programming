#include <stdio.h>

/**
* main - Entry point of the program.
*
* Description: Prints the numbers from 0 to 9.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		printf("%i", i);
		i++;
	}

	putchar('\n');
	return (0);
}
