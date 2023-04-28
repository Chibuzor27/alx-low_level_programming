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
				printf("%d", d);
			}
			printf("%d", i % 10);
		}
		if (i < 100)
		{
			printf("%c", ' ');
		}
	}
	printf("\n");

	return (0);
}

/**
 * print_fizz_buzz - print
 */
void print_fizz_buzz(void)
{
	printf("FizzBuzz");
}

/**
 * print_fizz - print
 */
void print_fizz(void)
{
	printf("Fizz");
}

/**
 * print_buzz - print
 */
void print_buzz(void)
{
	printf("Buzz");
}
