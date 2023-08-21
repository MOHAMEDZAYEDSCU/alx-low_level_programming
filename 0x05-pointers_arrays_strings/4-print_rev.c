#include "main.h"

/**
 * print_rev - this is main funciton
 *
 * Description: reverse a specific sentence
 *
 * @s: character for test the funciton
 *
 * Return: no return for void funciton
 */

void print_rev(char *s)
{
	int j, len = strlen(s);

	for (j = len - 1 ; j >= 0 ; j--)
	{
		char *car = s + j;

		printf("%c", *car);
		/*car--;*/
	}
	putchar('\n');
}
