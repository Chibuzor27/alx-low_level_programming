#include <stdio.h>
#include "main.h"

/**
 * print_rev - print reverse
 *
 * @s: arg1
 */
void print_rev(char *s)
{
	int size = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		size++;
		i++;
	}

	i = size - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
