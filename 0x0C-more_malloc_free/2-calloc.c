#include "main.h"

/**
 * _calloc - make block of memory for use
 *
 * @nmemb: number of elements
 * @size: the type size
 *
 * Return: void function
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;


	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
