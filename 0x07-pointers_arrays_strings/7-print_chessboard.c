#include "main.h"

/**
 * print_chessboard - funciton to return the address of an array
 *
 * @a: pointer to the first one.
 *
 * Return: no return for void function
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0 ; i < 8 ; i++)
	{
		for (j = 0 ; j < 8 ; j++)
		{
			printf("%c", a[i][j]);
		}
		putchar('\n');
	}
}
