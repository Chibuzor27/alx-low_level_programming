#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - function
 * @h: arg
 *
 * Return: int
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}

	printf("%d\n", h->n);

	return (1 + print_listint(h->next));
}
