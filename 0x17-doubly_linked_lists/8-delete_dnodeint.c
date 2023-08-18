#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function
 * @head: arg
 * @index: arg
 *
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	else
	{
		node = *head;
		while (node->prev != NULL)
			node = node->prev;

		for (i = 0; i <= index; i++)
		{
			if (node == NULL)
			{
				return (-1);
			}
			else
			{
				if (i < index)
					node = node->next;
				else if (i == index)
				{
					if (node->next != NULL)
						node->next->prev = node->prev;
					if (node->prev != NULL)
						node->prev->next = node->next;
					free(node);
					return (1);
				}
			}
		}
	}
	return (-1);
}
