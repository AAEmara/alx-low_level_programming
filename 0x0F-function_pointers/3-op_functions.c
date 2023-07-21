#include "3-calc.h"

/**
 * op_add - Adds two integers.
 *
 * @a: Integer value for the first integer to be added.
 * @b: Integer value for the second integer to be added.
 *
 * Return: Integer value.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers.
 *
 * @a: Integer value for the first integer to be subtracted.
 * @b: Integer value for the second integer to be subtracted.
 *
 * Return: Integer value.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers.
 *
 * @a: Integer value for the first integer to be multiplied.
 * @b: Integer value for the second integer to be multiplied.
 *
 * Return: Integer value.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers.
 *
 * @a: Integer value for the first integer to be divided.
 * @b: Integer value for the second integer to be divided.
 *
 * Return: Integer value.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calculate the modulus of two integers.
 *
 * @a: Integer value for the first integer to be used by modulu operator.
 * @b: Integer value for the second integer to be used by modulu operator.
 *
 * Return: Integer value.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
