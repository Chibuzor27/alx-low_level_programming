#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - function
 * @head: the head of the linked list
 * @str: the string of the node to be added
 *
 * Return: the head node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n = NULL;
	list_t *p = malloc(sizeof(list_t));

	if (p == NULL)
	{
		return (NULL);
	}

	p->str = strdup(str);
	p->len = _strlen(str);
	p->next = NULL;

	if (*head == NULL)
	{
		*head = p;
	}
	else
	{
		n = *head;
		while (n->next != NULL)
		{
			n = n->next;
		}

		n->next = p;
	}

	return (p);
}

/*
 * _strlen - function
 * @str: arg
 *
 * Return: length
 */
unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}

	return (i);
}
