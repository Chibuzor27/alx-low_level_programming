#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function
 * @s1: arg1
 * @s2: arg2
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *n;
	int i = 0;
	int j;
	int size_1 = 0;
	int size_2 = 0;

	size_1 = get_size(s1);
	size_2 = get_size(s2);

	n = malloc(((size_1 + size_2) * sizeof(char)) + 1);
	if (n == NULL)
	{
		return (NULL);
	}

	if (s1 == NULL)
	{
		n[i] = '\0';
		i++;
	}
	else
	{
		for (i = 0; i < size_1; i++)
		{
			n[i] = s1[i];
		}
	}

	if (s2 == NULL)
	{
		n[i] = '\0';
	}
	else
	{
		for (j = 0; j <= size_2; j++)
		{
			n[i] = s2[j];
			i++;
		}
	}
	return (n);
}

/**
 * get_size - function
 * @s: arg
 *
 * Return: count
 */
int get_size(char *s)
{
	int i = 0;

	if (s != NULL)
	{
		while (*(s + i) != '\0')
		{
			i++;
		}
	}
	return (i);
}
