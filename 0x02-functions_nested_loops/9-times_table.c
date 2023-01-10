#include "main.h"

/**
* times_table - Prints the 9 times table starting from 0 value.
*
* Return: No Return Value.
*/
void times_table(void)
{
	int num;

	num = 0;

	while (num <= 9)
	{
		if (num * 9 == 0)
			printf("%d", num * 9);

		else if (num * 9 <= 9)
			printf(",  %d", num * 9);

		else if (num * 9 > 9)
			printf(", %d", num * 9);
		num++;
	}
}
