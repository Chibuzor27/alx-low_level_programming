#include <stdio.h>
#include "main.h"

/**
 * _isupper - upper
 * @c: int
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 65 && c < 65 + 26)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
