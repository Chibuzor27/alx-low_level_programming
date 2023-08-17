#include<stdio.h>
#include "lists.h"

/**
 * print_dlistint - function
 * @dlistint: arg
 * Return: int
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	dlistint_t node = NULL;

	/*
	if (h != NULL)
	{
		size = 1;
		node = h;
		while (node->prev != NULL)
		{
			node = h->prev;
		}

		printf("%d\n", node->n);
		while (node->next != NULL)
		{
			size++;
			node = h->next;
			printf("%d\n", node->n);
		}
	}
	*/
	return (size);
}
