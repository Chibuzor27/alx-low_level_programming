#include<stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function
 * @head: arg
 * @index: arg
 *
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = NULL;
	unsigned int i = 0;

	if (head != NULL)
	{
		node = head;
		while (node->prev != NULL)
		{
			node = node->prev;
		}

		for (i = 0; i <= index; i++)
		{
			if (node == NULL)
			{
				break;
			}
			else
			{
				if (i < index)
				{
					node = node->next;
				}
				else if (i == index)
				{
					break;
				}
			}
		}
	}
	return (node);
}
