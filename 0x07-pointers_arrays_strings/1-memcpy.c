#include "main.h"

/**
 * *_memcpy - funciton to return the address of an array
 *
 * @dest: the coppied array
 * @src: the source array
 * @n: the number of elements
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
