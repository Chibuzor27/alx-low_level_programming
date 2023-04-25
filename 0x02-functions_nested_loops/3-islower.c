#include "main.h"

/**
 * _islower
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

