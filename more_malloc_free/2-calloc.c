#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of elements.
 * The memory is set to zero, similar to the standard calloc.
 * @nmemb: The number of elements in the array.
 * @size: The size (in bytes) of each element.
 *
 * Return: A pointer to the allocated memory, or NULL if nmemb or size is 0
 * or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb < 1 || size < 1)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}
