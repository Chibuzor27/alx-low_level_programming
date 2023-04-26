#include "main.h"

/**
 * print_last_digit - function name
 * @n: parameters
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int result = n % 10;

	if (result < 0)
	{
		result = result * -1;
	}

	_putchar('0' + result);
	return (result);
}

