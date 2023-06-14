#include "main.h"

/**
 * free_grid - frees grid
 * @grid: two-dimensional array
 * @height: column in the array
 *
 * Description: A function that frees a 2-dimensional array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int col;

	for (col = 0; col < height; col++)
	{
		free(grid[col]);
	}

	free(grid);
}
