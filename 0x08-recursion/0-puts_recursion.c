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
		_putchar('\n');
		return;
	}

	_puts_recursion(s + 1);
}
