#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - function
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int count = 0;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				if (ht->array[i]->key != NULL)
				{
					if (count > 0)
						printf(", ");
					if (ht->array[i]->value != NULL)
					{
						printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
					}
					else
					{
						printf("'%s': null", ht->array[i]->key);
					}
				}
				count++;
			}
		}
		printf("}\n");
	}
}
