#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - a variadic function.
 *
 * @n: the number if argument
 * @separator: for separate between numbers.
 *
 * Return: 0 if n = 0 else, sum of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	/**
	* if (!n)
	* va_end(ptr);
	*/


		for (i = 0 ; i < n ; i++)
		{
			printf("%d", va_arg(ptr, int));

			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
		printf("\n");

}
