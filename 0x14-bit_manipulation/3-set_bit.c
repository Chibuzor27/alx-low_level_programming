#include "main.h"
#include <limits.h>

/**
 * set_bit - function
 * @n: arg
 * @index: arg
 *
 * Return: value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int next = *n;

	if (*n > ULONG_MAX || index >= UINT_MAX)
	{
		return (-1);
	}

	while (next > 0)
	{
		next >>= 1;
		i++;
	}

	if (index > i)
	{
		return (-1);
	}

	*n = ((1 << index) | *n);
	return (*n);
}
