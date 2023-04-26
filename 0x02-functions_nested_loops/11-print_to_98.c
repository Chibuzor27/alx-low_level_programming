#include "main.h"

/**
 * print_to_98 - function name
 * @n: parameters
 *
 * Return: 0
 */
int print_to_98(int n)
{
	while (n <= 98)
	{
		if (n < 98)
		{
			num = n;
			if (n < 0)
			{
				_putchar('-');
				num = num * -1;
			}

			text = "";
			i = 0;

			while (num != 0)
			{
				d = num % 10;
				num = (num - d) / 10;
				text[++i] = '0' + d;
			}

			for (j = 0; j <= i; i++)
			{
				_putchar(text[j]);
			}

			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	return (0);
}

