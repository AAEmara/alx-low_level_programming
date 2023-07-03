#include "main.h"

/**
 * factorial - Calculates the factorial of a given number and returns it.
 *
 * @n: Integer value to have its factorial calculated.
 *
 * Return: Integer value representing the calculated factorial.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
