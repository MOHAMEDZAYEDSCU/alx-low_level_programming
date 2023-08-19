#include "main.h"

/**
 * print_line - check the code
 * Description: program to print '_'
 * @n: number of _ you want to print
 * Return: no return for htis function.
 *
 */

void print_line(int n)
{
	int i, x = 1;

	if (n < 1)
	{
		putchar('\n');
		x = 0;
	}
	else
	for (i = 0 ; i < n ; i++)
	putchar('_');

	if (x)
	putchar('\n');
}
