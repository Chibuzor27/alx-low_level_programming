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

	va_start(vl, format);
	while (*(format + i) != '\0')
	{
		switch (*(format + i))
		{
			case 'c': print_char(vl);
				  break;
			case 'i': print_int(vl);
				  break;
			case 'f': print_float(vl);
				  break;
			case 's': print_this_string(vl);
				  break;
			default:
				  i++;
				  continue;
				  break;
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
		return;
	}
	
	printf("%s", content);
}
