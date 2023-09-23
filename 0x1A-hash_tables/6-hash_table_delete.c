#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - function
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	long int i;
	hash_node_t *current = NULL;
	hash_node_t *next = NULL;

	if (ht != NULL)
	{
		for (i = ht->size - 1; i >= 0; i--)
		{
			if (ht->array[i] != NULL)
			{
				free(ht->array[i]->key);
				if (ht->array[i]->value != NULL)
					free(ht->array[i]->value);

				if (ht->array[i]->next != NULL)
				{
					current = ht->array[i]->next;
					free(current->key);
					if (current->value != NULL)
						free(current->value);
					next = current->next;
					while (next != NULL)
					{
						current = next;
						next = current->next;
						free(current->key);
						if (current->value != NULL)
							free(current->value);
						free(current);
					}
					free(ht->array[i]->next);
				}
				current = NULL;
				next = NULL;
			}
			free(ht->array[i]);
		}
		free(ht->array);
		free(ht);
	}
}
