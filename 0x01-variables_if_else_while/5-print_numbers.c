#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 * followed by a newline.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char start = '0';

	for (; start <= '9'; start++)
	{
		putchar(start);
	}
	putchar('\n');

	return (0);
}
