#include "main.h"

/**
 * flip_bits - function
 * @n: arg
 * @m: arg
 *
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x > 0)
	{
		if ((x & 1) == 1)
		{
			count += 1;
		}

		x >>= 1;
	}

	return (count);
}
