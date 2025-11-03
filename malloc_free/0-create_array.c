#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it with a
 * specific character.
 * @size: The size of the array to create (unsigned integer).
 * @c: The specific character used for initialization.
 *
 * Return: A pointer to the newly created array, or 0 (NULL) if it fails
 * or if size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return(0);
	}

	p = malloc(sizeof(char) * size);
	
	if (p == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
