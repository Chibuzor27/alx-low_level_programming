#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - function
 * @head: arg
 * @n: arg
 *
 * Return: node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *bottom = NULL;
	dlistint_t *node = NULL;

	if (*head != NULL)
	{
		bottom = *head;
		while (bottom->next != NULL)
		{
			bottom = bottom->next;
		}

		node = malloc(sizeof(dlistint_t));
		if (node == NULL)
		{
			return (NULL);
		}
		node->n = n;
		node->prev = bottom;
		bottom->next = node;
	}
	else
	{
		node = malloc(sizeof(dlistint_t));
		if (node == NULL)
		{
			return (NULL);
		}
		node->n = n;
		*head = node;
	}
	bottom = NULL;
	return (node);
}
