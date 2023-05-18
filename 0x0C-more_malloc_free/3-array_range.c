#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - function
 * @min: arg1
 * @max: arg2
 *
 * Return: int
 */
int *array_range(int min, int max)
{
	int *p;
	int sum;
	int i = min;

	if (min > max)
	{
		return (NULL);
	}

	sum = max - min;
	if (sum < 0)
	{
		sum = sum * (-1);
	}
	p = malloc((sum + 1) * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	while (i <= max)
	{
		*(p + i) = i;
		i++;
	}

	return (p);
}

