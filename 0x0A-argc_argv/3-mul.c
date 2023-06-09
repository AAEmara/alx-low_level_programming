#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the result of the multiplication of two numbers followed by
 * a new line.
 * @argc: Integer value for the count of the arguments passed to the program.
 * @argv: Array of Pointers to Characters (array of strings), which are the
 * passed arguments to the program.
 *
 * Return: 0 for Success.
 *	   1 for Error.
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
