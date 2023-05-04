#include <stdio.h>
#include "main.h"

/**
 * reverse_array - function
 * @a: arg1
 * @n: arg2
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}

