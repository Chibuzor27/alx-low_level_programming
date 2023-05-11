#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - function
 * @n: arg
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	int b = 1;
	int t = n;
	int m, sq;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 1 || n == 0)
	{
		return (n);
	}

	while (b <= t)
	{
		m = (b + t) / 2;
		sq = m * m;

		if (sq == n)
		{
			return (m);
		}
		else if (sq > n)
		{
			t = m - 1;
		}
		else
		{
			b = m + 1;
		}
	}

	return (-1);
}
