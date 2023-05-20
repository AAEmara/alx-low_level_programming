#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		putchar(start);
		start++;
	}
	putchar('\n');

	return (0);
}
