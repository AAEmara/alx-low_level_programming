#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse, followed by a newline.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	char start = 'z';

	for (; start >= 'a'; start--)
		putchar(start);
	putchar('\n');

	return (0);
}
