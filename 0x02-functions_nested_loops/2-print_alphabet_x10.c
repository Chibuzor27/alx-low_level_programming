#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 97 + 26; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
