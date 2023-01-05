#include "main.h"

/**
* _abs - Converts the given number to its absolute value.
*
* @num: Integer value parameter.
*
* Return: 0 or positive number.
*/
int _abs(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
}
