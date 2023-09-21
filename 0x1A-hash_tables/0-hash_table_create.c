#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size
 * Return: the pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t;

	if (size == 0)
		return (NULL);

	t = malloc(sizeof(hash_table_t));
	if (t == NULL)
	{
		return (NULL);
	}

	return (t);
}
