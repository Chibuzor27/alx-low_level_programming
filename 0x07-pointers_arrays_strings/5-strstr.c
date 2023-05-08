#include <stddef.h>
#include "main.h"

/**
 * _strstr - function
 *
 * @haystack: arg1
 * @needle: arg2
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (*(haystack + i) != '\0')
	{
		j = 0;
		k = i;
		if (haystack[i] == needle[j])
		{
			while (*(needle + j) != '\0')
			{
				if (haystack[k] != needle[j])
				{
					break;
				}
				j++;
				k++;
			}
			if (haystack[k - 1] == needle[j - 1])
			{
				return (haystack + i);
			}
		}
		i++;
	}

	return (NULL);
}
