#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function
 * @d: arg
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}

