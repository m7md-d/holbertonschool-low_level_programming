#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two main diagonals of the matrix.
 * The matrix is stored as a one-dimensional array.
 * @a: The pointer to the first element of the square matrix.
 * @size: The size of the matrix.
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, x = 0, y = 0;

	for (i = 0, j = 1; i < size; i++, j++)
	{
		x += a[i * (size + 1)];
		y += a[j * (size - 1)];
	}
	printf("%d, %d\n", x, y);
}
