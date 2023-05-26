#include <stdio.h>
#include <stddef.h>

/**
 * print_name - function
 *
 * @name: arg1
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}

