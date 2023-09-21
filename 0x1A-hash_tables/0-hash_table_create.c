#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size
 * Return: the pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *t;

	if (size == 0)
		return (NULL);

	t = malloc(sizeof(hash_table_t));
	if (t == NULL)
	{
		return (NULL);
	}

	t->size = size;
	t->array = calloc(size, sizeof(hash_node_t));

	if (t->array == NULL)
	{
		free(t);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		t->array[i] = NULL;

	return (t);
}
