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
	if (*n > ULONG_MAX || index >= UINT_MAX)
	{
		return (-1);
	}

	*n = ((1 << index) | *n);
	return (1);
}
