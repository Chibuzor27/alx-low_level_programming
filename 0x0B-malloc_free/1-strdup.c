#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _strdup - function
 *
 * @str: arg
 *
 * Return: char
 */
char *_strdup(char *str)
{
	char *n;
	int size = 0;
	int j = 0;

	while (*(str + size) != '\0')
	{
		size++;
	}

	n = malloc((size * sizeof(char)) + 1);
	if (n == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j <= size; j++)
		{
			n[j] = str[j];
		}
	}

	return (n);
}
