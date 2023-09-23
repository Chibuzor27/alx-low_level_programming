#include "hash_tables.h"
#include <stddef.h>

/**
 * hast_table_get - function
 * @ht: the hash table
 * @key: the key
 * Return: the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		return (NULL);
	}
	return (ht->array[index]->value);
}	
