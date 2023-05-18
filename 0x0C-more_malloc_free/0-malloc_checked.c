#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function
 * @b: arg
 *
 * Return: pointer;
 */
void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}

	return (s);
}
