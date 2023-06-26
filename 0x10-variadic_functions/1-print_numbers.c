#include "variadic_functions.h"

/**
 * print_numbers - Print numbers, followed by a newline.
 *
 * @separator: Character value that is used to separate between numbers.
 * @n: Unsigned Integer value that represents the number of integers to be
 * printed.
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		if (n - i == 0)
		{
			printf("\n");
		}
		else if (n - i == 1)
		{
			printf("%d\n", x);
		}
		else if (separator == NULL)
		{
			printf("%d", x);
		}
		else
		{
			printf("%d%s", x, separator);
		}
	}
	va_end(args);
}
