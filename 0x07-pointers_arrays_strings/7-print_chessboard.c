#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 *
 * @a: Pointer to an array of 8 character.
 *
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j == 0 && i != 1)
				_putchar(a[i][j]);

			else
				_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
