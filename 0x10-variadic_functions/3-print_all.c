#include <stdio.h>
#include <stdarg.h>

void print_char(va_list vl);
void print_int(va_list vl);
void print_float(va_list vl);
void print_this_string(va_list vl);

typedef struct p
{
	char s;
	void (*f)(va_list arg);
} p;

/**
 * printf_all - print
 * @format: arg
 */
void print_all(const char * const format, ...)
{
	va_list vl;
	int i = 0;
	int j;

	p func[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_this_string}
	};

	va_start(vl, format);
	while (*(format + i) != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (func[j].s == *(format + i))
			{
				func[j].f(vl);
				if (*(format + i + 1) != '\0')
				{
					printf(", ");
				}
			}
			j++;
		}
		i++;
	}
	va_end(vl);
	printf("\n");
}

/**
 * print_char - function
 * @vl: arg
 */
void print_char(va_list vl)
{
	printf("%c", va_arg(vl, int));
}

/**
 * print_int - function
 * @vl: arg
 */
void print_int(va_list vl)
{
	printf("%d", va_arg(vl, int));
}

/**
 * print_float - function
 * @vl: arg
 */
void print_float(va_list vl)
{
	printf("%f", va_arg(vl, double));
}

/**
 * print_this_string - function
 * @vl: arg
 */
void print_this_string(va_list vl)
{
	char *content = va_arg(vl, char*);
	if (content == NULL)
	{
		printf("%p", content);
	}
	else
	{
		printf("%s", content);
	}
}
