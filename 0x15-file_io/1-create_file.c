#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - function
 * @filename: arg
 * @text_content: arg
 *
 * Return: size
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;

	if (filename == NULL || *filename == '\0')
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_TRUNC);
	if (fd == -1)
	{
		fd = open(filename, O_CREAT | O_WRONLY, 00600);
	}

	if (text_content != NULL)
	{
		while (*(text_content + i) != '\0')
		{
			write(fd, (text_content + i), sizeof(char));
			i++;
		}
	}

	close(fd);
	return (1);
}
