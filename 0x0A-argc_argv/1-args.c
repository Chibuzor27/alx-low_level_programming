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
	int i = 1;
	int count = 0;

	if (argc > 0)
	{
		while (argv[i] != NULL)
		{
			count++;
			i++;
		}
	}
	printf("%d\n", count);

	return (argc);
}
