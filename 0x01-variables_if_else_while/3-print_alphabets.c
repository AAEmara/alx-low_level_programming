#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all lowercase alphabets, uppercase alphabets followed by 
 * a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i != 'Z'; i++)
	{
		if (i == 'z')
			i = 'A';
		putchar(i);
	}

	putchar('\n');

	return (0);
}
