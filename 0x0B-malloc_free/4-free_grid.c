#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional
 * grid previously created by your alloc_grid function
 * @grid: grid to free the previous
 * @height: height of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int r;

	if (grid == NULL || height <= 0)
		return;

	for (r = 0; r < height; ++r)
		free(grid[r]);
	free(grid);
}
