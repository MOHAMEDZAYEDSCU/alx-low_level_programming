#include "main.h"

/**
 * _pow_recursion - funciton to print strings
 *
 * Description: no more words to say
 * @x: the reference number.
 * @y: the power of number.
 *
 * Return: no return for void function.
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x , --y));
}
