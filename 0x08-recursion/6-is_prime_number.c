#include "main.h"

/**
 * is_prime_number - Determines whether a number is prime or not.
 *
 * @n: Integer value, which is evaluated as prime or composite number.
 *
 * Return: 0 if the number is composite
 *	   1 if the number is prime.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % 2 == 0 && n > 2)
	{
		return (0);
	}
	else
	{
		return (trial_division(n, n - 1));
	}
}

/**
 * trial_division - Divides the given number by different numbers recursively.
 *
 * @n: Integer value, to be divided by a smaller number.
 * @m: Integer value, which is used to divide the number given.
 *
 * Return: 0 if the number is composite
 *	   1 if the number is prime.
 */

int trial_division(int n, int m)
{
	if ((n / m * m) != n)
	{
		return (trial_division(n, m - 1));
	}
	else if ((n / m * m) == n && m != 1)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
