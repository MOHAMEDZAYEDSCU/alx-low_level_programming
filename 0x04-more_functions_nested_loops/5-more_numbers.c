#include "main.h"

/**
 * more_numbers - to print number from 0 to 9
 * Description: no thing elseto write
 * Return: no return for void function
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			putchar(j + '0');
		}
		     putchar('\n');
	}

}
