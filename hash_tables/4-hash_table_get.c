#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves the value associated with a key in a hash table.
 * @ht: A pointer to the hash table structure.
 * @key: The key string to look up.
 *
 * Return: The value associated with the element
 * , or NULL if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int i;

	if (ht == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[i];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
