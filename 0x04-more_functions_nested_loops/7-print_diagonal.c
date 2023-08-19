#include "main.h"

/**
 * print_diagonal - check the code
 * Description: program to print '_' diagonlaly
 * @n: number of _ you want to print
 * Return: no return for htis function.
 *
 */

void print_diagonal(int n)
{
	int i, j, x = 1;

	if (n < 1)
	{
		putchar('\n');
		x = 0;
	}
	else
	{
		for (i = 0 ; i < n ; j++)
		{
			for (j = 0 ; i < j ; i++)
			putchar(' ');
			putchar('\\');
			putchar('\n');
		}

	}
}
