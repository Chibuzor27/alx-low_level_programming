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

	while (n <= 'z')
	{
		putchar(n);
		n++;
		if (n == 'q' || n == 'e')
		{
			n++;
		}
	}
	putchar('\n');
	return (0);
}
