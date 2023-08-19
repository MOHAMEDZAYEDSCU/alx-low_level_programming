#include "main.h"

/**
 * print_square - this is function
 * Description: for print square of #
 * @size: for the size of square
 * Return: no retrun for void function
 *
 */

void print_square(int size)
{
	int i, j;

	if (size < 1)
		putchar('\n');
	else
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
				putchar('#');
				putchar('\n');
		}
	}
}
