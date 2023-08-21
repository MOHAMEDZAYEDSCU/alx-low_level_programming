#include "main.h"

/**
 * print_sign - this is the only function.
 *
 * Description: funciton to check positive or not
 * @n: integer to make operation
 *
 * Return: no return for void funciton
 */

int print_sign(int n)
{

	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
