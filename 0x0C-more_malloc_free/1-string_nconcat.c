#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - function
 * @s1: arg1
 * @s2: arg2
 * @n: arg3
 *
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0;
	int size_s1;
	unsigned int j;

	if (s1 != NULL)
	{
		while (*(s1 + i) != '\0')
		{
			size_s1++;
			i++;
		}
	}
	s = malloc((size_s1 + n + 1) * sizeof(int));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	i = 0;
	if (s != NULL)
	{
		while (*(s1 + i) != '\0')
		{
			*(s + i) = *(s1 + i);
			i++;
		}
	}
	while (i <= size_s1 + n)
	{
		j = n - (size_s1 + n - i);
		if (j == n || *(s2 + j) == '\0')
		{
			*(s + i) = '\0';
			return (s);
		}
		*(s + i) = *(s2 + j);
		i++;
	}
	return (s);
}








