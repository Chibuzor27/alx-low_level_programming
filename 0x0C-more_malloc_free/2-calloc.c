#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * calloc - function
 * @nmemb: arg1
 * @size: arg2
 *
 * Return: char
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	return (p);
}
