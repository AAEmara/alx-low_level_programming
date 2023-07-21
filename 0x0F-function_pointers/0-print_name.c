#include "function_pointers.h"

/**
 * print_name - Prints the name given by usings a callback function.
 *
 * @name: Pointer to Character value, which represents the name to be printed.
 * @f: Pointer to function value, which takes a string as an input and returns
 * a void value.
 *
 * Return: Nothning.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
