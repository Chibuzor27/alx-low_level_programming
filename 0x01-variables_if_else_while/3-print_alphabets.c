#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 *
 */
int main(void)
{
	char n = 'a';

	while (n != 'Z' + 1)
	{
		putchar(n);
		if (n == 'z')
		{
			n = 'A';
		}
		else
		{
			n++;
		}
	}
	putchar('\n');
	return (0);
}
