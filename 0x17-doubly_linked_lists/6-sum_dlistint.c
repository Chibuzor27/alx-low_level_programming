#include<stdio.h>
#include "lists.h"

/**
 * sum_dlistint - function
 * @head: arg
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *node;
	size_t sum = 0;

	if (head != NULL)
	{
		node = head;
		while (node->prev != NULL)
		{
			node = node->prev;
		}

		while (node->next != NULL)
		{
			sum += node->n;
			node = node->next;
		}
		sum += node->n;
	}
	node = NULL;
	return (sum);
}
