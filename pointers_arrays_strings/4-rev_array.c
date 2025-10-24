#include <stdlib.h>

/**
 * reverse_array - Reverses the content of an array of integers.
 * The function uses a temporary buffer to perform the reversal.
 * @a: A pointer to the array of integers.
 * @n: The number of elements in the array.
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *tmp = malloc(sizeof(int) * n);
	int i = 0;
	int len = n;

	if (tmp == NULL)
	{
		return;
	}

	while (len >= 0)
	{
		len--;
		tmp[i] = a[len];
		i++;
	}

	while (i >= 0)
	{
		a[i] = tmp[i];
		i--;
	}
	free(tmp);
}
