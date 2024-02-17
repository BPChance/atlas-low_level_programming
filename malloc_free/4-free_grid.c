#include "main.h"
/**
 * free_grid - entry point
 * @grid: pointer to grid
 * @height: the number of rows in the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
