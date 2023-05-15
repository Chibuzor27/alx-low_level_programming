#include <stdio.h>
#include "main.h"

/**
 * _strncat - function
 *
 * @dest: arg1
 * @src: arg2
 * @n: arg3
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
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

		if (i >= n)
		{
			break;
		}
	}
	dest[j] = '\0';

	return (dest);
}
