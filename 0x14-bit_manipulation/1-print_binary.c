#include <stdio.h>
#include "main.h"

/**
 * print_binary - function
 * @n: arg
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long mul = 1;
	unsigned long diff = n;
	int i = 0;

	if (n == 0 || n == 1)
	{
		_putchar('0' + n);
		return;
	}

	while (n > mul)
	{
		i += 1;
		mul *= 2;
	}

	while (i >= 0)
	{
		if (diff == 0 || (mul > diff && diff < n))
		{
			_putchar('0');
		}
		else if (mul < diff || mul == diff)
		{
			_putchar('1');
			diff -= mul;
		}

		i -= 1;
		mul = (long)(mul * 0.5);

	}
}
