#include "main.h"

/**
 * malloc_checked - make block of memory for use
 *
 * @b: No. of locations
 *
 * Return: void function
 */

void *malloc_checked(unsigned int b)
{
	char *ptr = malloc(b);

	if (ptr == NULL)
		exit(0);

	return (ptr);
}
