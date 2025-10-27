#include "main.h"

/**
 * print_chessboard - Prints a chessboard, represented as an 8x8 array.
 * @a: The 2D array (the chessboard) to be printed. It is an array
 * of 8 arrays of characters.
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
