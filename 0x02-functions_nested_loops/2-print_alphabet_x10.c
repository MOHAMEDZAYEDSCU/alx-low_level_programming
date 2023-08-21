#include "main.h"

/**
 * print_alphabet - this is the only funciton
 *
 * Description: printing lowercase characters
 *
 * Return: no return for void funciton
 */

void print_alphabet(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 26 ; j++)
		{
			putchar((97 + j));
		}

		putchar('\n');
	}
}
