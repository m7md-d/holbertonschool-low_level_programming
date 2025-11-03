#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid.
 * @grid: The address of the two dimensional grid.
 * @height: The height of the grid (rows).
 *
 * Description: This function iterates through and frees the memory
 * for each row pointer first, then frees the main grid pointer.
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
