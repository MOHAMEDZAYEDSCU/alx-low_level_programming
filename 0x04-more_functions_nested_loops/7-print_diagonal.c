#include "main.h"

/**
 * print_diagonal - check the code
 * Description: program to print '_' diagonlaly
 * @n: number of _ you want to print
 * Return: no return for htis function.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n < 1)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < i ; j++)
			putchar(' ');

			putchar('\\');
			putchar('\n');
		}

	}
}
