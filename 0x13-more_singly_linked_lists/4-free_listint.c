#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function
 * @head: arg
 */
void free_listint(listint_t *head)
{
	listint_t *current = NULL;
	listint_t *next = NULL;

	if (head != NULL)
	{
		current = head;
		while (current->next != NULL)
		{
			next = current->next;
			free(current);
			current = next;
		}
		free(current);
	}
}
