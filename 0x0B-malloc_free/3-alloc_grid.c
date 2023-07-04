#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * that are initialized by zeros.
 *
 * @width: Integer value, which is the number of columns of the 2 dimensional
 * array.
 * @height: Integer value, which is the number of rows of the 2 dimensional
 * array.
 *
 * Return: NULL on failure of dynamic allocation
 *	   NULL if width or height are negative or zero
 *	   Address of the Pointer to the 2 dimensional array.
 */

int **alloc_grid(int width, int height)
{
	int **grid = (int **)malloc(sizeof(int *) * (height));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	else if (width <= 0 || height <= 0)
	{
		free(grid);
		return (NULL);
	}
	else
	{
		int i, j;

		for (i = 0; i < height; i++)
		{
			grid[i] = (int *)malloc(sizeof(int) * width);
		}

		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
		return (grid);
	}
}
