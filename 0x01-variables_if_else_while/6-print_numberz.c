#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: Prints the numbers from 0 to 9 using putchar function only.
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

	putchar('\n');
	return (0);
}
