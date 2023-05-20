#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char start = '0';

	while (start <= '9')
	{
		putchar(start);
		start++;
	}

	start = 'a';
	while (start <= 'f')
	{
		putchar(start);
		start++;
	}
	putchar('\n');

	return (0);
}
