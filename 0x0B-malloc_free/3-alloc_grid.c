#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * alloc_grid - function
 * @width: arg1
 * @height: arg2
 *
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			int x = 0;

			while (x != i)
			{
				free(arr[x]);
				x++;
			}
			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
