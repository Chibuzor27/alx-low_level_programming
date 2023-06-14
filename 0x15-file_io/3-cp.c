#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

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
	int file_from, file_to, size;
	char buf[1024];
	char *s = NULL;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(1, "Can\'t read from file %s\n", av[1]);
		exit(98);
	}

	file_to = open(av[2], O_TRUNC | O_RDWR);
	if (file_to == -1)
	{
		file_to = open(av[2], O_CREAT, 00664);
		fail_99(av[2]);
	}

	while ((size = read(file_from, s, sizeof(buf))) > 0)
	{
		if (write(file_to, s, sizeof(buf)) != 1)
		{
			fail_99(av[2]);
		}
	}

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
	dprintf(1, "Can\'t write to file %s\n", s);
	exit(99);
}

/**
 * close_fd - function
 * @d: arg
 *
 * Return: nothing
 */
void close_fd(int fd)
{
	if (close(fd) <= 0)
	{
		dprintf(1, "Can\'t close fd %d\n", fd);
                exit(100);
	}
}
