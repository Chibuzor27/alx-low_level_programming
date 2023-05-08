#include "main.h"

/**
 * _memcpy - function
 *
 * @dest: arg1
 * @src: arg2
 * @n: arg3
 *
 * Return: nothing
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
