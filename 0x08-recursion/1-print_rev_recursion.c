#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - function
 * @s: arg
 */
void _print_rev_recursion(char *s)
{
	if (*(s + 1) != '\0')
	{
		_putchar(*(s + 1));
	}
}

