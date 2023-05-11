#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - function
 * @s: arg1
 */
void _puts_recursion(char *s)
{
	_putchar(*(s + 0));
	if (*(s + 1) == '\0')
	{
		_putchar(*(s + 1));

	}

	_putchar('\n');
}
