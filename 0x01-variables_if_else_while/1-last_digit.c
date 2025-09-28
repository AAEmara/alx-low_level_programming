#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Determines whether a random number's last digit is
 * bigger than 5, equal to 0, or less than 6 and not equal to 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

	if (digit > 5)
		printf("Last digit of %d is %d and is greater than 5",
			n, digit);
	else if (digit == 0)
		printf("Last digit of %d is %d and is 0", n, digit);
	else if (digit < 6 && digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0",
			n, digit);

	printf("\n");
	return (0);
}
