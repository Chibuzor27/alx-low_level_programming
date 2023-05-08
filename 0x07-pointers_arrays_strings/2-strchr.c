#include <stddef.h>
#include "main.h"

/**
 * _strchr - function
 * @s: arg1
 * @c: arg2
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (s[i] == c)
		{
			return ((s + i));
		}
		i++;
	}

	return (NULL);
}
