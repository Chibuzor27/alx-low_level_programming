#include <stdio.h>
#include "main.h"

/**
 * _strcpy - function
 * @dest: arg1
 * @src: arg2
 *
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';

	return (dest);
}
