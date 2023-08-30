#include "main.h"

/**
 * int factorial(int n) - funciton to print strings
 *
 * Description: no more words to say
 * @n: the reference number
 *
 * Return: no return for void function
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
