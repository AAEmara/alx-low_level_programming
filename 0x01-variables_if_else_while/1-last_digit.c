#include <stdlib.h>
#include <time.h>

/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
* main - Entry point of the program
*
* Description: Prints the last digit of an integer.
*
* Return: Always (0) (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int digit = n % 10;

	/* your code goes there */

	if (digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);

	else if (digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, digit);

	else if (digit > 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n"\
		, n, digit);

	return (0);
}
