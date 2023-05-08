#include <stdio.h>

/**
 * print_diagsums - function
 *
 * @a: arg1
 * @size: arg2
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int x = 0;
	int dx = 0;

	for (i = 0; i < size; i++)
	{
		x += *(a + ((i * size) + i));
		dx += *(a + ((i * (size - 1)) + (size - 1)));
	}

	printf("%d, %d", x, dx);
	printf("\n");
}
