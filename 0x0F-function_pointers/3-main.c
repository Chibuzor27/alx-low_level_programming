#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: arg1
 * @argv: arg2
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char c = *(argv[2] + 0);
	int ans;

	ans = get_op_func(a, b);
	printf("%d\n", ans);
	return(0);
}

