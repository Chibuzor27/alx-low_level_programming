#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function
 * @head: arg
 */
void free_listint2(listint_t **head)
{
	listint_t *current = NULL;
	listint_t *next = NULL;

	if (head != NULL)
	{
		current = *head;
		while (current->next != NULL)
		{
			next = current->next;
			free(current);
			current = NULL;
			current = next;
		}
		free(current);

		*head = NULL;
	}
}
