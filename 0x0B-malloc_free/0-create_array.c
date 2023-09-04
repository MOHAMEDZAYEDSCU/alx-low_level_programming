#include "main.h"

/**
 * *create_array - this is main function
 *
 * @size: the size of variable
 * @c: to the first location in memory
 *
 * Return: NULL or 1
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *x = malloc(size);

	if (size == 0 || x == 0)
		return (NULL);

	for (i = 0 ; i < size ; i++)
	{
		x[i] = c;
	}

	return (0);
}
