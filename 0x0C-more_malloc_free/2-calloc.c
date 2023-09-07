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
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < size * nmemb ; i++)
		ptr[i] = 0;

	return (ptr);
}
