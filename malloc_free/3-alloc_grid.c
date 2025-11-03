#include <stdlib.h>

/**
 * alloc_grid - Creates a two-dimensional array of integers.
 * The array is initialized to zero.
 * @width: The width (number of columns) of the grid.
 * @height: The height (number of rows) of the grid.
 *
 * Return: A pointer to the created 2D array, or NULL on failure
 * or if width or height is less than 1.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **grid;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * width);

	for (i = 0; i < height; i++)
		grid[i] = malloc(sizeof(int) * height);
	return (grid);
}
