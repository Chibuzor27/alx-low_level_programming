#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * argstostr - function
 * @ac: arg1
 * @av: arg2
 *
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char *n;
	int i = 1;
	int size, t, j;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i <= ac)
	{
		size = 0;
		while (*(av[i - 1] + size) != '\0')
		{
			size++;
		}
		i++;
		t += size + 1;
	}
	n = malloc(t * sizeof(char));
	if (n == NULL)
	{
		return (NULL);
	}
	i = 1;
	for (j = 0; j < t; j++)
	{
		while (i <= ac)
		{
			size = 0;
			while (*(av[i - 1] + size) != '\0')
			{
				n[j] = *(av[i - 1] + size);
				j++;
				size++;
			}
			n[j++] = '\n';
			i++;
		}
	}
	return (n);
}
