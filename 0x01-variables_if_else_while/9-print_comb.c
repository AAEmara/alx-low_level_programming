#include <stdio.h>

/**
* main - Entry point of the program.
*
* Description: Prints numbers [0-9] separated by ','.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	i = 48;

	while (i <= 57)
	{
		putchar(i);

		if ( i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	putchar('\n');
	return (0);
}
