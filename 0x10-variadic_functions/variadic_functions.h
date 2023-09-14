#ifndef VAR_FUN_H
#define VAR_FUN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * struct print - struct for printing different types
 * @param: format specifier
 * @f: function to print
 */
typedef struct print
{
	char *param;
	void (*f)(va_list);
} print_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
