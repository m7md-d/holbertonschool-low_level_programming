#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers,
 * followed by a new line.
 * @a: The pointer to the first element of the array.
 * @n: The number of elements to be printed.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	if (n <= 0)
	{
		return;
	}

	for (; n > 1; n--, a++)
	{
		printf("%d, ", *a);
	}
	printf("%d\n", *a);
}
