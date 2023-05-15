#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * create_array - function
 * @size: arg1
 * @c: arg2
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *s;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size * sizeof(char));
	if (s != NULL)
	{
		s[0] = c;
	}
	else
	{
		return (NULL);
	}

	return (s);
}
