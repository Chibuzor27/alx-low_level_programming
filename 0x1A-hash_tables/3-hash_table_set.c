#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - sets a hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 * Return: 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = malloc(sizeof(char) * strlen(key));
	if (value != NULL)
		node->value = malloc(sizeof(char) * strlen(value));
	if (node->key == NULL || ((node->value == NULL) && value != NULL))
	{
		if (node->key != NULL)
			free(node->key);
		if (node->value != NULL)
			free(node->value);
		free(node);
		return (0);
	}
	node->key = strcpy(node->key, key);
	node->next = NULL;
	if (value != NULL)
		node->value = strcpy(node->value, value);
	else
		node->value = NULL;

	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}

	return (1);
}
