#include <stdio.h>
#include "main.h"

/**
 * more_numbers - main
 *
 */
void more_numbers(void)
{
	int i, j, mod;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			mod = j % 10;

			if (j > 9)
			{
				_putchar('0' + 1);
			}
			_putchar('0' + mod);
		}
		_putchar('\n');
	}
}
