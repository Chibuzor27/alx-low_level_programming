#include <stdio.h>
#include "main.h"

/**
 * _strcat - function
 *
 * @dest: arg1
 * @src: arg2
 *
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
		j++;
	}

	i = 0;
	while (*(src + i) != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';

	return (dest);
}
