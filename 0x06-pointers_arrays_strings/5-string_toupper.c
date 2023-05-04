#include <stdio.h>
#include "main.h"

/**
 * string_toupper - function
 *
 * @s: arg
 *
 * Return: string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (s[i] >= 97 && s[i] < 97 + 26)
		{
			s[i] = s[i] - 97 + 65;
		}
		i++;
	}

	return (s);
}

