#include "main.h"

/**
 * more_numbers - to print number from 0 to 9
 * Description: no thing elseto write
 * Return: no return for void function
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			if (j > 9)
			putchar('1');

			putchar(j % 10 + '0');
		}
			putchar('\n');
	}
}
