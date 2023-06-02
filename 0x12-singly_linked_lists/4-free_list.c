#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - function
 * @head: head node
 */
void free_list(list_t *head)
{
	list_t *c = NULL;
	list_t *n = NULL;

	if (head != NULL)
	{
		n = head;
		while (n->next != NULL)
		{
			c = n;
			n = n->next;
			free(c->str);
			free(c);
		}
		free(n->str);
		free(n);
	}
}
