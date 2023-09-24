#include "hash_tables.h"
#include <stdlib.h>

void free_node(hash_node_t *node);

/**
 * hash_table_delete - function
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	long int i;

	if (ht != NULL)
	{
		for (i = ht->size - 1; i >= 0; i--)
		{
			if (ht->array[i] != NULL)
			{
				free_node(ht->array[i]);
			}
		}
		free(ht->array);
		free(ht);
	}
}

/**
 * free_node - function
 * @node: node
 */
void free_node(hash_node_t *node)
{
	if (node != NULL)
	{
		free(node->key);
		if (node->value != NULL)
			free(node->value);
	}

	if (node->next != NULL)
	{
		free_node(node->next);
	}
	free(node);
}
