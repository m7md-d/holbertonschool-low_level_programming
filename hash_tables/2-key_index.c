#include "hash_tables.h"

/**
 * key_index - Calculates the index at which a key/value pair
 * should be stored in an array of a hash table.
 * @key: The key string to get the index for.
 * @size: The size of the array of the hash table.
 *
 * Return: The index where the key should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key) % size;
	return (i);
}
