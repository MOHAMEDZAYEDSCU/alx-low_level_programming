#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 *
 * Description: This function checks if a number is positive or not
 * and returns its absolute value.
 *
 * @n: Integer to perform the operation on.
 *
 * Return: The absolute value of the input integer.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
