#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_strings - function
 * @separator: arg
 * @n: arg
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vl;
	char *content;

	va_start(vl, n);
	for (i = 0; i < n; i++)
	{
		content = va_arg(vl, char*);

		if (content == NULL)
		{
			printf("%p", content);
		}
		else
		{
			printf("%s", content);
		}

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(vl);

	printf("\n");
}
