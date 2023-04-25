#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char *word = "_putchar";
	int i = 0;

	while (word[i])
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
