#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int start = 48;

	for (; start <= 57; start++)
		putchar(start);
	putchar('\n');

	return (0);
}
