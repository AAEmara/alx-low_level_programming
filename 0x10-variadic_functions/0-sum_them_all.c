#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all of its parameters.
 *
 * @n: Number of parameters to be summed.
 *
 * Return: 0 if n == 0
 *	   else returns Integer Value
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list args;

		unsigned int i;
		int x;
		int sum = 0;

		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			sum += x;
		}
		va_end(args);

		return (sum);
	}
}
