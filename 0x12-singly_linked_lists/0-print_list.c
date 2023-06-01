#include <stdio.h>
#include "lists.h"

/**
 * print_list - function
 * @h: head node
 *
 * Return: list size
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}

	if (h->str == NULL)
	{
		printf("[0] %p\n", h->str);
	}
	else
	{
		i = 0;
		while (*((h->str) + i) != '\0')
		{
			i++;
		}
		printf("[%d] %s\n", i, h->str);
	}

	return (1 + print_list(h->next));
}
