#include<stddef.h>
#include "main.h"

/**
 * _strpbrk - function
 *
 * @s: arg1
 * @accept: arg2
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}

	return (NULL);
}
