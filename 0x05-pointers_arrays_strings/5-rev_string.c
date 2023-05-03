#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: arg
 */
void rev_string(char *s)
{
	int count = 0;
	int i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}

	i = 0;
	j = count - 1;
	while (i <= j)
	{
		swap((s + i), (s + j));

		i++;
		j--;
	}

}

/**
 * swap - swap chars
 * @s: arg1
 * @c: arg2
 */
void swap(char *s, char *c)
{
	char temp = *s;
	*s = *c;
	*c = temp;
}
