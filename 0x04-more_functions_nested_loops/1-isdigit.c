#include <stdio.h>
#include "main.h"

/**
 * _isdigit - desc
 * @c: arg1
 *
 * Return: 0,1
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 48 + 10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
