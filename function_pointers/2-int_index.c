#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: The array of integers to be searched.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function used to compare values. This function
 * should return a non-zero value if the element matches the search criteria.
 *
 * Return: The index of the first element for which the cmp function does
 * not return 0, or -1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
