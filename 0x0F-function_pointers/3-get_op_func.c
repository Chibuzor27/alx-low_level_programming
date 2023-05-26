#include <stdio.h>

/**
 * get_op_function - function
 * @s: function name
 * 
 * Return: interger
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{'+', op_add},
		{'-', op_sub},
		{'*', op_mul},
		{'/', op_div},
		{'%', op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i <= 5)
	{
		if (ops[i][0] == s)
		{
			return (ops[i][1](a, b));
		}
		i++;
	}

	return (NULL);
}
