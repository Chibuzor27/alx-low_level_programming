#include "main.h"

void print_reverse(int);

/**
 * print_to_98 - function name
 * @n: parameters
 */
void print_to_98(int n)
{
	int num;

	if (n <= 98)
	{
		while (n <= 98)
		{
			num = n;
			if (n < 0)
			{
				_putchar('-');
				num = num * -1;
			}
			if (n == 0)
			{
				_putchar('0');
			}
			else
			{
				print_reverse(num);
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			print_reverse(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	_putchar('\n');
}

/**
 * print_reverse - print
 *
 * @num:  number
 */
void print_reverse(int num)
{
	int j, d;
	int i = 0;
	char text[256];

	while (num != 0)
	{
		d = num % 10;
		num = (num - d) / 10;
		text[i++] = '0' + d;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(text[j]);
	}
}
