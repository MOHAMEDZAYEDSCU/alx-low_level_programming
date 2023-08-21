#include "main.h"

/**
 * swap_int - this is main funciton
 *
 * Description: reset the value to 98
 *
 * @a: the first value
 * @b: the second value
 *
 * Return: no return for void funciton
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
