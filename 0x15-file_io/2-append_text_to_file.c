#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - function
 * @filename: arg
 * @text_content: arg
 *
 * Return: success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;

	if (filename == NULL || *filename == '\0')
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND, S_IWUSR);
	if (fd == -1)
	{
		return (-1);
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
