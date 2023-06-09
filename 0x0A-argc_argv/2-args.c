#include <stdio.h>

/**
 * main - Print every argument given to the program.
 * @argc: Integer value for the count of the arguments passed to the program.
 * @argv: Array of Pointers to Characters (array of strings), which are the
 * passed arguments to the program.
 *
 * Return: 0 for Success.
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
