#include "main.h"

/**
 * print_triangle - Prints a right-angled triangle using the character '#'.
 * @size: The size of the triangle (height and base).
 *
 * Description: If size is 0 or less, the function should only print a newline.
 * The triangle is formed by printing spaces followed by '#' characters.
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size + 1; i++)
	{
		for (j = size; j > i; j--)
		{
			_putchar(' ');
		}

		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
