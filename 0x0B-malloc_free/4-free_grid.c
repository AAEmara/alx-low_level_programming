#include "main.h"

/**
 * free_grid - Frees a 2 dimensional array created by another
 * function through dynamic allocation.
 *
 * @grid: Pointer to an array of integer values, which is going
 * to be freed by the current function.
 * @height: Integer value that represents the number of rows of
 * the 2 dimensional array.
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
