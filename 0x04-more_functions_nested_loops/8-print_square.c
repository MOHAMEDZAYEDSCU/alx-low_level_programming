#include "main.h"

/**
 * main - check the code
 *@n: for numbers of lines and #
 * Return: no retrun for void function
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
