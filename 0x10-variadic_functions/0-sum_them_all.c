#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a variadic function.
 *
 * @n: the number if argument
 *
 * Return: 0 if n = 0 else, sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ptr;

	va_start(ptr, n);

	if (!n)
		return (0);

	for (i = 0 ; i < n ; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);
	return (sum);
}
