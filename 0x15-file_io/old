#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - function
 * @filename: arg
 * @letters: arg
 *
 * Return: size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp = NULL;
	char *s = NULL;
	size_t sum = 0;
	int i = 0;
	char *c = NULL;

	if (letters <= 0 || filename == NULL)
	{
		return (0);
	}

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}

	c = malloc(sizeof(char) * letters);
	if (c == NULL)
	{
		return (0);
	}

	while ((s = fgets(c, letters, fp)) != NULL)
	{
		i = 0;
		while (*(s + i) != '\0')
		{
			if (sum < letters)
			{
				printf("%c", *(s + i));
				sum += 1;
			}
			i++;
		}
	}
	fclose(fp);
	free(c);
	return (sum);
}
