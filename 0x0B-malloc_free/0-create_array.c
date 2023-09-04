#include "main.h"

/**
 * *create_array - this is main function
 *
 * @size: the size of variable
 * @c: to the first location in memory
 *
 * Return: NULL or pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || x == 0)
		return (0);

	while (size--)
		x[size] = c;

	return (0);
}
