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
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		_putchar((97 + i));
	}
	putchar('\n');
}
