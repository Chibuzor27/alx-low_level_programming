#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function
 * @n: arg
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	int sum = 0;

	va_start(vl, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(vl, int);
	}
	va_end(vl);

	return (sum);
}
