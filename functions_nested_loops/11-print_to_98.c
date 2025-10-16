#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @x: The starting number.
 *
 * Return: void
 */
void print_to_98(int x)
{
	if (x > 98)
	{
		while (x > 98)
		{
			printf("%d, ", x);
			x -= 1;
		}
	}
	else if (x < 98)
	{
		while (x < 98)
		{
			printf("%d, ", x);
			x += 1;
		}
	}
	printf("98\n");
}
