#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void fail_98(char *s);
void fail_99(char *s);
void close_fd(int fd);

/**
 * main - function
 * @ac: arg
 * @av: arg
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int i, file_from, file_to, size;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		fail_98(av[1]);

	file_to = open(av[2], O_TRUNC | O_RDWR);
	if (file_to == -1)
	{
		close(file_to);
		file_to = open(av[2], O_CREAT | O_WRONLY, 00600);
	}

	while ((size = read(file_from, &buf, sizeof(buf))) > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (buf[i] == '\0')
				break;

			if (write(file_to, &buf[i], sizeof(char)) < 0)
				fail_99(av[2]);
		}
	}

	if (size < 0)
		fail_98(av[1]);

	close_fd(file_from);
	close_fd(file_to);

	return (0);
}

/**
 * fail_99 - function
 * @s: arg
 *
 * Return: nothing
 */
void fail_99(char *s)
{
	dprintf(2, "Error: Can\'t write to %s\n", s);
	exit(99);
}

/**
 * fail_98 - function
 * @s: arg
 *
 * Return: nothing
 */
void fail_98(char *s)
{
	dprintf(2, "Error: Can\'t read from file %s\n", s);
	exit(98);
}

/**
 * close_fd - function
 * @fd: arg
 *
 * Return: nothing
 */
void close_fd(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(2, "Error: Can\'t close fd %d\n", fd);
		exit(100);
	}
}
