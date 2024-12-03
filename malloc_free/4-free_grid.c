#include <stdlib.h>

/**
 * free_grid - frees allocated memory
 * @grid: grid
 * @height
 * Return: 
 */

void free_grid(int **grid, int height)
{
	int i;

        if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
