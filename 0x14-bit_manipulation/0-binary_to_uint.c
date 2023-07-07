#include <stdio.h>
#include "main.h"

unsigned int _pow(int n, unsigned int p);

/**
 * binary_to_uint - function
 * @b: arg
 *
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0;
	unsigned int i = 0;
	unsigned int sum = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*(b + i) != '\0')
	{
		if (*(b + i) != '1' && *(b + i) != '0')
		{
			return (0);
		}
		sum += 1;
		i++;
	}

	i = 0;
	while (i < sum)
	{
		if (*(b + (sum - 1 - i)) == '1')
		{
			ans += _pow(2, i);
		}
		i++;
	}

	return (ans);
}

/**
 * _pow - function
 * @n: arg
 * @p: arg
 *
 * Return: int
 */
unsigned int _pow(int n, unsigned int p)
{
	unsigned int ans = 1;
	unsigned int i = 1;

	if (p == 0)
	{
		return (1);
	}

	while (i <= p)
	{
		ans *= n;
		i++;
	}

	return (ans);
}
