#include "main.h"

/**
 * print_numbers - to print number from 0 to 9
 * Description: no thing elseto write
 * Return: no return for void function
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
		putchar(i - 48);

	putchar('\n');

}
