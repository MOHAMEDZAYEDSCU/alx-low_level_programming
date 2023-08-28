#include "main.h"

/**
 * _memset - funciton to return the address of an array
 *
 * @s: the first address of the array
 * @n: the number of elements
 * @b: the element of index i
 *
 * Return: pointer to an array &S
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}

	return (s);
}
