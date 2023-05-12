#include <stdio.h>
#include <stddef.h>

/**
 * main - entry point
 * @argc: arg
 * @argv: arg
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (argc);
}
