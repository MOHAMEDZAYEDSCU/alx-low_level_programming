#include "main.h"

/**
 * print_line - check the code
 * Description: program to print '_'
 * @n: number of _ you want to print
 * Return: Always 0.
 */

void print_line(int n)
{
	int x, i;

	scanf("%i", &x);
	if (x <= 0)
		putchar('\n');
	else
	for (i = 0 ; i < x ; i++)
	putchar('_')
}
