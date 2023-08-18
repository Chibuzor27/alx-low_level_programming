#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - function
 * @head: arg
 * @n: arg
 *
 * Return: node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *top = NULL;
	dlistint_t *node = NULL;
	int count = 0;

	if (*head != NULL)
	{
		top = *head;
		while (top->prev != NULL)
		{
			count++;
			top = top->prev;
		}
		node = malloc(sizeof(dlistint_t));
		if (node == NULL)
		{
			return (NULL);
		}
		node->n = n;
		node->next = top;
		node->prev = NULL;
		top->prev = node;
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
	top = NULL;
	return (node);
}
