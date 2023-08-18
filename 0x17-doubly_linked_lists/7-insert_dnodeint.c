#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function
 * @h: arg
 * @idx: arg
 * @n: arg
 *
 * Return: node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = NULL;
	dlistint_t *new_node = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (*h == NULL)
		*h = new_node;
	else
	{
		node = *h;
		while (node->prev != NULL)
			node = node->prev;
		for (i = 0; i <= idx; i++)
		{
			if (node == NULL)
			{
				free(new_node);
				new_node = NULL;
				break;
			}
			else
			{
				if (i < idx)
					node = node->next;
				else if (i == idx)
				{
					new_node->next = node;
					new_node->prev = node->prev;
					if (node->prev != NULL)
						node->prev->next = new_node;
					break;
				}
			}
		}
	}
	return (new_node);
}
