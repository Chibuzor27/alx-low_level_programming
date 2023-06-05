#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function
 * @head: arg
 * @n: arg
 *
 * Return: node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p = NULL;
	listint_t *node = malloc(sizeof(listint_t));

	node->n = n;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}

	p = *head;
	while (p->next != NULL)
	{
		p = p->next;
	}

	p->next = node;

	return (node);
}
