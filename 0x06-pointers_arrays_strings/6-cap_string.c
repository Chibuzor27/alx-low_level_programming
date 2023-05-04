#include <stdio.h>
#include "main.h"

/**
 * cap_string - function
 *
 * @s: arg
 *
 * Return: string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (i != 0 &&
			!(((s[i - 1] >= 48) && (s[i - 1] < 48 + 10)) ||
				((s[i - 1] >= 97) && (s[i - 1] < 97 + 26)) ||
				((s[i - 1] >= 65) && (s[i - i] < 65 + 26))) &&
			s[i] >= 97 &&
			s[i] < 97 + 26)
		{
			s[i] = s[i] - 97 + 65;
		}
		i++;
	}

	return (s);
}

