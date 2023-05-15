#include <stdio.h>
#include "main.h"

/**
 * _puts - Entry point
 * @s: arg
 */
void _puts(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}

