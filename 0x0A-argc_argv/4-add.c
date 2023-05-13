#include <stdio.h>

int get_number(char *a);

/**
 * main - entry point
 * @argc: arg
 * @argv: arg
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;
	int i = 1;
	int sum = 0;

	if (argc >= 0)
	{
		if (argv[1] == NULL)
		{
			printf("Error\n");
			return (1);
		}

		while (argv[i] != NULL)
		{
			a = get_number(argv[i]);
			if (a == -1)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += a;
			}

			i++;
		}

		printf("%d\n", sum);
	}
	return (0);
}

/**
 * get_number - function
 * @a: arg
 *
 * Return: 0
 */
int get_number(char *a)
{
	int i = 0;
	int n = 0;
	int sign = 1;

	while (*(a + i) != '\0')
	{
		if (i == 0 && a[i] == '-')
		{
			sign = -1;
			i++;
			continue;
		}

		if (!(a[i] >= 48 && a[i] < 48 + 10))
		{
			return (-1);
		}

		n = (n * 10) + (a[i] - 48);
		i++;
	}

	return (n * sign);
}
