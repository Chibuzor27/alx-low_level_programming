#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function
 * @head: arg
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int d;
	listint_t *h = NULL;

	if (head == NULL)
	{
		return (0);
	}

	d = (*head)->n;
	h = *head;

	*head = (*head)->next;
	free(h);

	return (d);
}
