#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function
 * @head: arg
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *next = NULL;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	sum += head->n;

	next = head->next;
	while (next != NULL)
	{
		sum += next->n;
		next = next->next;
	}

	return (sum);
}
