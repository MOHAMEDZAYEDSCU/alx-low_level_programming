#include "main.h"

/**
 * _isupper - check character capital or small
 *
 * @c: vaiable character
 *
 * Return: 1 if upper, 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
