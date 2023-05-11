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
	int d;
	if (*(s + 0) == '\0')
	{
		return (1);
	}

	d = depth(s);

	return (palindrome(s, d, 0));
}

/**
 * palindrome - function
 * @s: arg1
 * @depth: arg2
 * @i: arg3
 *
 * Return:0
 */
int palindrome(char *s, int depth, int i)
{
	int end = depth - 1 - i;

	if (depth == 1 || i == end)
	{
		return (1);
	}

	if (*(s + i) == *(s + end))
	{
		if (i + 1 == end)
		{
			return (1);
		}
		return (palindrome(s, depth, i + 1));
	}

	return (0);
}

/**
 * depth - function
 * @s: arg
 */
int depth(char *s)
{
	if (*(s  + 0) == '\0')
	{
		return (0);
	}
	return (1 + depth(s + 1));
}

