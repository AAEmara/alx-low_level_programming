#include "main.h"

/**
* print_sign - Prints the sign of the given number.
*
* @n: Integer type parameter that will be checked by print_sign function.
*
* Return: returns 0 or 1 or -1.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		putchar('0');
		return (0);
	}

	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
}
