#include <stdio.h>
#include "main.h"

/**
 * puts_half - print
 * @str: arg
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int i = 0;
	int n = 0;
	int size = 0;

	while (*(str + i) != '\0')
	{
		size++;
		i++;
	}

	if (size % 2 == 0)
	{
		n = size / 2;
	}
	else
	{
		n = (size - 1) / 2;
	}

	while (n <= size - 1)
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}
