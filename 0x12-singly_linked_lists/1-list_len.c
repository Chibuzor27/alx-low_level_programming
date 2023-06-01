#include <stdio.h>
#include "lists.h"

/**
 * list_len - function
 * @h: head node
 *
 * Return: list size
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
	{
		return (0);
	}

	return (1 + list_len(h->next));
}
