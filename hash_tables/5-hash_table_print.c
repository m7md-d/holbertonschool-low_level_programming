#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_print - Prints a hash table in a format similar to Python dictionaries.
 * @ht: A pointer to the hash table to print.
 *
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	char *sub = "";
	unsigned long int i;
	hash_node_t *tmp;

	putchar('{');
	for(i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while(tmp)
		{
			printf("%s\'%s\': \'%s\'", sub, tmp->key, tmp->value);
			tmp = tmp->next;
			sub = ", ";
		}
	}
	putchar('}');
}
