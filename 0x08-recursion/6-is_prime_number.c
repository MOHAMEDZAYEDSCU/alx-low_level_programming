#include "main.h"

/**
 * is_prime_number - funciton to print strings
 *
 * Description: no more words to say
 * @n: the reference number.
 *
 * Return: no return for void function.
 */
int prim(int n, int i);

int is_prime_number(int n)
{
	if (n == 2)
		return (1);

	return (prim(n, n / 2));
}

/**
 * prim - funciton to print strings
 *
 * Description: no more words to say
 * @n: the reference number.
 * @i: just the base
 *
 * Return: as i declared in the code
 */

int prim(int n, int i)
{
	if (n < 2)
		return (0);

	else if (i == 1)
		return (1);

	else if (n % i == 0)
		return (0);

	else
		return (prim(n, --i));
}
