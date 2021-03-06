#include "main.h"
/**
 * free_grid - free memory space of a grid
 *
 * @grid: 2-dimensional array
 * @height: rows of matrix
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
