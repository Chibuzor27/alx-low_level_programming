#include "main.h"

/**
 * _islower - indicates lower case characters
 * c: parameters
 *
 * Return: 1 if true, 0 otherwise
 */
int _islower(int c)
{
	if (c <= 97 + 26 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

