#include <stdio.h>
#include "main.h"

/**
 * _strlen - string length
 *
 * @s: arg
 *
 * Return: always 0
 */
int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
