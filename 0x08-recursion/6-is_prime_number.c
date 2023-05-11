#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - function
 * @n: arg
 *
 * Return: 0
 */
int is_prime_number(int n)
{
	return (is_prime(1, n));
}

/**
 * is_prime - function
 * @i: arg1
 * @n: arg2
 *
 * Return: 0
 */
int is_prime(int i, int n)
{
	if (n <= 1)
	{
		return (0);
	}

	if (i > (n / 2))
	{
		return 1;
	}

	if (n % i == 0 && i != 1 && i != n)
	{
		return 0;
	}

	i++;
	return (is_prime(i, n));
}
