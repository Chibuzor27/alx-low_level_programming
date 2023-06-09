#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - function
 * @array: arg1
 * @size: arg2
 * @action: arg3
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

