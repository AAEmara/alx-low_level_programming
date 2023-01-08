#include "main.h"

/**
* print_to_98 - Prints all natural numbers from given integer number to 98. 
*
* @n: Integer Type parameter used by print_to_98 function to start counting.
*
* Return: No Return Value.
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n != 98)
		{
			printf("%d", n);
			n++;
		}
		printf("%d", n);
	}

	else
	{
		while (n != 98)
		{
			printf("%d", n);
			n--;
		}
		printf("%d", n);
	}
}
