#include <stdio.h>
#include "main.h"

/**
 * is_palindrome - function
 * @s: arg
 *
 * Return: 0
 */
int is_palindrome(char *s)
{
	if (*(s + 0) == '\0')
	{
		return (1);
	}

	return (is_palindrome(s + 1));
}
