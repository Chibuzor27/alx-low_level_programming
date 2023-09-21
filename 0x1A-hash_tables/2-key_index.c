#include "hash_tables.h"

/**
 * key_index - function
 * @key: the key
 * @size: the array size
 * Return: int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int hash = hash_djb2(key);
	int index = hash % size;

	return (index);
}
