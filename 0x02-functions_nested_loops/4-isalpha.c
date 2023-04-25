#include "main.h"

/**
 * _isalpha - indicates lower case characters
 * @c: parameters
 *
 * Return: 1 if true, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c <= 97 + 26 && c >= 97) || (c <= 65 + 26 && c >= 65))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

