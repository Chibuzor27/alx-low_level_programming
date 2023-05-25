#include <stdio.h>

/**
 * print_name - function
 *
 * @name: arg1
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

