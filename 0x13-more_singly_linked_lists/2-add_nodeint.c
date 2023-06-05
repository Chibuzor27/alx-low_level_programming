#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function
 * @head: arg
 * @n: arg
 *
 * Return: node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}

	node->next = *head;
	*head = node;

	return (node);
}
