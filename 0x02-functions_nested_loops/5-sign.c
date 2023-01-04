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
		printf("+1\n");
		return (1);
	}

	else if (n == 0)
	{
		printf("00");
		return (0);
	}

	else
	{
		printf("-1");
		return (-1);
	}
}
