#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function
 * @head: arg
 * @idx: arg
 * @n: arg
 *
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *previous = NULL;
	listint_t *next = NULL;

	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;

	next = *head;
	while (i < idx)
	{
		if (next == NULL)
		{
			return (NULL);
		}
		i++;
		previous = next;
		next = next->next;
	}

	node->next = next;
	if (previous == NULL)
	{
		*head = node;
	}
	else
	{
		previous->next = node;
	}
	return (node);
}
