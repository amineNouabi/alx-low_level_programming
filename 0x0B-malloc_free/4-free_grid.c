#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid.
 * @grid: 2D array of integers.
 * @height: height of the array.
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (!grid || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
