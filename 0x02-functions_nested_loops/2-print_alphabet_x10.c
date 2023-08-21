#include "main.h"

/**
 * print_alphabet_x10 - this is the only funciton
 *
 * Description: printing lowercase characters
 *
 * Return: no return for void funciton
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0 ; j < 10 ; j++)
	{
		for (i = 0 ; i < 26 ; i++)
		{
			putchar((97 + i));
		}
		putchar('\n');
	}

}
