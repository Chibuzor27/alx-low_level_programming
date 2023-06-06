#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function
 * @head: arg
 * @index: arg
 *
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *next = NULL;
	unsigned int i = 0;

	next = head;
	while (i < index)
	{
		if (next == NULL)
		{
			return (NULL);
		}
		i++;
		next = next->next;
	}

	if (next == NULL)
	{
		return (NULL);
	}

	return (next);
}

