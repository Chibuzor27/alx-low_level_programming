#include <stdio.h>

/**
 * int_index - function
 * @array: arg1
 * @size: arg2
 * @cmp: arg3
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int ans;
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	while (i < size)
	{
		ans = cmp(array[i]);

		if (ans == 1)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
