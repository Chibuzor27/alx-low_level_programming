#include "main.h"
/**
 * _strspn - function
 *
 * @s: arg1
 * @accept: arg2
 *
 * Return: pointer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int count = 0;

	while (*(s + i) != '\0')
	{
		j = 0;

		while (*(accept + j) != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}

		if (s[i] != accept[j])
		{
			break;
		}
		i++;
	}

	return (count);
}
