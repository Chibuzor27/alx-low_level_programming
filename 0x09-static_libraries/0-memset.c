#include "main.h"

/**
 * _memset - function
 *
 * @s: arg1
 * @b: arg2
 * @n: arg3
 *
 * Return: nothing
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
