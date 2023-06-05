#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function
 * @head: arg
 * @index: arg
 *
 * Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *previous = NULL;
	listint_t *next = NULL;

	next = *head;
	while (i < index)
	{
		if (next == NULL)
		{
			return (-1);
		}
		i++;
		next = next->next;
		previous = next;
	}

	if (next == NULL)
	{
		return (-1);
	}

	if (previous != NULL)
	{
		previous->next = next->next;
	}
	free(next);

	return (1);
}
