#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform the operation
 * according to the given character.
 *
 * @s: Pointer to Character value, which represent the operator to be searched
 * for in the list of functions.
 *
 * Return: Address to a function.
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t op[] = {
		     {"+", op_add},
		     {"-", op_sub},
		     {"*", op_mul},
		     {"/", op_div},
		     {"%", op_mod},
		     {NULL, NULL},
	};
	int i = 0;

	while (op[i].op != NULL)
	{
		if (strcmp(op[i].op, s) == 0)
			return (op[i].f);
		i++;
	}

	return (NULL);
}
