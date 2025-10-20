#include "main.h"

/**
 * print_square - Prints a square using the character '#'.
 * @size: The size of the square (both height and width).
 *
 * Description: If size is 0 or less, the function should only print a newline.
 * The square is printed using nested loops and the '#' character.
 * Return: void
 */
void print_square(int size)
{
	int i;
	int j;

	if (size < 1)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
