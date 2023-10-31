#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format - data of format
 * @op: format
 * @f: function
 */

typedef struct printTypeStruct

{
	char *type;
	void (*printer)(va_list);
} printTypeStruct;
#endif
