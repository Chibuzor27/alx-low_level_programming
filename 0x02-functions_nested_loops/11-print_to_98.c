#include "main.h"

/**
 * print_to_98 - function name
 * @n: parameters
 */
void print_to_98(int n)
{
	int num, d, i, j;
	char text[256];

	while (n <= 98)
	{
		if (n <= 98)
		{
			num = n;
			i = 0;
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
				while (num != 0)
				{
					d = num % 10;
					num = (num - d) / 10;
					text[i++] = '0' + d;
				}
				for (j = i; j >= 0; j--)
				{
					_putchar(text[j]);
				}
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		n++;
	}
	_putchar('\n');
}
