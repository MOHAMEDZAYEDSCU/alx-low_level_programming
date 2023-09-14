#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>

/**
 * print_strings - a variadic function.
 *
 * @n: the number if argument
 * @separator: for separate between numbers.
 *
 * Return: 0 if n = 0 else, sum of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char* word;

	va_start(ptr, n);

		for (i = 0 ; i < n ; i++)
		{
			word = va_arg(ptr, char*);

			if (word == NULL)
				printf("nil");

			else
				printf("%s", word);

			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
		printf("\n");

}
