#include "main.h"

/**
* _islower -  A function that checks if the character is lowercase or not.
*
* @c: Entered character to be checked by the function.
*
* Return: Always 0 (Success)
*/
int _islower(int c)
{
	int c;

	if (c > 96 && c <= 122)
	{
		return (1);
	}

	else
		return (0);
}
