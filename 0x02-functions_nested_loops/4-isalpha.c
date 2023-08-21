#include "main.h"

/**
 * _isalpha - this is the only function.
 *
 * Description: funciton to check lower or uppercase
 * @c: integer to make operation
 *
 * Return: no return for void funciton
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
