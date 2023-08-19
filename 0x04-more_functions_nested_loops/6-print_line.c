#include "main.h"

/**
 * print_line - check the code
 * Description: program to print '_'
 * @n: number of _ you want to print
 * Return: Always 0.
 */

void print_line(int n)
{
	int i;

	if (n < 1)
	{
		putchar('\n');
		return (0);
	}
	else
	for (i = 0 ; i < n ; i++)
	putchar('_');
	putchar('\n');
}
