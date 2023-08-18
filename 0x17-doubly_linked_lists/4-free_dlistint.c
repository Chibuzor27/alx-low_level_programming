#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - function
 * @head: arg
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;
	dlistint_t *next = NULL;

	if (head != NULL)
	{
		current = head->next;
		head->next = NULL;
		while (current != NULL)
		{
			next = current->next;
			free(current);
			current = next;
		}

		current = head->prev;
		head->prev = NULL;
		while (current != NULL)
		{
			next = current->prev;
			free(current);
			current = next;
		}

		free(head);
	}
	current = NULL;
	next = NULL;
}
