#include "main.h"

/**
 * print_last_digit - this is the only funciton
 *
 * Description: printing lowercase characters
 *
 * @n: an integer added
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;

	x = n % 10 ;

	if (x < 0)
		x = -x;
	
	_putchar(x + '0');

	return (x);
}
