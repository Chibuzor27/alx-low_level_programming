#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_all - function
 * @format: arg
 *
 */
void print_all(const char * const format, ...)
{
	va_list vl;
	int i = 0;

	va_start(vl, format);
	while (*(format + i) != '\0')
	{
		if (*(format + i)  == 'c')
		{
			printf("%c",  va_arg(vl, int));
		}
		else if (*(format + i) == 'i')
		{
			printf("%d", va_arg(vl, int));
		}
		else if (*(format + i) ==  'f')
		{
			printf("%f", va_arg(vl, double));
		}
		else if (*(format + i) == 's')
		{
			char *content = va_arg(vl, char*);

			print_this_string(content);
		}
		else
		{
			i++;
			continue;
		}

		if (*(format + i + 1) != '\0')
		{
			printf(", ");
		}
		i++;
	}
	va_end(vl);
	printf("\n");
}

/**
 * print_this_string - function
 * @content: arg
 *
 */
void print_this_string(char *content)
{
	if (content == NULL)
	{
		printf("%p", content);
	}
	else
	{
		printf("%s", content);
	}
}
