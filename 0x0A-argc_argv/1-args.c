#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program.
 * @argc: Integer value for the count of the arguments passed to the program.
 * @argv: Array of Pointers to Characters (array of strings), which are the 
 * passed arguments to the program.
 *
 * Return: 0 for Success.
 */

int main(int argc,__attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
