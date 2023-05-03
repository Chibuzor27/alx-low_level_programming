#include <stdio.h>
#include "main.h"

/**
 * print_array - print
 * @a: arg1
 * @n: arg2
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		d = a[i];
		while (d >= 0)
		{
			t = d % 10;
			d = (d - t) / 10;
		}
	}
	_putchar('\n');
}
