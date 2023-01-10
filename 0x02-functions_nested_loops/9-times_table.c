#include "main.h"

/**
* times_table - Prints the 9 times table starting from 0 value.
*
* Return: No Return Value.
*/
void times_table(void)
{
	int num;

	int i;

	num = 0;

	while (num <= 9)
	{
		for (i = 0, i <= 9, i++)
		{
			if (num * i == 0)
				printf("%d", num * i);

			else if (num * i <= 9)
				printf(",  %d", num * i);

			else if (num * i > 9)
				printf(", %d", num * i);
		}
		num++;
	}
}
