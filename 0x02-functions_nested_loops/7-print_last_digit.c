#include "main.h"

/**
 * print_last_digit - this is the only funciton
 *
 * Description: printing lowercase characters
 *@n: an integer added
 * Return: no return for void funciton
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}

	return (n % 10);
}
