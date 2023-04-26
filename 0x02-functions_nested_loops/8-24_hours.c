#include "main.h"

/**
 * jack_bauer - function name
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int i;
	int j;
	int digit;
	int tens;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar('0' + i);
			}
			else
			{
				digit = i % 10;
				tens = (i - digit) / 10;
				_putchar('0' + tens);
				_putchar('0' + digit);
			}
			_putchar(':');
			if (j < 10)
			{
				_putchar('0');
				_putchar('0' + j);
			}
			else
			{
				digit = j % 10;
				tens = (j - digit) / 10;
				_putchar('0' + tens);
				_putchar('0' + digit);
			}
			_putchar('\n');
		}
	}
}
