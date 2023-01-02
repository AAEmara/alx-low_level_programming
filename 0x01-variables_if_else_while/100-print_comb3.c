#include <stdio.h>

/**
* main - Entry point of the program.
*
* Description: Prints the unique combination of two different numbers.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	int j;

	i = 48;
	j = 49;

	while (i < 57)
	{
		putchar(i);
		putchar(j);
		j++;

		if (i != 56)
		{
			putchar(',');
			putchar(' ');
		}


		if (j > 57)
		{
			i++;
			j = i + 1;
		}
	}

	putchar('\n');
	return (0);
}
