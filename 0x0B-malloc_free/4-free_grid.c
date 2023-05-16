#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function
 * @grid: arg1
 * @height: height
 *
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid != NULL && height > 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
