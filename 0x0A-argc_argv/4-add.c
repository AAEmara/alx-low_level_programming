#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the result of the addition of two positive integer values.
 * followed by a new line.
 * @argc: Integer value for the count of the arguments passed to the program.
 * @argv: Array of Pointers to Characters (array of strings), which are the
 * passed arguments to the program.
 *
 * Return: 0 for Success
 *	   1 for Error
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	else if (argc >= 3)
	{
		for (i = 1; i <= argc - 1; i++)
		{
			if (*argv[i] >= '0' && *argv[i] <= '9')
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	printf("%d\n", sum);
	return (0);
}
