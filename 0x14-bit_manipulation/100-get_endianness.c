#include "main.h"

/**
 * get_endianness - Checks the endianess of the machine.
 *
 * Return: 0 (Big Endian)
 *	   1 (Small Endian)
 */

int get_endianness(void)
{
	int i = 1;
	char *c = (char *) &i;

	if (*c == 0)
		return (0);

	else
		return (1);
}
