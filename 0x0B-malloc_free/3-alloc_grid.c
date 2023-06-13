#include "main.h"

/**
 * alloc_grid - allocates for a grid
 * @width: rows of the array
 * @height: columns of the array
 *
 * Description: A function that allocates space for a two-dimensional array
 *
 * Return: grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int row;
	int col;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (col = 0; col < height; col++)
	{
		grid[col] = malloc(sizeof(int *) * height);

		if (grid[col] == NULL)
		{
			for (row = 0; row < col; row++)
			{
				free(grid[row]);
			}
			free(grid);
			return (NULL);
		}

		for (row = 0; row < width; row++)
		{
			grid [col][row] = 0;
		}
	}

	return (grid);
}
