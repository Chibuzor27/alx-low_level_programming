#include <stdio.h>
#include "main.h"

/**
 * _strncpy - function
 *
 * @dest: arg1
 * @src: arg2
 * @n: arg3
 *
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(dest + 1) != '\0')
	{
		if (i >= n)
		{
			break;
		}

		*(dest + i) = src[i];

		i++;
	}

	return (dest);
}
