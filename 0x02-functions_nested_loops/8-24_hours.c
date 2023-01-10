#include "main.h"

/**
* jack_bauer - Prints every minute starting from 00:00 to 23:59.
*
* Return: No Return Value.
*/
void jack_bauer(void)
{
	int hour;

	int min;

	hour = 0;
	min = 0;

	while (hour < 24)
	{
		while (min < 60)
		{
			if (min <= 9 && hour <= 9)
				printf("0%d:0%d", hour, min);

			else if (min <= 9 && hour > 9)
				printf("%d:0%d", hour, min);

			else if (min > 9 && hour <= 9)
				printf("0%d:%d");

			else
				printf("%d:%d", hour, min);

			printf("\n");
			min++;
		}
		hour++;
	}
}
