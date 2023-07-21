#include "3-calc.h"

/**
 * main - Calculates an operation between two operands.
 *
 * @argc: Integer value for the number of arguments given to the program.
 * @argv: Pointer to an array of strings, which represents the inputs from
 * the user
 *
 * Return: 0 (Success)
 *	   98 if Number of Arguments Exceeded.
 *	   99 if the operator given is not in the list.
 *	   100 if the denominator is 0 (for '%' and '/' operators only!)
 */

int main(int argc, char **argv)
{
	int a, b, result;
	char *op = argv[2];
	int (*op_ptr)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*op == '%' || *op == '/') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	op_ptr = get_op_func(op);

	if (op_ptr == NULL)
	{
		printf("Error\n");
		return (99);
	}
	result = op_ptr(a, b);
	printf("%d\n", result);
	return (0);
}
