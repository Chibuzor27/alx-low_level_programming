#ifndef variadic_h
#define variadic_h
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_this_string(char *content);

/**
 * struct p - struct
 * @s: arg
 * @f: arg
 */
typedef struct p
{
	char s;
	void (*f)(va_list arg);
} p;

#endif
