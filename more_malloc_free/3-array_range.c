#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * The array contains all the values from min (included) to max (included),
 * ordered from min to max.
 * @min: The first value (starting integer).
 * @max: The last value (ending integer).
 *
 * Return: A pointer to the newly created array, or NULL if min > max
 * or if malloc fails.
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(((max - min) + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < ((max - min) + 1); i++)
	{
		p[i] = 0;
	}

	for (i = 0; min <= max; i++, min++)
	{
		p[i] = min;
	}

	return (p);
}
