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
	int b;

	if (argc >= 0)
	{
		if (argv[1] == NULL || argv[2] == NULL)
		{
			printf("Error\n");
			return (1);
		}

		a = get_number(argv[1]);
		b = get_number(argv[2]);

		printf("%d\n", a * b);
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


		n = (n * 10) + (a[i] - 48);
		i++;
	}

	return (n * sign);
}
