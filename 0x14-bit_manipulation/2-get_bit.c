#include "main.h"
#include <limits.h>

/**
 * get_bit - function
 * @n: arg
 * @index: arg
 *
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int next;
	unsigned int i;

	if (n > ULONG_MAX || index >= UINT_MAX)
	{
		return (-1);
	}

	while (next > 0)
	{
		i++;
		next >>= 1;
	}

	if (index > i)
	{
		return (-1);
	}

	return (((1 << index) & n) != 0);
}
