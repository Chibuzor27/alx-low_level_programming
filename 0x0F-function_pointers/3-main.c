#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - function
 * @argc: arg1
 * @argv: arg2
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[3]);
		char *c = argv[2];
		int ans;

		ans = (get_op_func(c))(a, b);
		printf("%d\n", ans);
	}

	return (0);
}

