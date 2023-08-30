#include "main.h"

/**
 * _sqrt_recursion - funciton to print strings
 *
 * Description: no more words to say
 * @n: the reference number.
 *
 * Return: no return for void function.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_test(n, 1));
}

/**
 * _sqrt_test - funciton to print strings
 *
 * Description: no more words to say
 * @a: the reference number.
 * @i: just the base
 *
 * Return: as i declared in the code
 */

int _sqrt_test(int n, int i)
{
	int x = i * i;

	if (x == n)
		return (i);

	else if (x < n)
		return (_sqrt_test(n, ++i));

	else
		return (-1);

}
