#include <stdio.h>
#include "main.h"

void print_fizz_buzz(void);
void print_fizz(void);
void print_buzz(void);

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int i, d;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			print_fizz_buzz();
		}
		else if (i % 3 == 0)
		{
			print_fizz();
		}
		else if (i % 5 == 0)
		{
			print_buzz();
		}
		else
		{
			d = (i - (i % 10)) / 10;
			if (d > 0)
			{
				_putchar('0' + d);
			}
			_putchar('0' + i % 10);
		}
		_putchar(' ');
	}
	_putchar('\n');

	return (0);
}

/**
 * print_fizz_buzz - print
 */
void print_fizz_buzz(void)
{
	_putchar('F');
	_putchar('i');
	_putchar('z');
	_putchar('z');
	_putchar('B');
	_putchar('u');
	_putchar('z');
	_putchar('z');
}

/**
 * print_fizz - print
 */
void print_fizz(void)
{
	_putchar('F');
	_putchar('i');
	_putchar('z');
	_putchar('z');
}

/**
 * print_buzz - print
 */
void print_buzz(void)
{
	_putchar('B');
	_putchar('u');
	_putchar('z');
	_putchar('z');
}
