#include "main.h"

/**
 * _islower - this is the only function.
 *
 * Description: funciton to check lower or uppercase
 *@c: integer to make operation
 * Return: no return for void funciton
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
