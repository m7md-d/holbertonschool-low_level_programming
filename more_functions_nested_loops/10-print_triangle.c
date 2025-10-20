#include "main.h"

void print_triangle(int size)
{
	int i, j;

	if (size < 1)
	{
		_putchar('\n');
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
