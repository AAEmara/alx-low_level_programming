#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase (except q and e),
 * followed by a newline.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	char start = 'a';

	for (; start < 'z'; start++)
	{
		if ((start == 'q') | (start == 'e'))
			continue;
		else
			putchar(start);
	}
	putchar('\n');

	return (0);
}
