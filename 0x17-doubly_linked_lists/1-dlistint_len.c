#include<stdio.h>
#include "lists.h"

/**
 * dlistint_len - function
 * @h: arg
 *
 * Return: size
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node;
	size_t size = 0;

	if (h != NULL)
	{
		node = h;
		while (node->prev != NULL)
		{
			node = node->prev;
		}

		size = 1;
		while (node->next != NULL)
		{
			size++;
			node = node->next;
		}
	}
	node = NULL;
	return (size);
}
