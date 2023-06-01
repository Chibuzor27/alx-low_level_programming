#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function
 * @head: the head of the linked list
 * @str: the string of the node to be added
 *
 * Return: the head node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p;
	list_t node;
	node.str = strdup(str);
	node.len = _strlen(str);
	p = &node;

	if (*head != NULL)
	{
		node.next = *head;
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
