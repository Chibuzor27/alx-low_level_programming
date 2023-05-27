#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_numbers - function
 * @separator: arg1
 * @n: arg2
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;

	va_start(vl, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vl, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(vl);


	printf("\n");
}
