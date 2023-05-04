#include <stdio.h>
#include "main.h"

/**
 * leet - function
 *
 * @s: arg
 *
 * Return: string
 */
char *leet(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = '0' + 4;
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = '0' + 3;
		}
		else if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = '0';
		}
		else if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = '0' + 7;
		}
		else if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = '0' + 1;
		}
		i++;
	}

	return (s);
}

