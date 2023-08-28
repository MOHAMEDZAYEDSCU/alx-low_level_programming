#include "main.h"

/**
 * *_memcpy - funciton to return the address of an array
 *
 * @s: the first address of the array
 * @n: the number of elements
 * @b: the element of index i
 *
 * Return: pointer to an array &S
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];

	return (dest);
}
