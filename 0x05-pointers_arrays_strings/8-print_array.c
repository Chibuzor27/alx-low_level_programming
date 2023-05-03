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
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
