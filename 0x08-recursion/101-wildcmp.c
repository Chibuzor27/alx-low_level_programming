#include <stdio.h>
#include "main.h"

/**
 * wildcmp - function
 * @s1: arg1
 * @s2: arg2
 *
 * Return: 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*(s1 + 0) != '\0')
	{
		if (*(s2 + 0) != '\0')
		{
			return (1);
		}
	}

	return (1);
}
