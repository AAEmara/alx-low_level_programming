#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root.
 *
 * @n: Integer value, which is the natural number that the function
 * will calculate its square root.
 *
 * Return: Integer Value as the result of the square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (guess(n, 1));
	}
}

/**
 * guess - Returns the natural square root of a number based on a guess.
 *
 * @n: Integer value, which is the number that the square root is applied on.
 * @m: Integer value, for the guessed number as the natural sqaure root.
 *
 * Return: -1 if there is no natural sqaure root for the given number
 *	   Integer value if there is a natural sqaure root.
 */

int guess(int n, int m)
{
	if (m < 0 || n < m * m)
	{
		return (-1);
	}
	else if (n == m * m)
	{
		return (m);
	}
	else
	{
		return (guess(n, m + 1));
	}
}
