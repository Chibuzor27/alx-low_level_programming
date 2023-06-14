#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - function
 * @filename: arg
 * @letters: arg
 *
 * Return: size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, s;
	size_t sum = 0;
	char *c = NULL;
	int i = 0;

	if (letters <= 0 || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	c = malloc(sizeof(char) * letters);
	if (c == NULL)
		return (0);

	while ((s = read(fd, c, sizeof(char) * letters)) > 0)
	{
		while (*(c + i) != '\0')
		{
			if (sum < letters)
			{
				write(1, (c + i), 1);
				sum += 1;
			}
			i++;
		}
	}

	if (s == -1)
	{
		close(fd);
		return (0);
	}

	close(fd);
	free(c);
	return (sum);
}
