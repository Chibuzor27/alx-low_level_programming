#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - function
 * @d: arg
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: %p\n", NULL);
		}

		if (d->age > 0)
		{
			printf("Age: %.1f\n", d->age);
		}
		else
		{
			printf("Age: %1.d\n", 0);
		}

		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: %p\n", NULL);
		}

	}
}
