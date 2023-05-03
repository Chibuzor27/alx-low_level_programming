#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap
 *
 * @a: arg1
 * @b: arg2
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
