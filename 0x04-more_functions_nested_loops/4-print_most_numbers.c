#include "main.h"

/**
 * print_most_numbers - to print number from 0 to 9
 * Description: no thing elseto write
 * Return: no return for void function
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		if (i != 2 && i != 4)
		putchar(i + '0');
	}
	putchar('\n');

}
