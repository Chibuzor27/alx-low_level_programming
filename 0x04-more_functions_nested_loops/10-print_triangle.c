#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print
 * @size: arg1
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			j = 0;
			while (j < size - i)
			{
				_putchar(' ');
				j++;
			}

			j = 0;
			while (j < i)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
		}
	}
}
