#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 *
 * Description: Frees all nodes, the array, and the table struct itself.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp, *tmp2;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
				tmp2 = tmp->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);

				tmp = tmp2;
		}
	}
	free(ht->array);
	free(ht);
}
