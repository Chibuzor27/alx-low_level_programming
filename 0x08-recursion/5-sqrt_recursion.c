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
	if (n < 0)
	{
		return (-1);
	}

	if (n == 1 || n == 0)
	{
		return (n);
	}

	return (sqt(2, n));
}

/**
 * sqt - function
 * @i: arg1
 * @n: arg2
 *
 * Return: 0
 */
int sqt(int i, int n)
{
	if (i == 1 || i == 0)
	{
		return (i);
	}

	if (i * i > n)
	{
		return (-1);
	}

	if (i * i == n)
	{
		return (i);
	}

	i++;
	return (sqt(i, n));
}
