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
	unsigned int i = 1;

	if (head == NULL)
	{
		return (NULL);
	}

	next = head->next;
	while (i < index)
	{
		if (next == NULL)
		{
			return (NULL);
		}
		i++;
		next = next->next;
	}

	return (next);
}

