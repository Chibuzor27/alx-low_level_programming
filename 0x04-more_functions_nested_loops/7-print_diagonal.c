#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print
 * @n: argg1
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			j = 0;

			while (j < i - 1)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
