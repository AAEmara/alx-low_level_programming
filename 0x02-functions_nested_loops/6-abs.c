#include "main.h"

/**
 * _abs - Computes the absolute value of a number and returns it.
 * @num: Integer value of the input to have its absolute value computed.
 *
 * Return: Any +ve number or Zero.
 */

int _abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (-num);
}
