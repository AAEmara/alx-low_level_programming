#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Interger value for the number of arguments given to the program.
 * @argv: An array of Pointers to Character (array of strings), for the given
 * arguments to the program.
 *
 * Return: 0 for Success.
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
