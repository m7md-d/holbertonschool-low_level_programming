#include "hash_tables.h"
#include <stdlib.h>


/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table,
 * or NULL if something went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (!size)
		return (NULL);

	new = malloc(sizeof(hash_table_t));

	if (!new)
		return (NULL);

	new->array = calloc(size, sizeof(hash_node_t *));

	if (!(new->array))
	{
		free(new);
		return (NULL);
	}

	new->size = size;

	return (new);
}
