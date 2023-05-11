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
	if (n == 1 || n == 0)
	{
		return (1);
	}

	if (is_prime_number(n - 1))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
