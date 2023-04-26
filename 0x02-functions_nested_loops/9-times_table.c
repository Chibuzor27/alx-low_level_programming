#include "main.h"

/**
 * times_table - function name
 *
 * Return: 0
 */
void times_table(void)
{
	int row;
	int col;
	int mul;
	int d1;
	int d2;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col ++)
		{
			mul = row * col;
			if (mul <= 0)
			{
				_putchar('0' + mul);
				if (col < 9 )
				{
					_putchar(',');
					_putchar(' ');
				}
				
				if ((((col + 1) * row) < 10) && (col < 9))
				{
					_putchar(' ');
				}
			}
			else
			{
				d2 = mul % 10;
				d1 = (mul - d2) / 10;
				if (mul < 10)
				{
					_putchar('0' + d2);
					if (col < 9)
					{
						_putchar(',');
						_putchar(' ');
					}
					
					if ((((col + 1) * row) < 10) && (col < 9))
					{
						_putchar(' ');
					}
				}
				else
				{
					_putchar('0' + d1);
					_putchar('0' + d2);
					if (col < 9)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
		}
		_putchar('\n');
	}
}
