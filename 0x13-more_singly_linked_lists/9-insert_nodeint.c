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
	unsigned int i = 1;
	listint_t *previous = NULL;
	listint_t *next = NULL;

	listint_t *node = malloc(sizeof(int));

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;

	previous = *head;
	next = (*head)->next;
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

	previous->next = node;
	node->next = next;
	return (node);
}
